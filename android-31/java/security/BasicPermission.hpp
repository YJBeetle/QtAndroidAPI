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
		
		// QJniObject forward
		template<typename ...Ts> explicit BasicPermission(const char *className, const char *sig, Ts...agv) : java::security::Permission(className, sig, std::forward<Ts>(agv)...) {}
		BasicPermission(QJniObject obj);
		
		// Constructors
		BasicPermission(jstring arg0);
		BasicPermission(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		java::security::PermissionCollection newPermissionCollection();
	};
} // namespace java::security

