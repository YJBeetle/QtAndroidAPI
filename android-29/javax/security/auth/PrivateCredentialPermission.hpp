#pragma once

#include "../../../__JniBaseClass.hpp"
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
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jstring getCredentialClass();
		jarray getPrincipals();
		jint hashCode();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
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
			arg1
		);
	}
	void PrivateCredentialPermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.PrivateCredentialPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	jboolean PrivateCredentialPermission::implies(__jni_impl::java::security::Permission arg0)
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

