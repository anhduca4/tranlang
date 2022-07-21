import { Body, Controller, Get, Param, Post } from "@nestjs/common";
import { ApiTags } from "@nestjs/swagger";
import { I18nService } from "./i18n.service";
import { UpdateI18nDto } from "./update-i18n.dto";

@ApiTags('Import')
@Controller('i18n')
export class I18nController {
  constructor(
    private readonly service: I18nService,
  ) { }

  @Get('config')
  async getConfig() {
    const c = await this.service.readInfo();
    return c;
  }

  @Get('file/:lang/:id')
  async getBody(
    @Param('id') id: string,
    @Param('lang') lang: string,
  ) {
    const c = await this.service.readBody(lang, id);
    return c;
  }

  @Post('update/:lang/:id')
  async update(
    @Param('id') id: string,
    @Param('lang') lang: string,
    @Body() payload: UpdateI18nDto,
  ) {
    const c = await this.service.updateBody(lang, id, payload);
    return c;
  }
}
