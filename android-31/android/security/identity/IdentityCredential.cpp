#include "../../../JByteArray.hpp"
#include "../../../JIntArray.hpp"
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
	IdentityCredential::IdentityCredential(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::security::KeyPair IdentityCredential::createEphemeralKeyPair() const
	{
		return callObjectMethod(
			"createEphemeralKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	JByteArray IdentityCredential::decryptMessageFromReader(JByteArray arg0) const
	{
		return callObjectMethod(
			"decryptMessageFromReader",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	JByteArray IdentityCredential::_delete(JByteArray arg0) const
	{
		return callObjectMethod(
			"delete",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	JByteArray IdentityCredential::encryptMessageToReader(JByteArray arg0) const
	{
		return callObjectMethod(
			"encryptMessageToReader",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	JObject IdentityCredential::getAuthKeysNeedingCertification() const
	{
		return callObjectMethod(
			"getAuthKeysNeedingCertification",
			"()Ljava/util/Collection;"
		);
	}
	JIntArray IdentityCredential::getAuthenticationDataUsageCount() const
	{
		return callObjectMethod(
			"getAuthenticationDataUsageCount",
			"()[I"
		);
	}
	JObject IdentityCredential::getCredentialKeyCertificateChain() const
	{
		return callObjectMethod(
			"getCredentialKeyCertificateChain",
			"()Ljava/util/Collection;"
		);
	}
	android::security::identity::ResultData IdentityCredential::getEntries(JByteArray arg0, JObject arg1, JByteArray arg2, JByteArray arg3) const
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
	JByteArray IdentityCredential::proveOwnership(JByteArray arg0) const
	{
		return callObjectMethod(
			"proveOwnership",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	void IdentityCredential::setAllowUsingExhaustedKeys(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowUsingExhaustedKeys",
			"(Z)V",
			arg0
		);
	}
	void IdentityCredential::setAllowUsingExpiredKeys(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowUsingExpiredKeys",
			"(Z)V",
			arg0
		);
	}
	void IdentityCredential::setAvailableAuthenticationKeys(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setAvailableAuthenticationKeys",
			"(II)V",
			arg0,
			arg1
		);
	}
	void IdentityCredential::setReaderEphemeralPublicKey(JObject arg0) const
	{
		callMethod<void>(
			"setReaderEphemeralPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void IdentityCredential::storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"storeStaticAuthenticationData",
			"(Ljava/security/cert/X509Certificate;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	void IdentityCredential::storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, java::time::Instant arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"storeStaticAuthenticationData",
			"(Ljava/security/cert/X509Certificate;Ljava/time/Instant;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>()
		);
	}
	JByteArray IdentityCredential::update(android::security::identity::PersonalizationData arg0) const
	{
		return callObjectMethod(
			"update",
			"(Landroid/security/identity/PersonalizationData;)[B",
			arg0.object()
		);
	}
} // namespace android::security::identity

