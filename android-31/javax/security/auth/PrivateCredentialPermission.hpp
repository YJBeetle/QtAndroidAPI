#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/security/Permission.hpp"

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
		PrivateCredentialPermission(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jstring getCredentialClass();
		jarray getPrincipals();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		java::security::PermissionCollection newPermissionCollection();
	};
} // namespace javax::security::auth

