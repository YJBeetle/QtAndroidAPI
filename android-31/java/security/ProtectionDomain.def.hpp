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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProtectionDomain(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProtectionDomain(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1);
		ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1, java::lang::ClassLoader arg2, JArray arg3);
		
		// Methods
		java::lang::ClassLoader getClassLoader() const;
		java::security::CodeSource getCodeSource() const;
		java::security::PermissionCollection getPermissions() const;
		JArray getPrincipals() const;
		jboolean implies(java::security::Permission arg0) const;
		jboolean staticPermissionsOnly() const;
		JString toString() const;
	};
} // namespace java::security

