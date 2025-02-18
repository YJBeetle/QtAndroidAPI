#pragma once

#include "../../../../JString.hpp"
#include "../../../../java/security/cert/X509Certificate.def.hpp"
#include "./X500PrivateCredential.def.hpp"

namespace javax::security::auth::x500
{
	// Fields
	
	// Constructors
	inline X500PrivateCredential::X500PrivateCredential(java::security::cert::X509Certificate arg0, JObject arg1)
		: JObject(
			"javax.security.auth.x500.X500PrivateCredential",
			"(Ljava/security/cert/X509Certificate;Ljava/security/PrivateKey;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline X500PrivateCredential::X500PrivateCredential(java::security::cert::X509Certificate arg0, JObject arg1, JString arg2)
		: JObject(
			"javax.security.auth.x500.X500PrivateCredential",
			"(Ljava/security/cert/X509Certificate;Ljava/security/PrivateKey;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline void X500PrivateCredential::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline JString X500PrivateCredential::getAlias() const
	{
		return callObjectMethod(
			"getAlias",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::cert::X509Certificate X500PrivateCredential::getCertificate() const
	{
		return callObjectMethod(
			"getCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JObject X500PrivateCredential::getPrivateKey() const
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	inline jboolean X500PrivateCredential::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
} // namespace javax::security::auth::x500

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::security::auth::x500;
#endif
