#pragma once

#include "./Action.def.hpp"
#include "./BeginGetCredentialResponse.def.hpp"
#include "./CredentialEntry.def.hpp"
#include "./RemoteEntry.def.hpp"
#include "./BeginGetCredentialResponse_Builder.def.hpp"

namespace android::service::credentials
{
	// Fields
	
	// Constructors
	inline BeginGetCredentialResponse_Builder::BeginGetCredentialResponse_Builder()
		: JObject(
			"android.service.credentials.BeginGetCredentialResponse$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::service::credentials::BeginGetCredentialResponse_Builder BeginGetCredentialResponse_Builder::addAction(android::service::credentials::Action arg0) const
	{
		return callObjectMethod(
			"addAction",
			"(Landroid/service/credentials/Action;)Landroid/service/credentials/BeginGetCredentialResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginGetCredentialResponse_Builder BeginGetCredentialResponse_Builder::addAuthenticationAction(android::service::credentials::Action arg0) const
	{
		return callObjectMethod(
			"addAuthenticationAction",
			"(Landroid/service/credentials/Action;)Landroid/service/credentials/BeginGetCredentialResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginGetCredentialResponse_Builder BeginGetCredentialResponse_Builder::addCredentialEntry(android::service::credentials::CredentialEntry arg0) const
	{
		return callObjectMethod(
			"addCredentialEntry",
			"(Landroid/service/credentials/CredentialEntry;)Landroid/service/credentials/BeginGetCredentialResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginGetCredentialResponse BeginGetCredentialResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/credentials/BeginGetCredentialResponse;"
		);
	}
	inline android::service::credentials::BeginGetCredentialResponse_Builder BeginGetCredentialResponse_Builder::setActions(JObject arg0) const
	{
		return callObjectMethod(
			"setActions",
			"(Ljava/util/List;)Landroid/service/credentials/BeginGetCredentialResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginGetCredentialResponse_Builder BeginGetCredentialResponse_Builder::setAuthenticationActions(JObject arg0) const
	{
		return callObjectMethod(
			"setAuthenticationActions",
			"(Ljava/util/List;)Landroid/service/credentials/BeginGetCredentialResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginGetCredentialResponse_Builder BeginGetCredentialResponse_Builder::setCredentialEntries(JObject arg0) const
	{
		return callObjectMethod(
			"setCredentialEntries",
			"(Ljava/util/List;)Landroid/service/credentials/BeginGetCredentialResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginGetCredentialResponse_Builder BeginGetCredentialResponse_Builder::setRemoteCredentialEntry(android::service::credentials::RemoteEntry arg0) const
	{
		return callObjectMethod(
			"setRemoteCredentialEntry",
			"(Landroid/service/credentials/RemoteEntry;)Landroid/service/credentials/BeginGetCredentialResponse$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif
