#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Permission.hpp"

namespace java::io
{
	class ObjectInputStream;
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
	class BasicPermission : public java::security::Permission
	{
	public:
		// Fields
		
		BasicPermission(QAndroidJniObject obj);
		// Constructors
		BasicPermission(jstring &arg0);
		BasicPermission(const QString &arg0);
		BasicPermission(jstring &arg0, jstring &arg1);
		BasicPermission(const QString &arg0, const QString &arg1);
		BasicPermission() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
	};
} // namespace java::security

