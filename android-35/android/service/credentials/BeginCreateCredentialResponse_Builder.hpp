#pragma once

#include "./BeginCreateCredentialResponse.def.hpp"
#include "./CreateEntry.def.hpp"
#include "./RemoteEntry.def.hpp"
#include "./BeginCreateCredentialResponse_Builder.def.hpp"

namespace android::service::credentials
{
	// Fields
	
	// Constructors
	inline BeginCreateCredentialResponse_Builder::BeginCreateCredentialResponse_Builder()
		: JObject(
			"android.service.credentials.BeginCreateCredentialResponse$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::service::credentials::BeginCreateCredentialResponse_Builder BeginCreateCredentialResponse_Builder::addCreateEntry(android::service::credentials::CreateEntry arg0) const
	{
		return callObjectMethod(
			"addCreateEntry",
			"(Landroid/service/credentials/CreateEntry;)Landroid/service/credentials/BeginCreateCredentialResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginCreateCredentialResponse BeginCreateCredentialResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/credentials/BeginCreateCredentialResponse;"
		);
	}
	inline android::service::credentials::BeginCreateCredentialResponse_Builder BeginCreateCredentialResponse_Builder::setCreateEntries(JObject arg0) const
	{
		return callObjectMethod(
			"setCreateEntries",
			"(Ljava/util/List;)Landroid/service/credentials/BeginCreateCredentialResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginCreateCredentialResponse_Builder BeginCreateCredentialResponse_Builder::setRemoteCreateEntry(android::service::credentials::RemoteEntry arg0) const
	{
		return callObjectMethod(
			"setRemoteCreateEntry",
			"(Landroid/service/credentials/RemoteEntry;)Landroid/service/credentials/BeginCreateCredentialResponse$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif
