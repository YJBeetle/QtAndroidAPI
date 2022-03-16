#include "../../JArray.hpp"
#include "../lang/ClassLoader.hpp"
#include "../../JString.hpp"
#include "./CodeSource.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	ProtectionDomain::ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1)
		: JObject(
			"java.security.ProtectionDomain",
			"(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V",
			arg0.object(),
			arg1.object()
		) {}
	ProtectionDomain::ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1, java::lang::ClassLoader arg2, JArray arg3)
		: JObject(
			"java.security.ProtectionDomain",
			"(Ljava/security/CodeSource;Ljava/security/PermissionCollection;Ljava/lang/ClassLoader;[Ljava/security/Principal;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		) {}
	
	// Methods
	java::lang::ClassLoader ProtectionDomain::getClassLoader() const
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	java::security::CodeSource ProtectionDomain::getCodeSource() const
	{
		return callObjectMethod(
			"getCodeSource",
			"()Ljava/security/CodeSource;"
		);
	}
	java::security::PermissionCollection ProtectionDomain::getPermissions() const
	{
		return callObjectMethod(
			"getPermissions",
			"()Ljava/security/PermissionCollection;"
		);
	}
	JArray ProtectionDomain::getPrincipals() const
	{
		return callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;"
		);
	}
	jboolean ProtectionDomain::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	jboolean ProtectionDomain::staticPermissionsOnly() const
	{
		return callMethod<jboolean>(
			"staticPermissionsOnly",
			"()Z"
		);
	}
	JString ProtectionDomain::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

