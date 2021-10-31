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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FilePermission(const char *className, const char *sig, Ts...agv) : java::security::Permission(className, sig, std::forward<Ts>(agv)...) {}
		FilePermission(QAndroidJniObject obj);
		
		// Constructors
		FilePermission(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
	};
} // namespace java::io

