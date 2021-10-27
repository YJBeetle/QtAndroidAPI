#include "./DOMSource.hpp"

namespace javax::xml::transform::dom
{
	// Fields
	jstring DOMSource::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.dom.DOMSource",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	DOMSource::DOMSource(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DOMSource::DOMSource()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMSource",
			"()V"
		);
	}
	DOMSource::DOMSource(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object()
		);
	}
	DOMSource::DOMSource(__JniBaseClass &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	DOMSource::DOMSource(__JniBaseClass &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject DOMSource::getNode()
	{
		return __thiz.callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;"
		);
	}
	jstring DOMSource::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DOMSource::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void DOMSource::setNode(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object()
		);
	}
	void DOMSource::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DOMSource::setSystemId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace javax::xml::transform::dom

