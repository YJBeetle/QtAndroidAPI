#pragma once

#include "../../../../JString.hpp"
#include "./DOMResult.def.hpp"

namespace javax::xml::transform::dom
{
	// Fields
	inline JString DOMResult::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.dom.DOMResult",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline DOMResult::DOMResult()
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"()V"
		) {}
	inline DOMResult::DOMResult(JObject arg0)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		) {}
	inline DOMResult::DOMResult(JObject arg0, JString arg1)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline DOMResult::DOMResult(JObject arg0, JObject arg1)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DOMResult::DOMResult(JObject arg0, JObject arg1, JString arg2)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline JObject DOMResult::getNextSibling() const
	{
		return callObjectMethod(
			"getNextSibling",
			"()Lorg/w3c/dom/Node;"
		);
	}
	inline JObject DOMResult::getNode() const
	{
		return callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;"
		);
	}
	inline JString DOMResult::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline void DOMResult::setNextSibling(JObject arg0) const
	{
		callMethod<void>(
			"setNextSibling",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	inline void DOMResult::setNode(JObject arg0) const
	{
		callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	inline void DOMResult::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::transform::dom

// Base class headers

