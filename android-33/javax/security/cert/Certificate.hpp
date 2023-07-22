#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Certificate.def.hpp"

namespace javax::security::cert
{
	// Fields
	
	// Constructors
	inline Certificate::Certificate()
		: JObject(
			"javax.security.cert.Certificate",
			"()V"
		) {}
	
	// Methods
	inline jboolean Certificate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray Certificate::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JObject Certificate::getPublicKey() const
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	inline jint Certificate::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Certificate::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Certificate::verify(JObject arg0) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	inline void Certificate::verify(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace javax::security::cert

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::security::cert;
#endif
