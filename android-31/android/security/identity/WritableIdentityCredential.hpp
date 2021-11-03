#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::security::identity
{
	class PersonalizationData;
}

namespace android::security::identity
{
	class WritableIdentityCredential : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WritableIdentityCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WritableIdentityCredential(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getCredentialKeyCertificateChain(JByteArray arg0);
		JByteArray personalize(android::security::identity::PersonalizationData arg0);
	};
} // namespace android::security::identity

