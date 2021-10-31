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
namespace java::nio::file
{
	class FileSystem;
}
namespace java::security
{
	class Permission;
}
namespace java::security
{
	class PermissionCollection;
}

namespace java::io
{
	class FilePermission : public java::security::Permission
	{
	public:
		// Fields
		
		FilePermission(QAndroidJniObject obj);
		// Constructors
		FilePermission(jstring arg0, jstring arg1);
		FilePermission() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
	};
} // namespace java::io

