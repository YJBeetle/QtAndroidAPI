#pragma once

#include "../../../../JCharArray.hpp"
#include "../../../../JString.hpp"
#include "../InputSource.def.hpp"
#include "../SAXParseException.def.hpp"
#include "./DefaultHandler.def.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	inline DefaultHandler::DefaultHandler()
		: JObject(
			"org.xml.sax.helpers.DefaultHandler",
			"()V"
		) {}
	
	// Methods
	inline void DefaultHandler::characters(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void DefaultHandler::endDocument() const
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	inline void DefaultHandler::endElement(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void DefaultHandler::endPrefixMapping(JString arg0) const
	{
		callMethod<void>(
			"endPrefixMapping",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DefaultHandler::error(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	inline void DefaultHandler::fatalError(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	inline void DefaultHandler::ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void DefaultHandler::notationDecl(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void DefaultHandler::processingInstruction(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline org::xml::sax::InputSource DefaultHandler::resolveEntity(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void DefaultHandler::setDocumentLocator(JObject arg0) const
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	inline void DefaultHandler::skippedEntity(JString arg0) const
	{
		callMethod<void>(
			"skippedEntity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DefaultHandler::startDocument() const
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	inline void DefaultHandler::startElement(JString arg0, JString arg1, JString arg2, JObject arg3) const
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline void DefaultHandler::startPrefixMapping(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"startPrefixMapping",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void DefaultHandler::unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3) const
	{
		callMethod<void>(
			"unparsedEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline void DefaultHandler::warning(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"warning",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
} // namespace org::xml::sax::helpers

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xml::sax::helpers;
#endif
