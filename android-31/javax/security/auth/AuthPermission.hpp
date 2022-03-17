#pragma once

#include "../../../JString.hpp"
#include "./AuthPermission.def.hpp"

namespace javax::security::auth
{
	// Fields
	
	// Constructors
	inline AuthPermission::AuthPermission(JString arg0)
		: java::security::BasicPermission(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AuthPermission::AuthPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::auth

// Base class headers
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/BasicPermission.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::security::auth;
#endif
