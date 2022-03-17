#pragma once

#include "../../../JArray.hpp"
#include "../../../java/io/File.def.hpp"
#include "../../../java/lang/ClassLoader.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/URL.def.hpp"
#include "./Schema.def.hpp"
#include "./SchemaFactory.def.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::xml::validation::SchemaFactory SchemaFactory::newDefaultInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newDefaultInstance",
			"()Ljavax/xml/validation/SchemaFactory;"
		);
	}
	inline javax::xml::validation::SchemaFactory SchemaFactory::newInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0.object<jstring>()
		);
	}
	inline javax::xml::validation::SchemaFactory SchemaFactory::newInstance(JString arg0, JString arg1, java::lang::ClassLoader arg2)
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
	inline JObject SchemaFactory::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	inline jboolean SchemaFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject SchemaFactory::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JObject SchemaFactory::getResourceResolver() const
	{
		return callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;"
		);
	}
	inline jboolean SchemaFactory::isSchemaLanguageSupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isSchemaLanguageSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline javax::xml::validation::Schema SchemaFactory::newSchema() const
	{
		return callObjectMethod(
			"newSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	inline javax::xml::validation::Schema SchemaFactory::newSchema(JArray arg0) const
	{
		return callObjectMethod(
			"newSchema",
			"([Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0.object<jarray>()
		);
	}
	inline javax::xml::validation::Schema SchemaFactory::newSchema(java::io::File arg0) const
	{
		return callObjectMethod(
			"newSchema",
			"(Ljava/io/File;)Ljavax/xml/validation/Schema;",
			arg0.object()
		);
	}
	inline javax::xml::validation::Schema SchemaFactory::newSchema(java::net::URL arg0) const
	{
		return callObjectMethod(
			"newSchema",
			"(Ljava/net/URL;)Ljavax/xml/validation/Schema;",
			arg0.object()
		);
	}
	inline javax::xml::validation::Schema SchemaFactory::newSchema(JObject arg0) const
	{
		return callObjectMethod(
			"newSchema",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0.object()
		);
	}
	inline void SchemaFactory::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	inline void SchemaFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void SchemaFactory::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void SchemaFactory::setResourceResolver(JObject arg0) const
	{
		callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::validation

// Base class headers

