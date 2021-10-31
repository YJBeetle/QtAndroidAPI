#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class IdentityCredential : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IdentityCredential(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IdentityCredential(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::security::KeyPair createEphemeralKeyPair();
		jbyteArray decryptMessageFromReader(jbyteArray arg0);
		jbyteArray encryptMessageToReader(jbyteArray arg0);
		__JniBaseClass getAuthKeysNeedingCertification();
		jintArray getAuthenticationDataUsageCount();
		__JniBaseClass getCredentialKeyCertificateChain();
		android::security::identity::ResultData getEntries(jbyteArray arg0, __JniBaseClass arg1, jbyteArray arg2, jbyteArray arg3);
		void setAllowUsingExhaustedKeys(jboolean arg0);
		void setAvailableAuthenticationKeys(jint arg0, jint arg1);
		void setReaderEphemeralPublicKey(__JniBaseClass arg0);
		void storeStaticAuthenticationData(java::security::cert::X509Certificate arg0, jbyteArray arg1);
	};
} // namespace android::security::identity

