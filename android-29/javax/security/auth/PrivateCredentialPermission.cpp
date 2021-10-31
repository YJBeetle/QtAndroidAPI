#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/PermissionCollection.hpp"
#include "./PrivateCredentialPermission.hpp"

namespace javax::security::auth
{
	// Fields
	
	PrivateCredentialPermission::PrivateCredentialPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrivateCredentialPermission::PrivateCredentialPermission(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.PrivateCredentialPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean PrivateCredentialPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PrivateCredentialPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrivateCredentialPermission::getCredentialClass()
	{
		return __thiz.callObjectMethod(
			"getCredentialClass",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray PrivateCredentialPermission::getPrincipals()
	{
		return __thiz.callObjectMethod(
			"getPrincipals",
			"()[[Ljava/lang/String;"
		).object<jarray>();
	}
	jint PrivateCredentialPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PrivateCredentialPermission::implies(java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PrivateCredentialPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace javax::security::auth

