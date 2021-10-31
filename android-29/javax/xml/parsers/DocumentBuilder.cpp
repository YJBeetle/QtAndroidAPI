#include "../../../java/io/File.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../validation/Schema.hpp"
#include "../../../org/xml/sax/InputSource.hpp"
#include "./DocumentBuilder.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// QAndroidJniObject forward
	DocumentBuilder::DocumentBuilder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject DocumentBuilder::getDOMImplementation()
	{
		return callObjectMethod(
			"getDOMImplementation",
			"()Lorg/w3c/dom/DOMImplementation;"
		);
	}
	QAndroidJniObject DocumentBuilder::getSchema()
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	jboolean DocumentBuilder::isNamespaceAware()
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean DocumentBuilder::isValidating()
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean DocumentBuilder::isXIncludeAware()
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	QAndroidJniObject DocumentBuilder::newDocument()
	{
		return callObjectMethod(
			"newDocument",
			"()Lorg/w3c/dom/Document;"
		);
	}
	QAndroidJniObject DocumentBuilder::parse(java::io::File arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/io/File;)Lorg/w3c/dom/Document;",
			arg0.object()
		);
	}
	QAndroidJniObject DocumentBuilder::parse(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;)Lorg/w3c/dom/Document;",
			arg0.object()
		);
	}
	QAndroidJniObject DocumentBuilder::parse(jstring arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0
		);
	}
	QAndroidJniObject DocumentBuilder::parse(org::xml::sax::InputSource arg0)
	{
		return callObjectMethod(
			"parse",
			"(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;",
			arg0.object()
		);
	}
	QAndroidJniObject DocumentBuilder::parse(java::io::InputStream arg0, jstring arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0.object(),
			arg1
		);
	}
	void DocumentBuilder::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void DocumentBuilder::setEntityResolver(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	void DocumentBuilder::setErrorHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::parsers
