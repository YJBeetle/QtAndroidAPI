#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/regex/Pattern.def.hpp"
#include "./PKCS12Attribute.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline PKCS12Attribute::PKCS12Attribute(JByteArray arg0)
		: JObject(
			"java.security.PKCS12Attribute",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline PKCS12Attribute::PKCS12Attribute(JString arg0, JString arg1)
		: JObject(
			"java.security.PKCS12Attribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jboolean PKCS12Attribute::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray PKCS12Attribute::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JString PKCS12Attribute::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString PKCS12Attribute::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	inline jint PKCS12Attribute::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PKCS12Attribute::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
