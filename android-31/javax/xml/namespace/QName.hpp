#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./QName.def.hpp"

namespace javax::xml::namespace_
{
	// Fields
	
	// Constructors
	inline QName::QName(JString arg0)
		: JObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline QName::QName(JString arg0, JString arg1)
		: JObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline QName::QName(JString arg0, JString arg1, JString arg2)
		: JObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline javax::xml::namespace_::QName QName::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.namespace.QName",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/xml/namespace/QName;",
			arg0.object<jstring>()
		);
	}
	inline jboolean QName::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString QName::getLocalPart() const
	{
		return callObjectMethod(
			"getLocalPart",
			"()Ljava/lang/String;"
		);
	}
	inline JString QName::getNamespaceURI() const
	{
		return callObjectMethod(
			"getNamespaceURI",
			"()Ljava/lang/String;"
		);
	}
	inline JString QName::getPrefix() const
	{
		return callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		);
	}
	inline jint QName::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString QName::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::namespace_

// Base class headers

