#include "../../../../JString.hpp"
#include "./DOMResult.hpp"

namespace javax::xml::transform::dom
{
	// Fields
	JString DOMResult::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.dom.DOMResult",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	DOMResult::DOMResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DOMResult::DOMResult()
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"()V"
		) {}
	DOMResult::DOMResult(JObject arg0)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		) {}
	DOMResult::DOMResult(JObject arg0, JString arg1)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	DOMResult::DOMResult(JObject arg0, JObject arg1)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V",
			arg0.object(),
			arg1.object()
		) {}
	DOMResult::DOMResult(JObject arg0, JObject arg1, JString arg2)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	JObject DOMResult::getNextSibling() const
	{
		return callObjectMethod(
			"getNextSibling",
			"()Lorg/w3c/dom/Node;"
		);
	}
	JObject DOMResult::getNode() const
	{
		return callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;"
		);
	}
	JString DOMResult::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	void DOMResult::setNextSibling(JObject arg0) const
	{
		callMethod<void>(
			"setNextSibling",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	void DOMResult::setNode(JObject arg0) const
	{
		callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	void DOMResult::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::transform::dom

