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
		
		// QJniObject forward
		template<typename ...Ts> explicit WritableIdentityCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WritableIdentityCredential(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getCredentialKeyCertificateChain(JByteArray arg0) const;
		JByteArray personalize(android::security::identity::PersonalizationData arg0) const;
	};
} // namespace android::security::identity

