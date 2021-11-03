#include "../../../java/io/File.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../validation/Schema.hpp"
#include "../../../org/xml/sax/HandlerBase.hpp"
#include "../../../org/xml/sax/InputSource.hpp"
#include "../../../org/xml/sax/helpers/DefaultHandler.hpp"
#include "./SAXParser.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// QJniObject forward
	SAXParser::SAXParser(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject SAXParser::getParser() const
	{
		return callObjectMethod(
			"getParser",
			"()Lorg/xml/sax/Parser;"
		);
	}
	JObject SAXParser::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	javax::xml::validation::Schema SAXParser::getSchema() const
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	JObject SAXParser::getXMLReader() const
	{
		return callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	jboolean SAXParser::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean SAXParser::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean SAXParser::isXIncludeAware() const
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	void SAXParser::parse(java::io::File arg0, org::xml::sax::HandlerBase arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/HandlerBase;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(java::io::File arg0, org::xml::sax::helpers::DefaultHandler arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(JString arg0, org::xml::sax::HandlerBase arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void SAXParser::parse(JString arg0, org::xml::sax::helpers::DefaultHandler arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void SAXParser::parse(org::xml::sax::InputSource arg0, org::xml::sax::HandlerBase arg1) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(org::xml::sax::InputSource arg0, org::xml::sax::helpers::DefaultHandler arg1) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1, JString arg2) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1, JString arg2) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	void SAXParser::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void SAXParser::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
} // namespace javax::xml::parsers

