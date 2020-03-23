#pragma once

#ifndef JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION
#define JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION

#include "../../../java/security/Permission.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::security
{
	class PermissionCollection;
}

namespace __jni_impl::javax::security::auth
{
	class PrivateCredentialPermission : public __jni_impl::java::security::Permission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		QAndroidJniObject getActions();
		QAndroidJniObject getPrincipals();
		QAndroidJniObject newPermissionCollection();
		QAndroidJniObject getCredentialClass();
	};
} // namespace __jni_impl::javax::security::auth

#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/PermissionCollection.hpp"

namespace __jni_impl::javax::security::auth
{
	// Fields
	
	// Constructors
	void PrivateCredentialPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.PrivateCredentialPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean PrivateCredentialPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint PrivateCredentialPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean PrivateCredentialPermission::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PrivateCredentialPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PrivateCredentialPermission::getPrincipals()
	{
		return __thiz.callObjectMethod(
			"getPrincipals",
			"()[[Ljava/lang/String;");
	}
	QAndroidJniObject PrivateCredentialPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;");
	}
	QAndroidJniObject PrivateCredentialPermission::getCredentialClass()
	{
		return __thiz.callObjectMethod(
			"getCredentialClass",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::javax::security::auth

namespace javax::security::auth
{
	class PrivateCredentialPermission : public __jni_impl::javax::security::auth::PrivateCredentialPermission
	{
	public:
		PrivateCredentialPermission(QAndroidJniObject obj) { __thiz = obj; }
		PrivateCredentialPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::security::auth

#endif // JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION

