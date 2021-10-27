#pragma once

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::security
{
	class Permission;
}
namespace java::security
{
	class PermissionCollection;
}

namespace java::net
{
	class SocketPermission : public java::security::Permission
	{
	public:
		// Fields
		
		SocketPermission(QAndroidJniObject obj);
		// Constructors
		SocketPermission(jstring &arg0, jstring &arg1);
		SocketPermission(const QString &arg0, const QString &arg1);
		SocketPermission() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
	};
} // namespace java::net

