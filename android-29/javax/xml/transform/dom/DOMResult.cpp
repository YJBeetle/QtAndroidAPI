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
	
	DOMResult::DOMResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DOMResult::DOMResult()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"()V"
		);
	}
	DOMResult::DOMResult(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object()
		);
	}
	DOMResult::DOMResult(__JniBaseClass &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	DOMResult::DOMResult(__JniBaseClass &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	DOMResult::DOMResult(__JniBaseClass &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	DOMResult::DOMResult(__JniBaseClass &arg0, __JniBaseClass &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	DOMResult::DOMResult(__JniBaseClass &arg0, __JniBaseClass &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject DOMResult::getNextSibling()
	{
		return __thiz.callObjectMethod(
			"getNextSibling",
			"()Lorg/w3c/dom/Node;"
		);
	}
	QAndroidJniObject DOMResult::getNode()
	{
		return __thiz.callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;"
		);
	}
	jstring DOMResult::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DOMResult::setNextSibling(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setNextSibling",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object()
		);
	}
	void DOMResult::setNode(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object()
		);
	}
	void DOMResult::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DOMResult::setSystemId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace javax::xml::transform::dom

