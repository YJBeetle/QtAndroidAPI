#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Permission.hpp"

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

namespace java::security
{
	class UnresolvedPermission : public java::security::Permission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnresolvedPermission(const char *className, const char *sig, Ts...agv) : java::security::Permission(className, sig, std::forward<Ts>(agv)...) {}
		UnresolvedPermission(QAndroidJniObject obj);
		
		// Constructors
		UnresolvedPermission(jstring arg0, jstring arg1, jstring arg2, jarray arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jstring getUnresolvedActions();
		jarray getUnresolvedCerts();
		jstring getUnresolvedName();
		jstring getUnresolvedType();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
		jstring toString();
	};
} // namespace java::security

