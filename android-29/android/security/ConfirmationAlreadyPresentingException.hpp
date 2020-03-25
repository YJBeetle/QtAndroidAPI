#pragma once

#ifndef ANDROID_SECURITY_CONFIRMATIONALREADYPRESENTINGEXCEPTION
#define ANDROID_SECURITY_CONFIRMATIONALREADYPRESENTINGEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::security
{
	class ConfirmationAlreadyPresentingException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::security


namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void ConfirmationAlreadyPresentingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationAlreadyPresentingException",
			"()V");
	}
	void ConfirmationAlreadyPresentingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationAlreadyPresentingException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::security

namespace android::security
{
	class ConfirmationAlreadyPresentingException : public __jni_impl::android::security::ConfirmationAlreadyPresentingException
	{
	public:
		ConfirmationAlreadyPresentingException(QAndroidJniObject obj) { __thiz = obj; }
		ConfirmationAlreadyPresentingException()
		{
			__constructor();
		}
		ConfirmationAlreadyPresentingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_CONFIRMATIONALREADYPRESENTINGEXCEPTION

