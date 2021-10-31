#include "./PersonalizationData.hpp"
#include "./ResultData.hpp"
#include "../../../java/security/KeyPair.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "../../../java/time/Instant.hpp"
#include "./IdentityCredential.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	IdentityCredential::IdentityCredential(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::security::KeyPair IdentityCredential::createEphemeralKeyPair()
	{
		return callObjectMethod(
			"createEphemeralKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	jbyteArray IdentityCredential::decryptMessageFromReader(jbyteArray arg0)
	{
		return callObjectMethod(
			"decryptMessageFromReader",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray IdentityCredential::_delete(jbyteArray arg0)
	{
		return callObjectMethod(
			"delete",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray IdentityCredential::encryptMessageToReader(jbyteArray arg0)
	{
		return callObjectMethod(
			"encryptMessageToReader",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	__JniBaseClass IdentityCredential::getAuthKeysNeedingCertification()
	{
		return callObjectMethod(
			"getAuthKeysNeedingCertification",
			"()Ljava/util/Collection;"
		);
	}
	jintArray IdentityCredential::getAuthenticationDataUsageCount()
	{
		return callObjectMethod(
			"getAuthenticationDataUsageCount",
			"()[I"
		).object<jintArray>();
	}
	__JniBaseClass IdentityCredential::getCredentialKeyCertificateChain()
	{
		return callObjectMethod(
			"getCredentialKeyCertificateChain",
			"()Ljava/util/Collection;"
		);
	}
	android::security::identity::ResultData IdentityCredential::getEntries(jbyteArray arg0, __JniBaseClass arg1, jbyteArray arg2, jbyteArray arg3)
	{
		return callObjectMethod(
			"getEntries",
			"([BLjava/util/Map;[B[B)Landroid/security/identity/ResultData;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	jbyteArray IdentityCredential::proveOwnership(jbyteArray arg0)
	{
		return callObjectMethod(
			"proveOwnership",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	void IdentityCredential::setAllowUsingExhaustedKeys(jboolean arg0)
	{
		callMethod<void>(
			"setAllowUsingExhaustedKeys",
			"(Z)V",
			arg0
		);
	}
	void IdentityCredential::setAllowUsingExpiredKeys(jboolean arg0)
	{
		callMethod<void>(
			"setAllowUsingExpiredKeys",
			"(Z)V",
			arg0
		);
	}
	void IdentityCredential::setAvailableAuthenticationKeys(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setAvailableAuthenticationKeys",
			"(II)V",
			arg0,
			arg1
		);
	}
	void IdentityCredential::setReaderEphemeralPublicKey(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setReaderEphemeralPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void IdentityCredential::storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"storeStaticAuthenticationData",
			"(Ljava/security/cert/X509Certificate;[B)V",
			arg0.object(),
			arg1
		);
	}
	void IdentityCredential::storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, java::time::Instant arg1, jbyteArray arg2)
	{
		callMethod<void>(
			"storeStaticAuthenticationData",
			"(Ljava/security/cert/X509Certificate;Ljava/time/Instant;[B)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jbyteArray IdentityCredential::update(android::security::identity::PersonalizationData arg0)
	{
		return callObjectMethod(
			"update",
			"(Landroid/security/identity/PersonalizationData;)[B",
			arg0.object()
		).object<jbyteArray>();
	}
} // namespace android::security::identity

