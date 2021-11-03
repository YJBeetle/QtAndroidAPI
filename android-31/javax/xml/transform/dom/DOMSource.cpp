#include "./DOMSource.hpp"

namespace javax::xml::transform::dom
{
	// Fields
	jstring DOMSource::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.dom.DOMSource",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	DOMSource::DOMSource(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DOMSource::DOMSource()
		: JObject(
			"javax.xml.transform.dom.DOMSource",
			"()V"
		) {}
	DOMSource::DOMSource(JObject arg0)
		: JObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		) {}
	DOMSource::DOMSource(JObject arg0, jstring arg1)
		: JObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	JObject DOMSource::getNode()
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
	void DOMSource::setNode(JObject arg0)
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

