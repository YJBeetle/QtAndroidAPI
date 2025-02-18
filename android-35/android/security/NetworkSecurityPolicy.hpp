#pragma once

#include "../../JString.hpp"
#include "./NetworkSecurityPolicy.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::security::NetworkSecurityPolicy NetworkSecurityPolicy::getInstance()
	{
		return callStaticObjectMethod(
			"android.security.NetworkSecurityPolicy",
			"getInstance",
			"()Landroid/security/NetworkSecurityPolicy;"
		);
	}
	inline jboolean NetworkSecurityPolicy::isCleartextTrafficPermitted() const
	{
		return callMethod<jboolean>(
			"isCleartextTrafficPermitted",
			"()Z"
		);
	}
	inline jboolean NetworkSecurityPolicy::isCleartextTrafficPermitted(JString arg0) const
	{
		return callMethod<jboolean>(
			"isCleartextTrafficPermitted",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
