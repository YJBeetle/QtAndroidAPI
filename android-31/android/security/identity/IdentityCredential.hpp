#pragma once

#include "../../../JObject.hpp"

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
		java::security::KeyPair createEphemeralKeyPair();
		jbyteArray decryptMessageFromReader(jbyteArray arg0);
		jbyteArray _delete(jbyteArray arg0);
		jbyteArray encryptMessageToReader(jbyteArray arg0);
		JObject getAuthKeysNeedingCertification();
		jintArray getAuthenticationDataUsageCount();
		JObject getCredentialKeyCertificateChain();
		android::security::identity::ResultData getEntries(jbyteArray arg0, JObject arg1, jbyteArray arg2, jbyteArray arg3);
		jbyteArray proveOwnership(jbyteArray arg0);
		void setAllowUsingExhaustedKeys(jboolean arg0);
		void setAllowUsingExpiredKeys(jboolean arg0);
		void setAvailableAuthenticationKeys(jint arg0, jint arg1);
		void setReaderEphemeralPublicKey(JObject arg0);
		void storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, jbyteArray arg1);
		void storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, java::time::Instant arg1, jbyteArray arg2);
		jbyteArray update(android::security::identity::PersonalizationData arg0);
	};
} // namespace android::security::identity

