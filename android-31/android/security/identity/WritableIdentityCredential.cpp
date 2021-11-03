#include "./PersonalizationData.hpp"
#include "./WritableIdentityCredential.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	WritableIdentityCredential::WritableIdentityCredential(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject WritableIdentityCredential::getCredentialKeyCertificateChain(jbyteArray arg0)
	{
		return callObjectMethod(
			"getCredentialKeyCertificateChain",
			"([B)Ljava/util/Collection;",
			arg0
		);
	}
	jbyteArray WritableIdentityCredential::personalize(android::security::identity::PersonalizationData arg0)
	{
		return callObjectMethod(
			"personalize",
			"(Landroid/security/identity/PersonalizationData;)[B",
			arg0.object()
		).object<jbyteArray>();
	}
} // namespace android::security::identity

