#pragma once

#include "./Permission.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BasicPermission(const char *className, const char *sig, Ts...agv) : java::security::Permission(className, sig, std::forward<Ts>(agv)...) {}
		BasicPermission(QAndroidJniObject obj) : java::security::Permission(obj) {}
		
		// Constructors
		BasicPermission(JString arg0);
		BasicPermission(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getActions() const;
		jint hashCode() const;
		jboolean implies(java::security::Permission arg0) const;
		java::security::PermissionCollection newPermissionCollection() const;
	};
} // namespace java::security

