#pragma once

#ifndef ANDROID_OS_HANDLERTHREAD
#define ANDROID_OS_HANDLERTHREAD

#include "../../java/lang/Thread.hpp"

namespace __jni_impl::android::os
{
	class Looper;
}

namespace __jni_impl::android::os
{
	class HandlerThread : public __jni_impl::java::lang::Thread
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jint arg1);
		
		// Methods
		void run();
		jint getThreadId();
		jboolean quit();
		jboolean quitSafely();
		QAndroidJniObject getLooper();
	};
} // namespace __jni_impl::android::os

#include "Looper.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void HandlerThread::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.HandlerThread",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void HandlerThread::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.HandlerThread",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	
	// Methods
	void HandlerThread::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V");
	}
	jint HandlerThread::getThreadId()
	{
		return __thiz.callMethod<jint>(
			"getThreadId",
			"()I");
	}
	jboolean HandlerThread::quit()
	{
		return __thiz.callMethod<jboolean>(
			"quit",
			"()Z");
	}
	jboolean HandlerThread::quitSafely()
	{
		return __thiz.callMethod<jboolean>(
			"quitSafely",
			"()Z");
	}
	QAndroidJniObject HandlerThread::getLooper()
	{
		return __thiz.callObjectMethod(
			"getLooper",
			"()Landroid/os/Looper;");
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class HandlerThread : public __jni_impl::android::os::HandlerThread
	{
	public:
		HandlerThread(QAndroidJniObject obj) { __thiz = obj; }
		HandlerThread(jstring arg0)
		{
			__constructor(
				arg0);
		}
		HandlerThread(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_HANDLERTHREAD

