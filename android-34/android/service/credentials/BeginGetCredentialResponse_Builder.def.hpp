#pragma once

#include "../../../JObject.hpp"

namespace android::service::credentials
{
	class Action;
}
namespace android::service::credentials
{
	class BeginGetCredentialResponse;
}
namespace android::service::credentials
{
	class CredentialEntry;
}
namespace android::service::credentials
{
	class RemoteEntry;
}

namespace android::service::credentials
{
	class BeginGetCredentialResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BeginGetCredentialResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BeginGetCredentialResponse_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BeginGetCredentialResponse_Builder();
		
		// Methods
		android::service::credentials::BeginGetCredentialResponse_Builder addAction(android::service::credentials::Action arg0) const;
		android::service::credentials::BeginGetCredentialResponse_Builder addAuthenticationAction(android::service::credentials::Action arg0) const;
		android::service::credentials::BeginGetCredentialResponse_Builder addCredentialEntry(android::service::credentials::CredentialEntry arg0) const;
		android::service::credentials::BeginGetCredentialResponse build() const;
		android::service::credentials::BeginGetCredentialResponse_Builder setActions(JObject arg0) const;
		android::service::credentials::BeginGetCredentialResponse_Builder setAuthenticationActions(JObject arg0) const;
		android::service::credentials::BeginGetCredentialResponse_Builder setCredentialEntries(JObject arg0) const;
		android::service::credentials::BeginGetCredentialResponse_Builder setRemoteCredentialEntry(android::service::credentials::RemoteEntry arg0) const;
	};
} // namespace android::service::credentials

