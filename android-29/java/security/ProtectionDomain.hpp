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
		
		ProtectionDomain(QAndroidJniObject obj);
		// Constructors
		ProtectionDomain(java::security::CodeSource &arg0, java::security::PermissionCollection &arg1);
		ProtectionDomain(java::security::CodeSource &arg0, java::security::PermissionCollection &arg1, java::lang::ClassLoader &arg2, jarray &arg3);
		ProtectionDomain() = default;
		
		// Methods
		QAndroidJniObject getClassLoader();
		QAndroidJniObject getCodeSource();
		QAndroidJniObject getPermissions();
		jarray getPrincipals();
		jboolean implies(java::security::Permission arg0);
		jboolean staticPermissionsOnly();
		jstring toString();
	};
} // namespace java::security

