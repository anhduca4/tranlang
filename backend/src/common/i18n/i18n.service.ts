import { Injectable } from '@nestjs/common';
import { ConfigService } from '@nestjs/config';
import * as fs from 'fs';
import { UpdateI18nDto } from './update-i18n.dto';

@Injectable()
export class I18nService {

  constructor(
    private readonly configService: ConfigService,
  ) { }

  async readInfo() {

    const folder = this.configService.get<string>('app.i18nFolder');
    const defaultI18n = this.configService.get<string>('app.defaultI18n');

    const i18nFiles = [];

    fs.readdirSync(folder).forEach(file => {
      if (file.indexOf('.ts') > -1) {
        const fName = file.slice(0, -3);
        if (fName !== defaultI18n) {
          i18nFiles.push(fName);
        }
      }
    });

    const dfFile = [];
    fs.readdirSync(`${folder}/${defaultI18n}`).forEach(file => {
      if (file.indexOf('.json') > -1) {
        dfFile.push(file.slice(0, -5));
      }
    });

    console.log(i18nFiles);
    return {
      i18nFiles,
      dfFile,
      defaultI18n,
    };
  }

  async readBody(lang: string, id: string) {

    try {
      const folder = this.configService.get<string>('app.i18nFolder');
      const file = `${folder}/${lang}/${id}.json`;
      const txt = fs.readFileSync(file, {
        encoding: 'utf8',
        flag: 'r',
      });

      return JSON.parse(txt);
    } catch (e) {
      return {};
    }
  }

  async updateBody(lang: string, id: string, payload: UpdateI18nDto) {

    const folder = this.configService.get<string>('app.i18nFolder');
    const file = `${folder}/${lang}/${id}.json`;

    const txt = JSON.stringify(payload.body, null, 2);
    fs.writeFileSync(file, txt);
    return { success: true };
  }
}
