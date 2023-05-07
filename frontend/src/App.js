import React, { useEffect, useState } from 'react';
import { Col, Row, Select, Table, Tag, Form, Button, Input, message, Affix } from 'antd';
import { getBodyFile, getI18nConfig, updateBody } from './api';
import flatten from  'flat';
// import TextArea from 'antd/lib/input/TextArea';
const { TextArea } = Input;

const { Option } = Select;

const cColumns = (u) => {

  return [
    {
      title: 'key',
      dataIndex: 'key',
      key: 'key',
      render: (text) => <a>{text}</a>,
    },
    {
      title: 'Nội dung mặc định',
      dataIndex: 'default',
      key: 'default',
      width: '40%',
    },
    {
      title: 'Nội dung cần dịch',
      dataIndex: 'translate',
      key: 'translate',
      render: (text, record) => (
        <TextArea
          value={text}
          onChange={(e) => u(e.target.value, record.key)}
          autoSize={{ minRows: 3, maxRows: 5 }}
        />
      ),
    },
  ];
}
const App = () => {

  const [configData, setConfigData] = useState();
  const [loadFile, setLoadFile] = useState();
  const [data, setData] = useState();
  const [newTranslate, setNewTranslate] = useState();
  const [loading, setLoading] = useState(false);

  const columns = cColumns((value, key) => {

    const newData = data.map(d => {
      if (d.key !== key) {
        return d;
      }
      d.translate = value;
      return d;
    });

    setData([...newData]);
    setNewTranslate({
      ...newTranslate,
      [key]: value,
    });
  });

  const loadData = async () => {
    const dataDefault = await getBodyFile(configData.defaultI18n, loadFile.file);
    if (!dataDefault || !dataDefault.data) {
      return;
    }

    const resLang = await getBodyFile(loadFile.lang, loadFile.file);
    const listLang = [];
    const langs = flatten(dataDefault.data);
    const listKey = Object.keys(langs);
    for (const k of listKey) {
      let translate = '';
      if (resLang && resLang.data) {
        const langTrans = flatten(resLang.data);
        if (langTrans[k]) {
          translate = langTrans[k];
        }
      }

      const langOfKey = {
        key: k,
        default: langs[k] ?? '',
        translate,
      };
      listLang.push(langOfKey);
    }
    setData([...listLang]);
    setNewTranslate({
      ...resLang.data,
    });
  }

  useEffect(() => {

    loadData();
  }, [loadFile, configData]);

  const handleGetConfig = async () => {
    const data = await getI18nConfig();
    if (data.data && data.data.defaultI18n) {
      setConfigData(data.data);
      setLoadFile({
        lang: data.data?.i18nFiles[0],
        file: data.data?.dfFile[0],
      });
    }
  }

  useEffect(() => {
    handleGetConfig();
  }, []);

  const handleChange = (value) => {
    setLoadFile({
      ...loadFile,
      lang: value,
    });
  }

  const handleChangeFile = (value) => {
    setLoadFile({
      ...loadFile,
      file: value,
    });
  }

  const handleSave = async (e) => {
    setLoading(true);
    const hide = message.loading('Đang cập nhật');
    try {
      await updateBody(loadFile.lang, loadFile.file, flatten.unflatten(newTranslate));
      await loadData();
      hide();
      message.success('Đã cập nhật thành công');
    } catch (e) {
      message.error('Có lỗi trong quá trình cập nhật');
    }
    setLoading(false);
  }

  return (
    <div style={{ paddingTop: '20px' }}>
      <Affix top={10}>
        <Row>
          <Col span={8}>
            <Form.Item
              name="lang"
              label="Ngôn ngữ"
            >
              {configData && (
                <Select
                  defaultValue={configData.i18nFiles[0]}
                  onChange={handleChange}
                >

                  {configData.i18nFiles.map(i18n => (

                    <Option key={i18n} value={i18n}>{i18n}</Option>
                  ))}
                </Select>
              )}
            </Form.Item>
          </Col>
          <Col span={8}>
            <Form.Item
              name="file"
              label="Loại file ngôn ngữ cần dịch"
            >
              {configData && (
                <Select
                  defaultValue={configData.dfFile[0]}
                  onChange={handleChangeFile}
                >

                  {configData.dfFile.map(f => (

                    <Option key={f} value={f}>{f}</Option>
                  ))}
                </Select>
              )}
            </Form.Item>
          </Col>
          <Col span={8}>
            <Form.Item wrapperCol={{ offset: 2, span: 16 }}>
              <Button
                type="primary"
                onClick={(e) => {
                  handleSave(e);
                }}
                disable={loading}
              >
                Lưu lại
              </Button>
            </Form.Item>
          </Col>
        </Row>
      </Affix>
      <Table
        columns={columns}
        dataSource={data}
        pagination={{
          pageSize: 100,
        }}
      />
    </div>
  );
}

export default App;
