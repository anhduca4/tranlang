import { Controller, Get, Post } from "@nestjs/common";
import { ApiTags } from "@nestjs/swagger";
import { DeployService } from "./services/deploy.service";

@ApiTags('Deploy')
@Controller('deploy')
export class DeployController {
  constructor(
    private deployService: DeployService,
  ) {}

  @Get()
  async getState() {
    return this.deployService.getState();
  }

  @Post()
  async deploy() {
    return this.deployService.deploy();
  }
}
