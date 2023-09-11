import { Process, Processor } from '@nestjs/bull';
import { Logger } from '@nestjs/common';
import { Job } from 'bull';
import { DeployService } from './deploy.service';

@Processor('deploy')
export class DeployProcessor {
  private readonly logger = new Logger(DeployProcessor.name);

  constructor(
    private deployService: DeployService,
  ) {}

  @Process('run')
  handleTranscode(job: Job) {
    this.logger.debug('Start transcoding...');
    this.logger.debug(job.data);
    this.deployService.run();
    this.logger.debug('Transcoding completed');
  }
}
