#pragma once

#include "./PrepareGetCredentialResponse_PendingGetCredentialHandle.def.hpp"
#include "../../JString.hpp"
#include "./PrepareGetCredentialResponse.def.hpp"

namespace android::credentials
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::credentials::PrepareGetCredentialResponse_PendingGetCredentialHandle PrepareGetCredentialResponse::getPendingGetCredentialHandle() const
	{
		return callObjectMethod(
			"getPendingGetCredentialHandle",
			"()Landroid/credentials/PrepareGetCredentialResponse$PendingGetCredentialHandle;"
		);
	}
	inline jboolean PrepareGetCredentialResponse::hasAuthenticationResults() const
	{
		return callMethod<jboolean>(
			"hasAuthenticationResults",
			"()Z"
		);
	}
	inline jboolean PrepareGetCredentialResponse::hasCredentialResults(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasCredentialResults",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PrepareGetCredentialResponse::hasRemoteResults() const
	{
		return callMethod<jboolean>(
			"hasRemoteResults",
			"()Z"
		);
	}
} // namespace android::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::credentials;
#endif
