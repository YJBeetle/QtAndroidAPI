#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Permission.hpp"

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
	class AllPermission : public java::security::Permission
	{
	public:
		// Fields
		
		AllPermission(QAndroidJniObject obj);
		// Constructors
		AllPermission();
		AllPermission(jstring &arg0, jstring &arg1);
		AllPermission(const QString &arg0, const QString &arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
	};
} // namespace java::security

