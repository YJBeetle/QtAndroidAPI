#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JIntArray;
namespace android::security::identity
{
	class PersonalizationData;
}
namespace android::security::identity
{
	class ResultData;
}
namespace java::security
{
	class KeyPair;
}
namespace java::security::cert
{
	class X509Certificate;
}
namespace java::time
{
	class Instant;
}

namespace android::security::identity
{
	class IdentityCredential : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IdentityCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IdentityCredential(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::security::KeyPair createEphemeralKeyPair() const;
		JByteArray decryptMessageFromReader(JByteArray arg0) const;
		JByteArray delete_(JByteArray arg0) const;
		JByteArray encryptMessageToReader(JByteArray arg0) const;
		JObject getAuthKeysNeedingCertification() const;
		JIntArray getAuthenticationDataUsageCount() const;
		JObject getCredentialKeyCertificateChain() const;
		android::security::identity::ResultData getEntries(JByteArray arg0, JObject arg1, JByteArray arg2, JByteArray arg3) const;
		JByteArray proveOwnership(JByteArray arg0) const;
		void setAllowUsingExhaustedKeys(jboolean arg0) const;
		void setAllowUsingExpiredKeys(jboolean arg0) const;
		void setAvailableAuthenticationKeys(jint arg0, jint arg1) const;
		void setReaderEphemeralPublicKey(JObject arg0) const;
		void storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, JByteArray arg1) const;
		void storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, java::time::Instant arg1, JByteArray arg2) const;
		JByteArray update(android::security::identity::PersonalizationData arg0) const;
	};
} // namespace android::security::identity

