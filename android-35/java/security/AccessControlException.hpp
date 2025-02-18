#pragma once

#include "../../JString.hpp"
#include "./Permission.def.hpp"
#include "./AccessControlException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline AccessControlException::AccessControlException(JString arg0)
		: java::lang::SecurityException(
			"java.security.AccessControlException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AccessControlException::AccessControlException(JString arg0, java::security::Permission arg1)
		: java::lang::SecurityException(
			"java.security.AccessControlException",
			"(Ljava/lang/String;Ljava/security/Permission;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline java::security::Permission AccessControlException::getPermission() const
	{
		return callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/SecurityException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
