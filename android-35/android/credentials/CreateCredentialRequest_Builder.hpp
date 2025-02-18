#pragma once

#include "./CreateCredentialRequest.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./CreateCredentialRequest_Builder.def.hpp"

namespace android::credentials
{
	// Fields
	
	// Constructors
	inline CreateCredentialRequest_Builder::CreateCredentialRequest_Builder(JString arg0, android::os::Bundle arg1, android::os::Bundle arg2)
		: JObject(
			"android.credentials.CreateCredentialRequest$Builder",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::credentials::CreateCredentialRequest CreateCredentialRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/credentials/CreateCredentialRequest;"
		);
	}
	inline android::credentials::CreateCredentialRequest_Builder CreateCredentialRequest_Builder::setAlwaysSendAppInfoToProvider(jboolean arg0) const
	{
		return callObjectMethod(
			"setAlwaysSendAppInfoToProvider",
			"(Z)Landroid/credentials/CreateCredentialRequest$Builder;",
			arg0
		);
	}
	inline android::credentials::CreateCredentialRequest_Builder CreateCredentialRequest_Builder::setIsSystemProviderRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsSystemProviderRequired",
			"(Z)Landroid/credentials/CreateCredentialRequest$Builder;",
			arg0
		);
	}
	inline android::credentials::CreateCredentialRequest_Builder CreateCredentialRequest_Builder::setOrigin(JString arg0) const
	{
		return callObjectMethod(
			"setOrigin",
			"(Ljava/lang/String;)Landroid/credentials/CreateCredentialRequest$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::credentials;
#endif
