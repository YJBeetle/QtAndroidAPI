#pragma once

#include "../../../../JCharArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../InputSource.def.hpp"
#include "../SAXParseException.def.hpp"
#include "./AttributesImpl.def.hpp"
#include "./NamespaceSupport.def.hpp"
#include "./ParserAdapter.def.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	inline ParserAdapter::ParserAdapter()
		: JObject(
			"org.xml.sax.helpers.ParserAdapter",
			"()V"
		) {}
	inline ParserAdapter::ParserAdapter(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.ParserAdapter",
			"(Lorg/xml/sax/Parser;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ParserAdapter::characters(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void ParserAdapter::endDocument() const
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	inline void ParserAdapter::endElement(JString arg0) const
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JObject ParserAdapter::getContentHandler() const
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	inline JObject ParserAdapter::getDTDHandler() const
	{
		return callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	inline JObject ParserAdapter::getEntityResolver() const
	{
		return callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	inline JObject ParserAdapter::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	inline jboolean ParserAdapter::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject ParserAdapter::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline void ParserAdapter::ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void ParserAdapter::parse(JString arg0) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ParserAdapter::parse(org::xml::sax::InputSource arg0) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	inline void ParserAdapter::processingInstruction(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void ParserAdapter::setContentHandler(JObject arg0) const
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	inline void ParserAdapter::setDTDHandler(JObject arg0) const
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	inline void ParserAdapter::setDocumentLocator(JObject arg0) const
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	inline void ParserAdapter::setEntityResolver(JObject arg0) const
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	inline void ParserAdapter::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	inline void ParserAdapter::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ParserAdapter::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void ParserAdapter::startDocument() const
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	inline void ParserAdapter::startElement(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace org::xml::sax::helpers

// Base class headers

