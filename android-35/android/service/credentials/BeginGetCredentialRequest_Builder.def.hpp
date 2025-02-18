#pragma once

#include "../../../JObject.hpp"

namespace android::service::credentials
{
	class BeginGetCredentialOption;
}
namespace android::service::credentials
{
	class BeginGetCredentialRequest;
}
namespace android::service::credentials
{
	class CallingAppInfo;
}

namespace android::service::credentials
{
	class BeginGetCredentialRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BeginGetCredentialRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BeginGetCredentialRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BeginGetCredentialRequest_Builder();
		
		// Methods
		android::service::credentials::BeginGetCredentialRequest_Builder addBeginGetCredentialOption(android::service::credentials::BeginGetCredentialOption arg0) const;
		android::service::credentials::BeginGetCredentialRequest build() const;
		android::service::credentials::BeginGetCredentialRequest_Builder setBeginGetCredentialOptions(JObject arg0) const;
		android::service::credentials::BeginGetCredentialRequest_Builder setCallingAppInfo(android::service::credentials::CallingAppInfo arg0) const;
	};
} // namespace android::service::credentials

