#pragma once

#include "../../../java/io/File.def.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "../validation/Schema.def.hpp"
#include "../../../org/xml/sax/InputSource.def.hpp"
#include "./DocumentBuilder.def.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject DocumentBuilder::getDOMImplementation() const
	{
		return callObjectMethod(
			"getDOMImplementation",
			"()Lorg/w3c/dom/DOMImplementation;"
		);
	}
	inline javax::xml::validation::Schema DocumentBuilder::getSchema() const
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	inline jboolean DocumentBuilder::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	inline jboolean DocumentBuilder::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	inline jboolean DocumentBuilder::isXIncludeAware() const
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	inline JObject DocumentBuilder::newDocument() const
	{
		return callObjectMethod(
			"newDocument",
			"()Lorg/w3c/dom/Document;"
		);
	}
	inline JObject DocumentBuilder::parse(java::io::File arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/io/File;)Lorg/w3c/dom/Document;",
			arg0.object()
		);
	}
	inline JObject DocumentBuilder::parse(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;)Lorg/w3c/dom/Document;",
			arg0.object()
		);
	}
	inline JObject DocumentBuilder::parse(JString arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0.object<jstring>()
		);
	}
	inline JObject DocumentBuilder::parse(org::xml::sax::InputSource arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;",
			arg0.object()
		);
	}
	inline JObject DocumentBuilder::parse(java::io::InputStream arg0, JString arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DocumentBuilder::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void DocumentBuilder::setEntityResolver(JObject arg0) const
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	inline void DocumentBuilder::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::parsers

// Base class headers

