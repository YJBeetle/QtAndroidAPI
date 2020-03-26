#pragma once

#ifndef ANDROID_SECURITY_CONFIRMATIONPROMPT
#define ANDROID_SECURITY_CONFIRMATIONPROMPT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::security
{
	class ConfirmationCallback;
}

namespace __jni_impl::android::security
{
	class ConfirmationPrompt : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isSupported(__jni_impl::android::content::Context arg0);
		void cancelPrompt();
		void presentPrompt(__jni_impl::__JniBaseClass arg0, __jni_impl::android::security::ConfirmationCallback arg1);
	};
} // namespace __jni_impl::android::security

#include "../content/Context.hpp"
#include "ConfirmationCallback.hpp"

namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void ConfirmationPrompt::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationPrompt",
			"(V)V");
	}
	
	// Methods
	jboolean ConfirmationPrompt::isSupported(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.security.ConfirmationPrompt",
			"isSupported",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
	void ConfirmationPrompt::cancelPrompt()
	{
		__thiz.callMethod<void>(
			"cancelPrompt",
			"()V"
		);
	}
	void ConfirmationPrompt::presentPrompt(__jni_impl::__JniBaseClass arg0, __jni_impl::android::security::ConfirmationCallback arg1)
	{
		__thiz.callMethod<void>(
			"presentPrompt",
			"(Ljava/util/concurrent/Executor;Landroid/security/ConfirmationCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::security

namespace android::security
{
	class ConfirmationPrompt : public __jni_impl::android::security::ConfirmationPrompt
	{
	public:
		ConfirmationPrompt(QAndroidJniObject obj) { __thiz = obj; }
		ConfirmationPrompt()
		{
			__constructor();
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_CONFIRMATIONPROMPT

