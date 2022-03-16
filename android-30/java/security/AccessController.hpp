#pragma once

#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "../lang/Exception.def.hpp"
#include "../../JObject.hpp"
#include "./AccessControlContext.def.hpp"
#include "./Permission.def.hpp"
#include "./PrivilegedActionException.def.hpp"
#include "./ProtectionDomain.def.hpp"
#include "./AccessController.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void AccessController::checkPermission(java::security::Permission arg0)
	{
		callStaticMethod<void>(
			"java.security.AccessController",
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	inline JObject AccessController::doPrivileged(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject AccessController::doPrivileged(JObject arg0, java::security::AccessControlContext arg1)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject AccessController::doPrivileged(JObject arg0, java::security::AccessControlContext arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline JObject AccessController::doPrivilegedWithCombiner(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject AccessController::doPrivilegedWithCombiner(JObject arg0, java::security::AccessControlContext arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline java::security::AccessControlContext AccessController::getContext()
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"getContext",
			"()Ljava/security/AccessControlContext;"
		);
	}
} // namespace java::security

// Base class headers

