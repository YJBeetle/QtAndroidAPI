#pragma once

#include "../security/BasicPermission.hpp"

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

namespace java::util
{
	class PropertyPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		PropertyPermission(QJniObject obj);
		
		// Constructors
		PropertyPermission(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		JString getActions();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		java::security::PermissionCollection newPermissionCollection();
	};
} // namespace java::util

