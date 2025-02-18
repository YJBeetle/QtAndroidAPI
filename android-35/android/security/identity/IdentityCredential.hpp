#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JIntArray.hpp"
#include "./PersonalizationData.def.hpp"
#include "./ResultData.def.hpp"
#include "../../../java/security/KeyPair.def.hpp"
#include "../../../java/security/cert/X509Certificate.def.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./IdentityCredential.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::KeyPair IdentityCredential::createEphemeralKeyPair() const
	{
		return callObjectMethod(
			"createEphemeralKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	inline JByteArray IdentityCredential::decryptMessageFromReader(JByteArray arg0) const
	{
		return callObjectMethod(
			"decryptMessageFromReader",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline JByteArray IdentityCredential::delete_(JByteArray arg0) const
	{
		return callObjectMethod(
			"delete",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline JByteArray IdentityCredential::encryptMessageToReader(JByteArray arg0) const
	{
		return callObjectMethod(
			"encryptMessageToReader",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline JObject IdentityCredential::getAuthKeysNeedingCertification() const
	{
		return callObjectMethod(
			"getAuthKeysNeedingCertification",
			"()Ljava/util/Collection;"
		);
	}
	inline JIntArray IdentityCredential::getAuthenticationDataUsageCount() const
	{
		return callObjectMethod(
			"getAuthenticationDataUsageCount",
			"()[I"
		);
	}
	inline JObject IdentityCredential::getAuthenticationKeyMetadata() const
	{
		return callObjectMethod(
			"getAuthenticationKeyMetadata",
			"()Ljava/util/List;"
		);
	}
	inline JObject IdentityCredential::getCredentialKeyCertificateChain() const
	{
		return callObjectMethod(
			"getCredentialKeyCertificateChain",
			"()Ljava/util/Collection;"
		);
	}
	inline android::security::identity::ResultData IdentityCredential::getEntries(JByteArray arg0, JObject arg1, JByteArray arg2, JByteArray arg3) const
	{
		return callObjectMethod(
			"getEntries",
			"([BLjava/util/Map;[B[B)Landroid/security/identity/ResultData;",
			arg0.object<jbyteArray>(),
			arg1.object(),
			arg2.object<jbyteArray>(),
			arg3.object<jbyteArray>()
		);
	}
	inline JByteArray IdentityCredential::proveOwnership(JByteArray arg0) const
	{
		return callObjectMethod(
			"proveOwnership",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline void IdentityCredential::setAllowUsingExhaustedKeys(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowUsingExhaustedKeys",
			"(Z)V",
			arg0
		);
	}
	inline void IdentityCredential::setAllowUsingExpiredKeys(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowUsingExpiredKeys",
			"(Z)V",
			arg0
		);
	}
	inline void IdentityCredential::setAvailableAuthenticationKeys(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setAvailableAuthenticationKeys",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void IdentityCredential::setAvailableAuthenticationKeys(jint arg0, jint arg1, jlong arg2) const
	{
		callMethod<void>(
			"setAvailableAuthenticationKeys",
			"(IIJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void IdentityCredential::setReaderEphemeralPublicKey(JObject arg0) const
	{
		callMethod<void>(
			"setReaderEphemeralPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	inline void IdentityCredential::storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"storeStaticAuthenticationData",
			"(Ljava/security/cert/X509Certificate;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline void IdentityCredential::storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, java::time::Instant arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"storeStaticAuthenticationData",
			"(Ljava/security/cert/X509Certificate;Ljava/time/Instant;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>()
		);
	}
	inline JByteArray IdentityCredential::update(android::security::identity::PersonalizationData arg0) const
	{
		return callObjectMethod(
			"update",
			"(Landroid/security/identity/PersonalizationData;)[B",
			arg0.object()
		);
	}
} // namespace android::security::identity

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::identity;
#endif
