#pragma once

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"

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

namespace java::util
{
	class PropertyPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		PropertyPermission(QAndroidJniObject obj);
		// Constructors
		PropertyPermission(jstring &arg0, jstring &arg1);
		PropertyPermission(const QString &arg0, const QString &arg1);
		PropertyPermission() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
	};
} // namespace java::util

