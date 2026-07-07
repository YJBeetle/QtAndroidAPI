#pragma once

#include "../../../JCharArray.hpp"
#include "../../../JString.hpp"
#include "./InputSource.def.hpp"
#include "./SAXParseException.def.hpp"
#include "./HandlerBase.def.hpp"

namespace org::xml::sax
{
	// Fields
	
	// Constructors
	inline HandlerBase::HandlerBase()
		: JObject(
			"org.xml.sax.HandlerBase",
			"()V"
		) {}
	
	// Methods
	inline void HandlerBase::characters(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void HandlerBase::endDocument() const
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	inline void HandlerBase::endElement(JString arg0) const
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HandlerBase::error(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	inline void HandlerBase::fatalError(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	inline void HandlerBase::ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void HandlerBase::notationDecl(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void HandlerBase::processingInstruction(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline org::xml::sax::InputSource HandlerBase::resolveEntity(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void HandlerBase::setDocumentLocator(JObject arg0) const
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	inline void HandlerBase::startDocument() const
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	inline void HandlerBase::startElement(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void HandlerBase::unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3) const
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
	inline void HandlerBase::warning(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"warning",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
} // namespace org::xml::sax

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xml::sax;
#endif
