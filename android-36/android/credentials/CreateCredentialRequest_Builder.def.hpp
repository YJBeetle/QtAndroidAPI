#pragma once

#include "../../JObject.hpp"

namespace android::credentials
{
	class CreateCredentialRequest;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::credentials
{
	class CreateCredentialRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CreateCredentialRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CreateCredentialRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CreateCredentialRequest_Builder(JString arg0, android::os::Bundle arg1, android::os::Bundle arg2);
		
		// Methods
		android::credentials::CreateCredentialRequest build() const;
		android::credentials::CreateCredentialRequest_Builder setAlwaysSendAppInfoToProvider(jboolean arg0) const;
		android::credentials::CreateCredentialRequest_Builder setIsSystemProviderRequired(jboolean arg0) const;
		android::credentials::CreateCredentialRequest_Builder setOrigin(JString arg0) const;
	};
} // namespace android::credentials

