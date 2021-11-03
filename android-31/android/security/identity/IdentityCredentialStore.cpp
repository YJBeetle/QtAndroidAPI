#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../content/Context.hpp"
#include "./IdentityCredential.hpp"
#include "./WritableIdentityCredential.hpp"
#include "../../../JString.hpp"
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
	IdentityCredentialStore::IdentityCredentialStore(QAndroidJniObject obj) : JObject(obj) {}
	
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
	android::security::identity::WritableIdentityCredential IdentityCredentialStore::createCredential(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"createCredential",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/security/identity/WritableIdentityCredential;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JByteArray IdentityCredentialStore::deleteCredentialByName(JString arg0) const
	{
		return callObjectMethod(
			"deleteCredentialByName",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	android::security::identity::IdentityCredential IdentityCredentialStore::getCredentialByName(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getCredentialByName",
			"(Ljava/lang/String;I)Landroid/security/identity/IdentityCredential;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JArray IdentityCredentialStore::getSupportedDocTypes() const
	{
		return callObjectMethod(
			"getSupportedDocTypes",
			"()[Ljava/lang/String;"
		);
	}
} // namespace android::security::identity

