#pragma once

#include "./Permission.hpp"

class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
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
	class UnresolvedPermission : public java::security::Permission
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnresolvedPermission(const char *className, const char *sig, Ts...agv) : java::security::Permission(className, sig, std::forward<Ts>(agv)...) {}
		UnresolvedPermission(QJniObject obj);
		
		// Constructors
		UnresolvedPermission(JString arg0, JString arg1, JString arg2, JArray arg3);
		
		// Methods
		jboolean equals(JObject arg0);
		JString getActions();
		JString getUnresolvedActions();
		JArray getUnresolvedCerts();
		JString getUnresolvedName();
		JString getUnresolvedType();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		java::security::PermissionCollection newPermissionCollection();
		JString toString();
	};
} // namespace java::security

