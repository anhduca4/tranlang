import React, { useEffect, useState } from 'react';
import { Col, Row, Select, Table, Tag, Form, Button, Input, message, Affix } from 'antd';
import { getBodyFile, getI18nConfig, updateBody } from './api';
// import TextArea from 'antd/lib/input/TextArea';
const { TextArea } = Input;

const { Option } = Select;

// const data = [
//   {
//     key: '1',
//     name: 'John Brown',
//     age: 32,
//     address: 'New York No. 1 Lake Park',
//     tags: ['nice', 'developer'],
//   },
//   {
//     key: '2',
//     name: 'Jim Green',
//     age: 42,
//     address: 'London No. 1 Lake Park',
//     tags: ['loser'],
//   },
//   {
//     key: '3',
//     name: 'Joe Black',
//     age: 32,
//     address: 'Sidney No. 1 Lake Park',
//     tags: ['cool', 'teacher'],
//   },
// ];

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
    const listKey = Object.keys(dataDefault.data);
    for (const k of listKey) {
      let translate = '';
      if (resLang && resLang.data && resLang.data[k]) {
        translate = resLang.data[k];
      }
      const langOfKey = {
        key: k,
        default: dataDefault.data[k],
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
      await updateBody(loadFile.lang, loadFile.file, newTranslate);
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
