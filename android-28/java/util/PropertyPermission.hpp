#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PropertyPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		PropertyPermission(QAndroidJniObject obj);
		
		// Constructors
		PropertyPermission(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		java::security::PermissionCollection newPermissionCollection();
	};
} // namespace java::util

