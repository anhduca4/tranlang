import { InjectQueue } from "@nestjs/bull";
import { Injectable, Logger } from "@nestjs/common";
import { ConfigService } from "@nestjs/config";
import { Queue } from "bull";
import { exec } from "child_process";
import { readFileSync, writeFileSync } from "fs";
import { join } from "path";

@Injectable()
export class DeployService {
  private logger: Logger = new Logger(DeployService.name);
  constructor(
    private configSerVice: ConfigService,
    @InjectQueue('deploy') private readonly deployQueue: Queue,
  ){}

  async deploy() {
    const a = await this.getState();
    const jsonFile = join(process.cwd(), "state.json");
    if (a.status === "inprocess") {
      return a;
    }
    
    const proFolder = this.configSerVice.get<string>('app.proFolder');
    console.log('proFolder', proFolder);
    a.status = "inprocess";
    writeFileSync(jsonFile, JSON.stringify(a));
    this.deployQueue.add('run');
    return a;
  }

  async getState() {
    const jsonFile = join(process.cwd(), "state.json");
    const a = readFileSync(jsonFile, "utf8");
    return JSON.parse(a);
  }

  async run() {
    const proFolder = this.configSerVice.get<string>('app.proFolder');
    const a = await this.getState();
    const jsonFile = join(process.cwd(), "state.json");
    try {
      this.logger.log('Start deploy');
      const log = await new Promise((resolve, reject) => {
        exec('./deploy.sh', { cwd: proFolder }, (err, stout, sterr) => {
          if(err) {
            reject(sterr)
          } else {
            resolve(stout)
          }
        });
      });
      console.log(log);
      this.logger.log('Done deploy');
      a.status = "done";
    } catch (e) {
      this.logger.log('Error deploy');
      console.error(e);
      a.status = "error";
    }
    writeFileSync(jsonFile, JSON.stringify(a));

  }
}
