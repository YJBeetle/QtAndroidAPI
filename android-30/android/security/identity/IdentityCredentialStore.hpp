#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::security::identity
{
	class IdentityCredential;
}
namespace android::security::identity
{
	class WritableIdentityCredential;
}

namespace android::security::identity
{
	class IdentityCredentialStore : public __JniBaseClass
	{
	public:
		// Fields
		static jint CIPHERSUITE_ECDHE_HKDF_ECDSA_WITH_AES_256_GCM_SHA256();
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityCredentialStore(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IdentityCredentialStore(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::security::identity::IdentityCredentialStore getDirectAccessInstance(android::content::Context arg0);
		static android::security::identity::IdentityCredentialStore getInstance(android::content::Context arg0);
		android::security::identity::WritableIdentityCredential createCredential(jstring arg0, jstring arg1);
		jbyteArray deleteCredentialByName(jstring arg0);
		android::security::identity::IdentityCredential getCredentialByName(jstring arg0, jint arg1);
		jarray getSupportedDocTypes();
	};
} // namespace android::security::identity

