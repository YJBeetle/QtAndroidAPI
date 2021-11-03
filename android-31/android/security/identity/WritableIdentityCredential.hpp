#pragma once

#include "../../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit WritableIdentityCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WritableIdentityCredential(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getCredentialKeyCertificateChain(jbyteArray arg0);
		jbyteArray personalize(android::security::identity::PersonalizationData arg0);
	};
} // namespace android::security::identity

