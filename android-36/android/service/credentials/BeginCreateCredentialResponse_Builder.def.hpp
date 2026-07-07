#pragma once

#include "../../../JObject.hpp"

namespace android::service::credentials
{
	class BeginCreateCredentialResponse;
}
namespace android::service::credentials
{
	class CreateEntry;
}
namespace android::service::credentials
{
	class RemoteEntry;
}

namespace android::service::credentials
{
	class BeginCreateCredentialResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BeginCreateCredentialResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BeginCreateCredentialResponse_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BeginCreateCredentialResponse_Builder();
		
		// Methods
		android::service::credentials::BeginCreateCredentialResponse_Builder addCreateEntry(android::service::credentials::CreateEntry arg0) const;
		android::service::credentials::BeginCreateCredentialResponse build() const;
		android::service::credentials::BeginCreateCredentialResponse_Builder setCreateEntries(JObject arg0) const;
		android::service::credentials::BeginCreateCredentialResponse_Builder setRemoteCreateEntry(android::service::credentials::RemoteEntry arg0) const;
	};
} // namespace android::service::credentials

