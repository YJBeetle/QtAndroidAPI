#pragma once

#include "../../JObject.hpp"

namespace android::credentials
{
	class CredentialOption;
}
namespace android::credentials
{
	class GetCredentialRequest;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::credentials
{
	class GetCredentialRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetCredentialRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetCredentialRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetCredentialRequest_Builder(android::os::Bundle arg0);
		
		// Methods
		android::credentials::GetCredentialRequest_Builder addCredentialOption(android::credentials::CredentialOption arg0) const;
		android::credentials::GetCredentialRequest build() const;
		android::credentials::GetCredentialRequest_Builder setAlwaysSendAppInfoToProvider(jboolean arg0) const;
		android::credentials::GetCredentialRequest_Builder setCredentialOptions(JObject arg0) const;
		android::credentials::GetCredentialRequest_Builder setOrigin(JString arg0) const;
	};
} // namespace android::credentials

