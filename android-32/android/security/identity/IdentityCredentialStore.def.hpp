#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
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
class JString;

namespace android::security::identity
{
	class IdentityCredentialStore : public JObject
	{
	public:
		// Fields
		static jint CIPHERSUITE_ECDHE_HKDF_ECDSA_WITH_AES_256_GCM_SHA256();
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityCredentialStore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IdentityCredentialStore(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::security::identity::IdentityCredentialStore getDirectAccessInstance(android::content::Context arg0);
		static android::security::identity::IdentityCredentialStore getInstance(android::content::Context arg0);
		android::security::identity::WritableIdentityCredential createCredential(JString arg0, JString arg1) const;
		JByteArray deleteCredentialByName(JString arg0) const;
		android::security::identity::IdentityCredential getCredentialByName(JString arg0, jint arg1) const;
		JArray getSupportedDocTypes() const;
	};
} // namespace android::security::identity

