#include "../../content/Context.hpp"
#include "./IdentityCredential.hpp"
#include "./WritableIdentityCredential.hpp"
#include "./IdentityCredentialStore.hpp"

namespace android::security::identity
{
	// Fields
	jint IdentityCredentialStore::CIPHERSUITE_ECDHE_HKDF_ECDSA_WITH_AES_256_GCM_SHA256()
	{
		return getStaticField<jint>(
			"android.security.identity.IdentityCredentialStore",
			"CIPHERSUITE_ECDHE_HKDF_ECDSA_WITH_AES_256_GCM_SHA256"
		);
	}
	
	// QAndroidJniObject forward
	IdentityCredentialStore::IdentityCredentialStore(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::security::identity::IdentityCredentialStore IdentityCredentialStore::getDirectAccessInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.security.identity.IdentityCredentialStore",
			"getDirectAccessInstance",
			"(Landroid/content/Context;)Landroid/security/identity/IdentityCredentialStore;",
			arg0.object()
		);
	}
	android::security::identity::IdentityCredentialStore IdentityCredentialStore::getInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.security.identity.IdentityCredentialStore",
			"getInstance",
			"(Landroid/content/Context;)Landroid/security/identity/IdentityCredentialStore;",
			arg0.object()
		);
	}
	android::security::identity::WritableIdentityCredential IdentityCredentialStore::createCredential(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"createCredential",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/security/identity/WritableIdentityCredential;",
			arg0,
			arg1
		);
	}
	jbyteArray IdentityCredentialStore::deleteCredentialByName(jstring arg0)
	{
		return callObjectMethod(
			"deleteCredentialByName",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	android::security::identity::IdentityCredential IdentityCredentialStore::getCredentialByName(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getCredentialByName",
			"(Ljava/lang/String;I)Landroid/security/identity/IdentityCredential;",
			arg0,
			arg1
		);
	}
	jarray IdentityCredentialStore::getSupportedDocTypes()
	{
		return callObjectMethod(
			"getSupportedDocTypes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
} // namespace android::security::identity

