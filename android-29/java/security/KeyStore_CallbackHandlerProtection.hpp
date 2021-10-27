#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::security
{
	class KeyStore_CallbackHandlerProtection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject getCallbackHandler();
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyStore_CallbackHandlerProtection::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$CallbackHandlerProtection",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyStore_CallbackHandlerProtection::getCallbackHandler()
	{
		return __thiz.callObjectMethod(
			"getCallbackHandler",
			"()Ljavax/security/auth/callback/CallbackHandler;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStore_CallbackHandlerProtection : public __jni_impl::java::security::KeyStore_CallbackHandlerProtection
	{
	public:
		KeyStore_CallbackHandlerProtection(QAndroidJniObject obj) { __thiz = obj; }
		KeyStore_CallbackHandlerProtection(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

