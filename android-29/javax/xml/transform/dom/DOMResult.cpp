#include "./DOMResult.hpp"

namespace javax::xml::transform::dom
{
	// Fields
	jstring DOMResult::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.dom.DOMResult",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
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
	DOMResult::DOMResult(JObject arg0, jstring arg1)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	DOMResult::DOMResult(JObject arg0, JObject arg1)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V",
			arg0.object(),
			arg1.object()
		) {}
	DOMResult::DOMResult(JObject arg0, JObject arg1, jstring arg2)
		: JObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	JObject DOMResult::getNextSibling()
	{
		return callObjectMethod(
			"getNextSibling",
			"()Lorg/w3c/dom/Node;"
		);
	}
	JObject DOMResult::getNode()
	{
		return callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;"
		);
	}
	jstring DOMResult::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DOMResult::setNextSibling(JObject arg0)
	{
		callMethod<void>(
			"setNextSibling",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	void DOMResult::setNode(JObject arg0)
	{
		callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	void DOMResult::setSystemId(jstring arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace javax::xml::transform::dom

