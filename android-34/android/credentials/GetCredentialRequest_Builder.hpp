#pragma once

#include "./CredentialOption.def.hpp"
#include "./GetCredentialRequest.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./GetCredentialRequest_Builder.def.hpp"

namespace android::credentials
{
	// Fields
	
	// Constructors
	inline GetCredentialRequest_Builder::GetCredentialRequest_Builder(android::os::Bundle arg0)
		: JObject(
			"android.credentials.GetCredentialRequest$Builder",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::credentials::GetCredentialRequest_Builder GetCredentialRequest_Builder::addCredentialOption(android::credentials::CredentialOption arg0) const
	{
		return callObjectMethod(
			"addCredentialOption",
			"(Landroid/credentials/CredentialOption;)Landroid/credentials/GetCredentialRequest$Builder;",
			arg0.object()
		);
	}
	inline android::credentials::GetCredentialRequest GetCredentialRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/credentials/GetCredentialRequest;"
		);
	}
	inline android::credentials::GetCredentialRequest_Builder GetCredentialRequest_Builder::setAlwaysSendAppInfoToProvider(jboolean arg0) const
	{
		return callObjectMethod(
			"setAlwaysSendAppInfoToProvider",
			"(Z)Landroid/credentials/GetCredentialRequest$Builder;",
			arg0
		);
	}
	inline android::credentials::GetCredentialRequest_Builder GetCredentialRequest_Builder::setCredentialOptions(JObject arg0) const
	{
		return callObjectMethod(
			"setCredentialOptions",
			"(Ljava/util/List;)Landroid/credentials/GetCredentialRequest$Builder;",
			arg0.object()
		);
	}
	inline android::credentials::GetCredentialRequest_Builder GetCredentialRequest_Builder::setOrigin(JString arg0) const
	{
		return callObjectMethod(
			"setOrigin",
			"(Ljava/lang/String;)Landroid/credentials/GetCredentialRequest$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::credentials;
#endif
