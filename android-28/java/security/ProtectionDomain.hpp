#pragma once

#include "../../JArray.hpp"
#include "../lang/ClassLoader.def.hpp"
#include "../../JString.hpp"
#include "./CodeSource.def.hpp"
#include "./Permission.def.hpp"
#include "./PermissionCollection.def.hpp"
#include "./ProtectionDomain.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline ProtectionDomain::ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1)
		: JObject(
			"java.security.ProtectionDomain",
			"(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ProtectionDomain::ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1, java::lang::ClassLoader arg2, JArray arg3)
		: JObject(
			"java.security.ProtectionDomain",
			"(Ljava/security/CodeSource;Ljava/security/PermissionCollection;Ljava/lang/ClassLoader;[Ljava/security/Principal;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		) {}
	
	// Methods
	inline java::lang::ClassLoader ProtectionDomain::getClassLoader() const
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	inline java::security::CodeSource ProtectionDomain::getCodeSource() const
	{
		return callObjectMethod(
			"getCodeSource",
			"()Ljava/security/CodeSource;"
		);
	}
	inline java::security::PermissionCollection ProtectionDomain::getPermissions() const
	{
		return callObjectMethod(
			"getPermissions",
			"()Ljava/security/PermissionCollection;"
		);
	}
	inline JArray ProtectionDomain::getPrincipals() const
	{
		return callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;"
		);
	}
	inline jboolean ProtectionDomain::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	inline jboolean ProtectionDomain::staticPermissionsOnly() const
	{
		return callMethod<jboolean>(
			"staticPermissionsOnly",
			"()Z"
		);
	}
	inline JString ProtectionDomain::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
