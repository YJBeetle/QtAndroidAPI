#pragma once

#ifndef ANDROID_SECURITY_CONFIRMATIONNOTAVAILABLEEXCEPTION
#define ANDROID_SECURITY_CONFIRMATIONNOTAVAILABLEEXCEPTION

#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::security
{
	class ConfirmationNotAvailableException : public __jni_impl::java::lang::Exception
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
	void ConfirmationNotAvailableException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationNotAvailableException",
			"()V");
	}
	void ConfirmationNotAvailableException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationNotAvailableException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::security

namespace android::security
{
	class ConfirmationNotAvailableException : public __jni_impl::android::security::ConfirmationNotAvailableException
	{
	public:
		ConfirmationNotAvailableException(QAndroidJniObject obj) { __thiz = obj; }
		ConfirmationNotAvailableException()
		{
			__constructor();
		}
		ConfirmationNotAvailableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_CONFIRMATIONNOTAVAILABLEEXCEPTION

