#pragma once

#ifndef ANDROID_APP_PENDINGINTENT_CANCELEDEXCEPTION
#define ANDROID_APP_PENDINGINTENT_CANCELEDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::android::app
{
	class PendingIntent_CanceledException : public __jni_impl::android::util::AndroidException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::lang::Exception arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::app

#include "../../java/lang/Exception.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void PendingIntent_CanceledException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.PendingIntent$CanceledException",
			"()V"
		);
	}
	void PendingIntent_CanceledException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.PendingIntent$CanceledException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	void PendingIntent_CanceledException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.PendingIntent$CanceledException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PendingIntent_CanceledException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.PendingIntent$CanceledException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::app

namespace android::app
{
	class PendingIntent_CanceledException : public __jni_impl::android::app::PendingIntent_CanceledException
	{
	public:
		PendingIntent_CanceledException(QAndroidJniObject obj) { __thiz = obj; }
		PendingIntent_CanceledException()
		{
			__constructor();
		}
		PendingIntent_CanceledException(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
		PendingIntent_CanceledException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_PENDINGINTENT_CANCELEDEXCEPTION

