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
		
		PrivateCredentialPermission(QAndroidJniObject obj);
		// Constructors
		PrivateCredentialPermission(jstring &arg0, jstring &arg1);
		PrivateCredentialPermission(const QString &arg0, const QString &arg1);
		PrivateCredentialPermission() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jstring getCredentialClass();
		jarray getPrincipals();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
	};
} // namespace javax::security::auth

