#include "./DOMResult.hpp"

namespace javax::xml::transform::dom
{
	// Fields
	jstring DOMResult::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.dom.DOMResult",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	DOMResult::DOMResult(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DOMResult::DOMResult()
		: __JniBaseClass(
			"javax.xml.transform.dom.DOMResult",
			"()V"
		) {}
	DOMResult::DOMResult(__JniBaseClass arg0)
		: __JniBaseClass(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		) {}
	DOMResult::DOMResult(__JniBaseClass arg0, jstring arg1)
		: __JniBaseClass(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	DOMResult::DOMResult(__JniBaseClass arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V",
			arg0.object(),
			arg1.object()
		) {}
	DOMResult::DOMResult(__JniBaseClass arg0, __JniBaseClass arg1, jstring arg2)
		: __JniBaseClass(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	__JniBaseClass DOMResult::getNextSibling()
	{
		return callObjectMethod(
			"getNextSibling",
			"()Lorg/w3c/dom/Node;"
		);
	}
	__JniBaseClass DOMResult::getNode()
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
	void DOMResult::setNextSibling(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setNextSibling",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	void DOMResult::setNode(__JniBaseClass arg0)
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

