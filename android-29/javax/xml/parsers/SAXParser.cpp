#include "../../../java/io/File.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../validation/Schema.hpp"
#include "../../../org/xml/sax/HandlerBase.hpp"
#include "../../../org/xml/sax/InputSource.hpp"
#include "../../../org/xml/sax/helpers/DefaultHandler.hpp"
#include "./SAXParser.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	SAXParser::SAXParser(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SAXParser::getParser()
	{
		return __thiz.callObjectMethod(
			"getParser",
			"()Lorg/xml/sax/Parser;"
		);
	}
	jobject SAXParser::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject SAXParser::getSchema()
	{
		return __thiz.callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	QAndroidJniObject SAXParser::getXMLReader()
	{
		return __thiz.callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	jboolean SAXParser::isNamespaceAware()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean SAXParser::isValidating()
	{
		return __thiz.callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean SAXParser::isXIncludeAware()
	{
		return __thiz.callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	void SAXParser::parse(java::io::File arg0, org::xml::sax::HandlerBase arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/HandlerBase;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(java::io::File arg0, org::xml::sax::helpers::DefaultHandler arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(jstring arg0, org::xml::sax::HandlerBase arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(jstring arg0, org::xml::sax::helpers::DefaultHandler arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(org::xml::sax::InputSource arg0, org::xml::sax::HandlerBase arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(org::xml::sax::InputSource arg0, org::xml::sax::helpers::DefaultHandler arg1)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SAXParser::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void SAXParser::setProperty(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
} // namespace javax::xml::parsers

