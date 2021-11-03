#include "../../../JByteArray.hpp"
#include "./PersonalizationData.hpp"
#include "./WritableIdentityCredential.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	WritableIdentityCredential::WritableIdentityCredential(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject WritableIdentityCredential::getCredentialKeyCertificateChain(JByteArray arg0) const
	{
		return callObjectMethod(
			"getCredentialKeyCertificateChain",
			"([B)Ljava/util/Collection;",
			arg0.object<jbyteArray>()
		);
	}
	JByteArray WritableIdentityCredential::personalize(android::security::identity::PersonalizationData arg0) const
	{
		return callObjectMethod(
			"personalize",
			"(Landroid/security/identity/PersonalizationData;)[B",
			arg0.object()
		);
	}
} // namespace android::security::identity

