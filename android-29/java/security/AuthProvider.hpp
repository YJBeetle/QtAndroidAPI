#pragma once

#ifndef JAVA_SECURITY_AUTHPROVIDER
#define JAVA_SECURITY_AUTHPROVIDER

#include "../../__JniBaseClass.hpp"
#include "../util/Dictionary.hpp"
#include "../util/Hashtable.hpp"
#include "../util/Properties.hpp"
#include "Provider.hpp"

namespace __jni_impl::javax::security::auth
{
	class Subject;
}

namespace __jni_impl::java::security
{
	class AuthProvider : public __jni_impl::java::security::Provider
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void login(__jni_impl::javax::security::auth::Subject arg0, __jni_impl::__JniBaseClass arg1);
		void logout();
		void setCallbackHandler(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::security

#include "../../javax/security/auth/Subject.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AuthProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.AuthProvider",
			"(V)V");
	}
	
	// Methods
	void AuthProvider::login(__jni_impl::javax::security::auth::Subject arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"login",
			"(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void AuthProvider::logout()
	{
		__thiz.callMethod<void>(
			"logout",
			"()V");
	}
	void AuthProvider::setCallbackHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCallbackHandler",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class AuthProvider : public __jni_impl::java::security::AuthProvider
	{
	public:
		AuthProvider(QAndroidJniObject obj) { __thiz = obj; }
		AuthProvider()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_AUTHPROVIDER

