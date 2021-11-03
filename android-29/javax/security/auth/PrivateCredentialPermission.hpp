#pragma once

#include "../../../java/security/Permission.hpp"

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
		PrivateCredentialPermission(QJniObject obj);
		
		// Constructors
		PrivateCredentialPermission(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		JString getActions();
		JString getCredentialClass();
		JArray getPrincipals();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		java::security::PermissionCollection newPermissionCollection();
	};
} // namespace javax::security::auth

