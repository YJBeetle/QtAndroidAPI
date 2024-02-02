#pragma once

#include "../../JString.hpp"
#include "./KeyStore_SecretKeyEntry.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(JObject arg0)
		: JObject(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;)V",
			arg0.object()
		) {}
	inline KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(JObject arg0, JObject arg1)
		: JObject(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject KeyStore_SecretKeyEntry::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	inline JObject KeyStore_SecretKeyEntry::getSecretKey() const
	{
		return callObjectMethod(
			"getSecretKey",
			"()Ljavax/crypto/SecretKey;"
		);
	}
	inline JString KeyStore_SecretKeyEntry::toString() const
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
