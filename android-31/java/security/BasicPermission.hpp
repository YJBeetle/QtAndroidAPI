#pragma once

#include "./Permission.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
		BasicPermission(JString arg0);
		BasicPermission(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		JString getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		java::security::PermissionCollection newPermissionCollection();
	};
} // namespace java::security

