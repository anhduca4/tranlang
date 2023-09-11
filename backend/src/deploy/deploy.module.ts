import { BullModule } from "@nestjs/bull";
import { Module } from "@nestjs/common";
import { DeployController } from "./deploy.controller";
import { DeployProcessor } from "./services/deploy.processor";
import { DeployService } from "./services/deploy.service";


@Module({
  imports: [
    BullModule.registerQueue({
      name: 'deploy',
    }),
  ],
  controllers: [
    DeployController,
  ],
  providers: [
    DeployService,
    DeployProcessor,
  ],
})
export class DeployModule {};
