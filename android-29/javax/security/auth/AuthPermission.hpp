#pragma once

#ifndef JAVAX_SECURITY_AUTH_AUTHPERMISSION
#define JAVAX_SECURITY_AUTH_AUTHPERMISSION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/BasicPermission.hpp"


namespace __jni_impl::javax::security::auth
{
	class AuthPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
	};
} // namespace __jni_impl::javax::security::auth


namespace __jni_impl::javax::security::auth
{
	// Fields
	
	// Constructors
	void AuthPermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AuthPermission::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AuthPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AuthPermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.AuthPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::security::auth

namespace javax::security::auth
{
	class AuthPermission : public __jni_impl::javax::security::auth::AuthPermission
	{
	public:
		AuthPermission(QAndroidJniObject obj) { __thiz = obj; }
		AuthPermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		AuthPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::security::auth

#endif // JAVAX_SECURITY_AUTH_AUTHPERMISSION

