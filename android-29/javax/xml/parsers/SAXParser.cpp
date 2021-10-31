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
	
	// QJniObject forward
	SAXParser::SAXParser(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass SAXParser::getParser()
	{
		return callObjectMethod(
			"getParser",
			"()Lorg/xml/sax/Parser;"
		);
	}
	jobject SAXParser::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	javax::xml::validation::Schema SAXParser::getSchema()
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	__JniBaseClass SAXParser::getXMLReader()
	{
		return callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	jboolean SAXParser::isNamespaceAware()
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean SAXParser::isValidating()
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean SAXParser::isXIncludeAware()
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	void SAXParser::parse(java::io::File arg0, org::xml::sax::HandlerBase arg1)
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/HandlerBase;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(java::io::File arg0, org::xml::sax::helpers::DefaultHandler arg1)
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1)
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1)
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(jstring arg0, org::xml::sax::HandlerBase arg1)
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V",
			arg0,
			arg1.object()
		);
	}
	void SAXParser::parse(jstring arg0, org::xml::sax::helpers::DefaultHandler arg1)
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0,
			arg1.object()
		);
	}
	void SAXParser::parse(org::xml::sax::InputSource arg0, org::xml::sax::HandlerBase arg1)
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(org::xml::sax::InputSource arg0, org::xml::sax::helpers::DefaultHandler arg1)
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1, jstring arg2)
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1, jstring arg2)
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void SAXParser::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void SAXParser::setProperty(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
} // namespace javax::xml::parsers

