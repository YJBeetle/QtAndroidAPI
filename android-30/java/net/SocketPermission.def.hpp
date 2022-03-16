#pragma once

#include "../security/Permission.def.hpp"

class JByteArray;
class JIntArray;
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

namespace java::net
{
	class SocketPermission : public java::security::Permission
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketPermission(const char *className, const char *sig, Ts...agv) : java::security::Permission(className, sig, std::forward<Ts>(agv)...) {}
		SocketPermission(QJniObject obj) : java::security::Permission(obj) {}
		
		// Constructors
		SocketPermission(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getActions() const;
		jint hashCode() const;
		jboolean implies(java::security::Permission arg0) const;
		java::security::PermissionCollection newPermissionCollection() const;
	};
} // namespace java::net

