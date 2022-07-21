import axios from 'axios';

const url = process.env.REACT_APP_URL;

export const getI18nConfig = async () => {
  return await axios.get(`${url}/i18n/config`);
}

export const getBodyFile = async (lang, file) => {
  return await axios.get(`${url}/i18n/file/${lang}/${file}`);
}

export const updateBody = async (lang, file, body) => {
  return await axios.post(`${url}/i18n/update/${lang}/${file}`, { body });
}
