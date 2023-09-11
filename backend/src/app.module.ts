import { BullModule } from '@nestjs/bull';
import { Module } from '@nestjs/common';
import { ConfigModule } from '@nestjs/config';
import { AppController } from './app.controller';
import { AppService } from './app.service';
import configuration from './common/config';
import { I18nModule } from './common/i18n/18n.module';
import { DeployModule } from './deploy/deploy.module';

@Module({
  imports: [
    ConfigModule.forRoot({
      load: configuration,
      isGlobal: true,
    }),

    BullModule.forRoot({
      redis: {
        host: 'localhost',
        port: 6379,
      },
    }),
    I18nModule,
    DeployModule,
  ],
  controllers: [AppController],
  providers: [AppService],
})
export class AppModule { }
