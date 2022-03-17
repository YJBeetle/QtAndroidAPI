#pragma once

#include "../../../../JString.hpp"
#include "./SAXResult.def.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	inline JString SAXResult::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXResult",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SAXResult::SAXResult()
		: JObject(
			"javax.xml.transform.sax.SAXResult",
			"()V"
		) {}
	inline SAXResult::SAXResult(JObject arg0)
		: JObject(
			"javax.xml.transform.sax.SAXResult",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject SAXResult::getHandler() const
	{
		return callObjectMethod(
			"getHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	inline JObject SAXResult::getLexicalHandler() const
	{
		return callObjectMethod(
			"getLexicalHandler",
			"()Lorg/xml/sax/ext/LexicalHandler;"
		);
	}
	inline JString SAXResult::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline void SAXResult::setHandler(JObject arg0) const
	{
		callMethod<void>(
			"setHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	inline void SAXResult::setLexicalHandler(JObject arg0) const
	{
		callMethod<void>(
			"setLexicalHandler",
			"(Lorg/xml/sax/ext/LexicalHandler;)V",
			arg0.object()
		);
	}
	inline void SAXResult::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::transform::sax

// Base class headers

