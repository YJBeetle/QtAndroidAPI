#pragma once

#ifndef JAVAX_SECURITY_AUTH_LOGIN_LOGINEXCEPTION
#define JAVAX_SECURITY_AUTH_LOGIN_LOGINEXCEPTION

#include "../../../../__JniBaseClass.hpp"
#include "../../../../java/lang/Exception.hpp"
#include "../../../../java/security/GeneralSecurityException.hpp"


namespace __jni_impl::javax::security::auth::login
{
	class LoginException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::security::auth::login


namespace __jni_impl::javax::security::auth::login
{
	// Fields
	
	// Constructors
	void LoginException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.login.LoginException",
			"()V"
		);
	}
	void LoginException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.login.LoginException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LoginException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.login.LoginException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::security::auth::login

namespace javax::security::auth::login
{
	class LoginException : public __jni_impl::javax::security::auth::login::LoginException
	{
	public:
		LoginException(QAndroidJniObject obj) { __thiz = obj; }
		LoginException()
		{
			__constructor();
		}
		LoginException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::security::auth::login

#endif // JAVAX_SECURITY_AUTH_LOGIN_LOGINEXCEPTION

