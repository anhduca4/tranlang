import { Module } from '@nestjs/common';
import { ConfigModule } from '@nestjs/config';
import { AppController } from './app.controller';
import { AppService } from './app.service';
import configuration from './common/config';
import { I18nModule } from './common/i18n/18n.module';

@Module({
  imports: [
    ConfigModule.forRoot({
      load: configuration,
      isGlobal: true,
    }),

    I18nModule,
  ],
  controllers: [AppController],
  providers: [AppService],
})
export class AppModule { }
