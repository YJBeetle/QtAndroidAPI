#pragma once

#include "../../../../JString.hpp"
#include "./DOMSource.def.hpp"

namespace javax::xml::transform::dom
{
	// Fields
	inline JString DOMSource::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.dom.DOMSource",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline DOMSource::DOMSource()
		: JObject(
			"javax.xml.transform.dom.DOMSource",
			"()V"
		) {}
	inline DOMSource::DOMSource(JObject arg0)
		: JObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		) {}
	inline DOMSource::DOMSource(JObject arg0, JString arg1)
		: JObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JObject DOMSource::getNode() const
	{
		return callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;"
		);
	}
	inline JString DOMSource::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean DOMSource::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline void DOMSource::setNode(JObject arg0) const
	{
		callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.object()
		);
	}
	inline void DOMSource::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::transform::dom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::transform::dom;
#endif
