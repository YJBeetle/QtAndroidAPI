#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./cert/Certificate.def.hpp"
#include "./KeyStore_PrivateKeyEntry.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(JObject arg0, JArray arg1)
		: JObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	inline KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(JObject arg0, JArray arg1, JObject arg2)
		: JObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object()
		) {}
	
	// Methods
	inline JObject KeyStore_PrivateKeyEntry::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	inline java::security::cert::Certificate KeyStore_PrivateKeyEntry::getCertificate() const
	{
		return callObjectMethod(
			"getCertificate",
			"()Ljava/security/cert/Certificate;"
		);
	}
	inline JArray KeyStore_PrivateKeyEntry::getCertificateChain() const
	{
		return callObjectMethod(
			"getCertificateChain",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	inline JObject KeyStore_PrivateKeyEntry::getPrivateKey() const
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	inline JString KeyStore_PrivateKeyEntry::toString() const
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
