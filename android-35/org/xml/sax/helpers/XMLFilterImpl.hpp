#pragma once

#include "../../../../JCharArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../InputSource.def.hpp"
#include "../SAXParseException.def.hpp"
#include "./XMLFilterImpl.def.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	inline XMLFilterImpl::XMLFilterImpl()
		: JObject(
			"org.xml.sax.helpers.XMLFilterImpl",
			"()V"
		) {}
	inline XMLFilterImpl::XMLFilterImpl(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.XMLFilterImpl",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void XMLFilterImpl::characters(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void XMLFilterImpl::endDocument() const
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	inline void XMLFilterImpl::endElement(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void XMLFilterImpl::endPrefixMapping(JString arg0) const
	{
		callMethod<void>(
			"endPrefixMapping",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void XMLFilterImpl::error(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	inline void XMLFilterImpl::fatalError(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	inline JObject XMLFilterImpl::getContentHandler() const
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	inline JObject XMLFilterImpl::getDTDHandler() const
	{
		return callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	inline JObject XMLFilterImpl::getEntityResolver() const
	{
		return callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	inline JObject XMLFilterImpl::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	inline jboolean XMLFilterImpl::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject XMLFilterImpl::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	inline JObject XMLFilterImpl::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline void XMLFilterImpl::ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void XMLFilterImpl::notationDecl(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void XMLFilterImpl::parse(JString arg0) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void XMLFilterImpl::parse(org::xml::sax::InputSource arg0) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	inline void XMLFilterImpl::processingInstruction(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline org::xml::sax::InputSource XMLFilterImpl::resolveEntity(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void XMLFilterImpl::setContentHandler(JObject arg0) const
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	inline void XMLFilterImpl::setDTDHandler(JObject arg0) const
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	inline void XMLFilterImpl::setDocumentLocator(JObject arg0) const
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	inline void XMLFilterImpl::setEntityResolver(JObject arg0) const
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	inline void XMLFilterImpl::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	inline void XMLFilterImpl::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void XMLFilterImpl::setParent(JObject arg0) const
	{
		callMethod<void>(
			"setParent",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		);
	}
	inline void XMLFilterImpl::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void XMLFilterImpl::skippedEntity(JString arg0) const
	{
		callMethod<void>(
			"skippedEntity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void XMLFilterImpl::startDocument() const
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	inline void XMLFilterImpl::startElement(JString arg0, JString arg1, JString arg2, JObject arg3) const
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
	inline void XMLFilterImpl::startPrefixMapping(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"startPrefixMapping",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void XMLFilterImpl::unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3) const
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
	inline void XMLFilterImpl::warning(org::xml::sax::SAXParseException arg0) const
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
