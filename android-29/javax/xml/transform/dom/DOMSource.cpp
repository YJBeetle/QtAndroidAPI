#include "../../../../JString.hpp"
#include "./DOMSource.hpp"

namespace javax::xml::transform::dom
{
	// Fields
	JString DOMSource::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.dom.DOMSource",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	DOMSource::DOMSource(QJniObject obj) : JObject(obj) {}
	
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
	DOMSource::DOMSource(JObject arg0, JString arg1)
		: JObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JObject DOMSource::getNode() const
	{
		return callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;"
		);
	}
	JString DOMSource::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	jboolean DOMSource::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void DOMSource::setNode(JObject arg0) const
	{
		callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	void DOMSource::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::transform::dom

