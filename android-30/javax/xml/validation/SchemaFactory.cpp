#include "../../../java/io/File.hpp"
#include "../../../java/lang/ClassLoader.hpp"
#include "../../../java/net/URL.hpp"
#include "./Schema.hpp"
#include "./SchemaFactory.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QJniObject forward
	SchemaFactory::SchemaFactory(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	javax::xml::validation::SchemaFactory SchemaFactory::newInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0
		);
	}
	javax::xml::validation::SchemaFactory SchemaFactory::newInstance(jstring arg0, jstring arg1, java::lang::ClassLoader arg2)
	{
		return callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/validation/SchemaFactory;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	__JniBaseClass SchemaFactory::getErrorHandler()
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean SchemaFactory::getFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jobject SchemaFactory::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	__JniBaseClass SchemaFactory::getResourceResolver()
	{
		return callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;"
		);
	}
	jboolean SchemaFactory::isSchemaLanguageSupported(jstring arg0)
	{
		return callMethod<jboolean>(
			"isSchemaLanguageSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema()
	{
		return callObjectMethod(
			"newSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema(jarray arg0)
	{
		return callObjectMethod(
			"newSchema",
			"([Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema(java::io::File arg0)
	{
		return callObjectMethod(
			"newSchema",
			"(Ljava/io/File;)Ljavax/xml/validation/Schema;",
			arg0.object()
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema(java::net::URL arg0)
	{
		return callObjectMethod(
			"newSchema",
			"(Ljava/net/URL;)Ljavax/xml/validation/Schema;",
			arg0.object()
		);
	}
	javax::xml::validation::Schema SchemaFactory::newSchema(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"newSchema",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0.object()
		);
	}
	void SchemaFactory::setErrorHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void SchemaFactory::setFeature(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void SchemaFactory::setProperty(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void SchemaFactory::setResourceResolver(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::validation

