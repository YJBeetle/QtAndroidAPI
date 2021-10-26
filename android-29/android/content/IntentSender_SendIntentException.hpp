#pragma once

#ifndef ANDROID_CONTENT_INTENTSENDER_SENDINTENTEXCEPTION
#define ANDROID_CONTENT_INTENTSENDER_SENDINTENTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::android::content
{
	class IntentSender_SendIntentException : public __jni_impl::android::util::AndroidException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::lang::Exception arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::content

#include "../../java/lang/Exception.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void IntentSender_SendIntentException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender$SendIntentException",
			"()V"
		);
	}
	void IntentSender_SendIntentException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender$SendIntentException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntentSender_SendIntentException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender$SendIntentException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void IntentSender_SendIntentException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender$SendIntentException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::content

namespace android::content
{
	class IntentSender_SendIntentException : public __jni_impl::android::content::IntentSender_SendIntentException
	{
	public:
		IntentSender_SendIntentException(QAndroidJniObject obj) { __thiz = obj; }
		IntentSender_SendIntentException()
		{
			__constructor();
		}
		IntentSender_SendIntentException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IntentSender_SendIntentException(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_INTENTSENDER_SENDINTENTEXCEPTION

