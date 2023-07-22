#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::security::identity
{
	class CredentialDataRequest;
}

namespace android::security::identity
{
	class CredentialDataRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CredentialDataRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CredentialDataRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CredentialDataRequest_Builder();
		
		// Methods
		android::security::identity::CredentialDataRequest build() const;
		android::security::identity::CredentialDataRequest_Builder setAllowUsingExhaustedKeys(jboolean arg0) const;
		android::security::identity::CredentialDataRequest_Builder setAllowUsingExpiredKeys(jboolean arg0) const;
		android::security::identity::CredentialDataRequest_Builder setDeviceSignedEntriesToRequest(JObject arg0) const;
		android::security::identity::CredentialDataRequest_Builder setIncrementUseCount(jboolean arg0) const;
		android::security::identity::CredentialDataRequest_Builder setIssuerSignedEntriesToRequest(JObject arg0) const;
		android::security::identity::CredentialDataRequest_Builder setReaderSignature(JByteArray arg0) const;
		android::security::identity::CredentialDataRequest_Builder setRequestMessage(JByteArray arg0) const;
	};
} // namespace android::security::identity

