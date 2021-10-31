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
	
	// QAndroidJniObject forward
	DOMSource::DOMSource(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DOMSource::DOMSource()
		: __JniBaseClass(
			"javax.xml.transform.dom.DOMSource",
			"()V"
		) {}
	DOMSource::DOMSource(__JniBaseClass arg0)
		: __JniBaseClass(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		) {}
	DOMSource::DOMSource(__JniBaseClass arg0, jstring arg1)
		: __JniBaseClass(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	QAndroidJniObject DOMSource::getNode()
	{
		return callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;"
		);
	}
	jstring DOMSource::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DOMSource::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void DOMSource::setNode(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	void DOMSource::setSystemId(jstring arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace javax::xml::transform::dom

