#pragma once

#include "../../../java/io/File.def.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../validation/Schema.def.hpp"
#include "../../../org/xml/sax/HandlerBase.def.hpp"
#include "../../../org/xml/sax/InputSource.def.hpp"
#include "../../../org/xml/sax/helpers/DefaultHandler.def.hpp"
#include "./SAXParser.def.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject SAXParser::getParser() const
	{
		return callObjectMethod(
			"getParser",
			"()Lorg/xml/sax/Parser;"
		);
	}
	inline JObject SAXParser::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline javax::xml::validation::Schema SAXParser::getSchema() const
	{
		return callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	inline JObject SAXParser::getXMLReader() const
	{
		return callObjectMethod(
			"getXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	inline jboolean SAXParser::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	inline jboolean SAXParser::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	inline jboolean SAXParser::isXIncludeAware() const
	{
		return callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	inline void SAXParser::parse(java::io::File arg0, org::xml::sax::HandlerBase arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/HandlerBase;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SAXParser::parse(java::io::File arg0, org::xml::sax::helpers::DefaultHandler arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/File;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SAXParser::parse(JString arg0, org::xml::sax::HandlerBase arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void SAXParser::parse(JString arg0, org::xml::sax::helpers::DefaultHandler arg1) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void SAXParser::parse(org::xml::sax::InputSource arg0, org::xml::sax::HandlerBase arg1) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SAXParser::parse(org::xml::sax::InputSource arg0, org::xml::sax::helpers::DefaultHandler arg1) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1, JString arg2) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void SAXParser::parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1, JString arg2) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void SAXParser::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void SAXParser::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
} // namespace javax::xml::parsers

// Base class headers

