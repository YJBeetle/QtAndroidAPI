#pragma once

#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./IdentityScope.def.hpp"
#include "../util/Vector.def.hpp"
#include "./Identity.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline Identity::Identity(JString arg0)
		: JObject(
			"java.security.Identity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Identity::Identity(JString arg0, java::security::IdentityScope arg1)
		: JObject(
			"java.security.Identity",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline void Identity::addCertificate(JObject arg0) const
	{
		callMethod<void>(
			"addCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.object()
		);
	}
	inline JArray Identity::certificates() const
	{
		return callObjectMethod(
			"certificates",
			"()[Ljava/security/Certificate;"
		);
	}
	inline jboolean Identity::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString Identity::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;"
		);
	}
	inline JString Identity::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject Identity::getPublicKey() const
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	inline java::security::IdentityScope Identity::getScope() const
	{
		return callObjectMethod(
			"getScope",
			"()Ljava/security/IdentityScope;"
		);
	}
	inline jint Identity::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Identity::removeCertificate(JObject arg0) const
	{
		callMethod<void>(
			"removeCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.object()
		);
	}
	inline void Identity::setInfo(JString arg0) const
	{
		callMethod<void>(
			"setInfo",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Identity::setPublicKey(JObject arg0) const
	{
		callMethod<void>(
			"setPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	inline JString Identity::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JString Identity::toString(jboolean arg0) const
	{
		return callObjectMethod(
			"toString",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
