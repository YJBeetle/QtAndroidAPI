#pragma once

#include "./BeginGetCredentialOption.def.hpp"
#include "./BeginGetCredentialRequest.def.hpp"
#include "./CallingAppInfo.def.hpp"
#include "./BeginGetCredentialRequest_Builder.def.hpp"

namespace android::service::credentials
{
	// Fields
	
	// Constructors
	inline BeginGetCredentialRequest_Builder::BeginGetCredentialRequest_Builder()
		: JObject(
			"android.service.credentials.BeginGetCredentialRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::service::credentials::BeginGetCredentialRequest_Builder BeginGetCredentialRequest_Builder::addBeginGetCredentialOption(android::service::credentials::BeginGetCredentialOption arg0) const
	{
		return callObjectMethod(
			"addBeginGetCredentialOption",
			"(Landroid/service/credentials/BeginGetCredentialOption;)Landroid/service/credentials/BeginGetCredentialRequest$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginGetCredentialRequest BeginGetCredentialRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/credentials/BeginGetCredentialRequest;"
		);
	}
	inline android::service::credentials::BeginGetCredentialRequest_Builder BeginGetCredentialRequest_Builder::setBeginGetCredentialOptions(JObject arg0) const
	{
		return callObjectMethod(
			"setBeginGetCredentialOptions",
			"(Ljava/util/List;)Landroid/service/credentials/BeginGetCredentialRequest$Builder;",
			arg0.object()
		);
	}
	inline android::service::credentials::BeginGetCredentialRequest_Builder BeginGetCredentialRequest_Builder::setCallingAppInfo(android::service::credentials::CallingAppInfo arg0) const
	{
		return callObjectMethod(
			"setCallingAppInfo",
			"(Landroid/service/credentials/CallingAppInfo;)Landroid/service/credentials/BeginGetCredentialRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif
