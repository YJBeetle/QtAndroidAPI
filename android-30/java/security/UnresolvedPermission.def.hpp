#pragma once

#include "./Permission.def.hpp"

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
		UnresolvedPermission(QJniObject obj) : java::security::Permission(obj) {}
		
		// Constructors
		UnresolvedPermission(JString arg0, JString arg1, JString arg2, JArray arg3);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getActions() const;
		JString getUnresolvedActions() const;
		JArray getUnresolvedCerts() const;
		JString getUnresolvedName() const;
		JString getUnresolvedType() const;
		jint hashCode() const;
		jboolean implies(java::security::Permission arg0) const;
		java::security::PermissionCollection newPermissionCollection() const;
		JString toString() const;
	};
} // namespace java::security

