#pragma once

#include "../net/Uri.def.hpp"
#include "./AppUriAuthenticationPolicy.def.hpp"
#include "../../JString.hpp"
#include "./AppUriAuthenticationPolicy_Builder.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	inline AppUriAuthenticationPolicy_Builder::AppUriAuthenticationPolicy_Builder()
		: JObject(
			"android.security.AppUriAuthenticationPolicy$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::security::AppUriAuthenticationPolicy_Builder AppUriAuthenticationPolicy_Builder::addAppAndUriMapping(JString arg0, android::net::Uri arg1, JString arg2) const
	{
		return callObjectMethod(
			"addAppAndUriMapping",
			"(Ljava/lang/String;Landroid/net/Uri;Ljava/lang/String;)Landroid/security/AppUriAuthenticationPolicy$Builder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline android::security::AppUriAuthenticationPolicy AppUriAuthenticationPolicy_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/AppUriAuthenticationPolicy;"
		);
	}
} // namespace android::security

// Base class headers

