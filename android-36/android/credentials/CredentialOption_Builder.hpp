#pragma once

#include "../content/ComponentName.def.hpp"
#include "./CredentialOption.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./CredentialOption_Builder.def.hpp"

namespace android::credentials
{
	// Fields
	
	// Constructors
	inline CredentialOption_Builder::CredentialOption_Builder(JString arg0, android::os::Bundle arg1, android::os::Bundle arg2)
		: JObject(
			"android.credentials.CredentialOption$Builder",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::credentials::CredentialOption_Builder CredentialOption_Builder::addAllowedProvider(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"addAllowedProvider",
			"(Landroid/content/ComponentName;)Landroid/credentials/CredentialOption$Builder;",
			arg0.object()
		);
	}
	inline android::credentials::CredentialOption CredentialOption_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/credentials/CredentialOption;"
		);
	}
	inline android::credentials::CredentialOption_Builder CredentialOption_Builder::setAllowedProviders(JObject arg0) const
	{
		return callObjectMethod(
			"setAllowedProviders",
			"(Ljava/util/Set;)Landroid/credentials/CredentialOption$Builder;",
			arg0.object()
		);
	}
	inline android::credentials::CredentialOption_Builder CredentialOption_Builder::setIsSystemProviderRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsSystemProviderRequired",
			"(Z)Landroid/credentials/CredentialOption$Builder;",
			arg0
		);
	}
} // namespace android::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::credentials;
#endif
