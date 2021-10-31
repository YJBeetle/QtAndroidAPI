#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
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
	class ProtectionDomain : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProtectionDomain(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ProtectionDomain(QAndroidJniObject obj);
		
		// Constructors
		ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1);
		ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1, java::lang::ClassLoader arg2, jarray arg3);
		
		// Methods
		java::lang::ClassLoader getClassLoader();
		java::security::CodeSource getCodeSource();
		java::security::PermissionCollection getPermissions();
		jarray getPrincipals();
		jboolean implies(java::security::Permission arg0);
		jboolean staticPermissionsOnly();
		jstring toString();
	};
} // namespace java::security

