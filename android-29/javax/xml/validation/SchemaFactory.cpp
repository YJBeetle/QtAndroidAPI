#include "../../../JArray.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/lang/ClassLoader.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/URL.hpp"
#include "./Schema.hpp"
#include "./SchemaFactory.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// Constructors
	
	// Methods
	javax::xml::validation::SchemaFactory SchemaFactory::newDefaultInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newDefaultInstance",
			"()Ljavax/xml/validation/SchemaFactory;"
		);
	}
	javax::xml::validation::SchemaFactory SchemaFactory::newInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0.object<jstring>()
		);
	}
	javax::xml::validation::SchemaFactory SchemaFactory::newInstance(JString arg0, JString arg1, java::lang::ClassLoader arg2)
	{
		return callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/validation/SchemaFactory;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	JObject SchemaFactory::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean SchemaFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject SchemaFactory::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JObject SchemaFactory::getResourceResolver() const
	{
		return callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;"
		);
	}
	jboolean SchemaFactory::isSchemaLanguageSupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isSchemaLanguageSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema() const
	{
		return callObjectMethod(
			"newSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema(JArray arg0) const
	{
		return callObjectMethod(
			"newSchema",
			"([Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0.object<jarray>()
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema(java::io::File arg0) const
	{
		return callObjectMethod(
			"newSchema",
			"(Ljava/io/File;)Ljavax/xml/validation/Schema;",
			arg0.object()
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema(java::net::URL arg0) const
	{
		return callObjectMethod(
			"newSchema",
			"(Ljava/net/URL;)Ljavax/xml/validation/Schema;",
			arg0.object()
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema(JObject arg0) const
	{
		return callObjectMethod(
			"newSchema",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0.object()
		);
	}
	void SchemaFactory::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void SchemaFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void SchemaFactory::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	void SchemaFactory::setResourceResolver(JObject arg0) const
	{
		callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::validation

