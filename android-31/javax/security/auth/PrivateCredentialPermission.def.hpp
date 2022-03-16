#pragma once

#include "../../../java/security/Permission.def.hpp"

class JArray;
class JArray;
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

namespace javax::security::auth
{
	class PrivateCredentialPermission : public java::security::Permission
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrivateCredentialPermission(const char *className, const char *sig, Ts...agv) : java::security::Permission(className, sig, std::forward<Ts>(agv)...) {}
		PrivateCredentialPermission(QJniObject obj) : java::security::Permission(obj) {}
		
		// Constructors
		PrivateCredentialPermission(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getActions() const;
		JString getCredentialClass() const;
		JArray getPrincipals() const;
		jint hashCode() const;
		jboolean implies(java::security::Permission arg0) const;
		java::security::PermissionCollection newPermissionCollection() const;
	};
} // namespace javax::security::auth

