#pragma once

#include "../security/Permission.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit FilePermission(const char *className, const char *sig, Ts...agv) : java::security::Permission(className, sig, std::forward<Ts>(agv)...) {}
		FilePermission(QJniObject obj);
		
		// Constructors
		FilePermission(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		JString getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		java::security::PermissionCollection newPermissionCollection();
	};
} // namespace java::io

