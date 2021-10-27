#pragma once

#ifndef JAVAX_SECURITY_AUTH_CALLBACK_PASSWORDCALLBACK
#define JAVAX_SECURITY_AUTH_CALLBACK_PASSWORDCALLBACK

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::security::auth::callback
{
	class PasswordCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jboolean arg1);
		void __constructor(const QString &arg0, jboolean arg1);
		
		// Methods
		void clearPassword();
		jcharArray getPassword();
		jstring getPrompt();
		jboolean isEchoOn();
		void setPassword(jcharArray arg0);
	};
} // namespace __jni_impl::javax::security::auth::callback


namespace __jni_impl::javax::security::auth::callback
{
	// Fields
	
	// Constructors
	void PasswordCallback::__constructor(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.callback.PasswordCallback",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void PasswordCallback::__constructor(const QString &arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.callback.PasswordCallback",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	void PasswordCallback::clearPassword()
	{
		__thiz.callMethod<void>(
			"clearPassword",
			"()V"
		);
	}
	jcharArray PasswordCallback::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jstring PasswordCallback::getPrompt()
	{
		return __thiz.callObjectMethod(
			"getPrompt",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean PasswordCallback::isEchoOn()
	{
		return __thiz.callMethod<jboolean>(
			"isEchoOn",
			"()Z"
		);
	}
	void PasswordCallback::setPassword(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"([C)V",
			arg0
		);
	}
} // namespace __jni_impl::javax::security::auth::callback

namespace javax::security::auth::callback
{
	class PasswordCallback : public __jni_impl::javax::security::auth::callback::PasswordCallback
	{
	public:
		PasswordCallback(QAndroidJniObject obj) { __thiz = obj; }
		PasswordCallback(jstring arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::security::auth::callback

#endif // JAVAX_SECURITY_AUTH_CALLBACK_PASSWORDCALLBACK

