import { ApiProperty } from '@nestjs/swagger';

export class UpdateI18nDto {
  @ApiProperty()
  body: any;
}

export class UpdateLangDto {
  @ApiProperty()
  key: string;
}
