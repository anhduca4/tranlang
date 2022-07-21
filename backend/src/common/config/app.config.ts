import { registerAs } from '@nestjs/config';

export default registerAs('app', () => ({
  port: process.env.PORT || 3000,
  isSwagger: process.env.IS_SWAGGER || true,
  uploadDir: process.env.UPLOAD_DIR || '',
  i18nFolder: process.env.I18N_FOLDER || '/home/duc/tconnect/frontend/src/locales',
  defaultI18n: process.env.DEFAULT_I18N || 'vi-VN',
}));
