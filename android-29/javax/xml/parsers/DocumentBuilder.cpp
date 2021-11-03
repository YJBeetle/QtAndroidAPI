#include "../../../java/io/File.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../JString.hpp"
#include "../validation/Schema.hpp"
#include "../../../org/xml/sax/InputSource.hpp"
#include "./DocumentBuilder.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// QAndroidJniObject forward
	DocumentBuilder::DocumentBuilder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject DocumentBuilder::getDOMImplementation() const
	{
		return callObjectMethod(
			"getDOMImplementation",
			"()Lorg/w3c/dom/DOMImplementation;"
		);
	}
	javax::xml::validation::Schema DocumentBuilder::getSchema() const
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	jboolean DocumentBuilder::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean DocumentBuilder::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean DocumentBuilder::isXIncludeAware() const
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	JObject DocumentBuilder::newDocument() const
	{
		return callObjectMethod(
			"newDocument",
			"()Lorg/w3c/dom/Document;"
		);
	}
	JObject DocumentBuilder::parse(java::io::File arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/io/File;)Lorg/w3c/dom/Document;",
			arg0.object()
		);
	}
	JObject DocumentBuilder::parse(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;)Lorg/w3c/dom/Document;",
			arg0.object()
		);
	}
	JObject DocumentBuilder::parse(JString arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0.object<jstring>()
		);
	}
	JObject DocumentBuilder::parse(org::xml::sax::InputSource arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;",
			arg0.object()
		);
	}
	JObject DocumentBuilder::parse(java::io::InputStream arg0, JString arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DocumentBuilder::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void DocumentBuilder::setEntityResolver(JObject arg0) const
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	void DocumentBuilder::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::parsers

