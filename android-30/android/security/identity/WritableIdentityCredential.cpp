#include "./PersonalizationData.hpp"
#include "./WritableIdentityCredential.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	WritableIdentityCredential::WritableIdentityCredential(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass WritableIdentityCredential::getCredentialKeyCertificateChain(jbyteArray arg0)
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

