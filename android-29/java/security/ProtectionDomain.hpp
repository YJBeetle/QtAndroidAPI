#pragma once

#include "../../JObject.hpp"

class JArray;
namespace java::lang
{
	class ClassLoader;
}
class JString;
namespace java::security
{
	class CodeSource;
}
namespace java::security
{
	class Permission;
}
namespace java::security
{
	class PermissionCollection;
}

namespace java::security
{
	class ProtectionDomain : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProtectionDomain(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProtectionDomain(QJniObject obj);
		
		// Constructors
		ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1);
		ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1, java::lang::ClassLoader arg2, JArray arg3);
		
		// Methods
		java::lang::ClassLoader getClassLoader();
		java::security::CodeSource getCodeSource();
		java::security::PermissionCollection getPermissions();
		JArray getPrincipals();
		jboolean implies(java::security::Permission arg0);
		jboolean staticPermissionsOnly();
		JString toString();
	};
} // namespace java::security

