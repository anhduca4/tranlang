import { registerAs } from '@nestjs/config';

let i18nList = ['en', 'ko', 'ja'];
if (process.env.LIST_I18N) {
  i18nList = process.env.LIST_I18N.split(',');
}
export default registerAs('app', () => ({
  port: process.env.PORT || 3000,
  isSwagger: process.env.IS_SWAGGER || true,
  uploadDir: process.env.UPLOAD_DIR || '',
  i18nFolder: process.env.I18N_FOLDER || '/home/duc/tconnect_new/frontend/src/locales',
  defaultI18n: process.env.DEFAULT_I18N || 'en',
  i18nList, 
  needRebuild: process.env.NEED_REBUILD === 'yes',
  appFolder: process.env.APP_FOLDER || '/home/duc/my_wordpress/frontend/',
  proFolder: process.env.PRO_FOLDER || '/home/duc/my_wordpress/frontend/',
}));
