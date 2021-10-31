#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/PermissionCollection.hpp"
#include "./PrivateCredentialPermission.hpp"

namespace javax::security::auth
{
	// Fields
	
	// QAndroidJniObject forward
	PrivateCredentialPermission::PrivateCredentialPermission(QAndroidJniObject obj) : java::security::Permission(obj) {}
	
	// Constructors
	PrivateCredentialPermission::PrivateCredentialPermission(jstring arg0, jstring arg1)
		: java::security::Permission(
			"javax.security.auth.PrivateCredentialPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean PrivateCredentialPermission::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PrivateCredentialPermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrivateCredentialPermission::getCredentialClass()
	{
		return callObjectMethod(
			"getCredentialClass",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray PrivateCredentialPermission::getPrincipals()
	{
		return callObjectMethod(
			"getPrincipals",
			"()[[Ljava/lang/String;"
		).object<jarray>();
	}
	jint PrivateCredentialPermission::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PrivateCredentialPermission::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject PrivateCredentialPermission::newPermissionCollection()
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace javax::security::auth

