#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JIntArray;
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

namespace android::security::identity
{
	class IdentityCredential : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IdentityCredential(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		java::security::KeyPair createEphemeralKeyPair() const;
		JByteArray decryptMessageFromReader(JByteArray arg0) const;
		JByteArray encryptMessageToReader(JByteArray arg0) const;
		JObject getAuthKeysNeedingCertification() const;
		JIntArray getAuthenticationDataUsageCount() const;
		JObject getCredentialKeyCertificateChain() const;
		android::security::identity::ResultData getEntries(JByteArray arg0, JObject arg1, JByteArray arg2, JByteArray arg3) const;
		void setAllowUsingExhaustedKeys(jboolean arg0) const;
		void setAvailableAuthenticationKeys(jint arg0, jint arg1) const;
		void setReaderEphemeralPublicKey(JObject arg0) const;
		void storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, JByteArray arg1) const;
	};
} // namespace android::security::identity

