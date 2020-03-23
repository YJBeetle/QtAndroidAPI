#pragma once

#ifndef ANDROID_OS_HANDLER
#define ANDROID_OS_HANDLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::os
{
	class Message;
}

namespace __jni_impl::android::os
{
	class Handler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::Looper arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::os::Looper arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		void handleMessage(__jni_impl::android::os::Message arg0);
		void dispatchMessage(__jni_impl::android::os::Message arg0);
		static QAndroidJniObject createAsync(__jni_impl::android::os::Looper arg0);
		static QAndroidJniObject createAsync(__jni_impl::android::os::Looper arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getMessageName(__jni_impl::android::os::Message arg0);
		QAndroidJniObject obtainMessage(jint arg0, jint arg1, jint arg2, jobject arg3);
		QAndroidJniObject obtainMessage(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject obtainMessage(jint arg0, jobject arg1);
		QAndroidJniObject obtainMessage(jint arg0);
		QAndroidJniObject obtainMessage();
		jboolean post(__jni_impl::__JniBaseClass arg0);
		jboolean postAtTime(__jni_impl::__JniBaseClass arg0, jobject arg1, jlong arg2);
		jboolean postAtTime(__jni_impl::__JniBaseClass arg0, jlong arg1);
		jboolean postDelayed(__jni_impl::__JniBaseClass arg0, jlong arg1);
		jboolean postDelayed(__jni_impl::__JniBaseClass arg0, jobject arg1, jlong arg2);
		jboolean postAtFrontOfQueue(__jni_impl::__JniBaseClass arg0);
		void removeCallbacks(__jni_impl::__JniBaseClass arg0, jobject arg1);
		void removeCallbacks(__jni_impl::__JniBaseClass arg0);
		jboolean sendMessage(__jni_impl::android::os::Message arg0);
		jboolean sendEmptyMessage(jint arg0);
		jboolean sendEmptyMessageDelayed(jint arg0, jlong arg1);
		jboolean sendEmptyMessageAtTime(jint arg0, jlong arg1);
		jboolean sendMessageDelayed(__jni_impl::android::os::Message arg0, jlong arg1);
		jboolean sendMessageAtTime(__jni_impl::android::os::Message arg0, jlong arg1);
		jboolean sendMessageAtFrontOfQueue(__jni_impl::android::os::Message arg0);
		void removeMessages(jint arg0);
		void removeMessages(jint arg0, jobject arg1);
		void removeCallbacksAndMessages(jobject arg0);
		jboolean hasMessages(jint arg0, jobject arg1);
		jboolean hasMessages(jint arg0);
		jboolean hasCallbacks(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getLooper();
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
	};
} // namespace __jni_impl::android::os

#include "Looper.hpp"
#include "Message.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void Handler::__constructor(__jni_impl::android::os::Looper arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.Handler",
			"(Landroid/os/Looper;Landroid/os/Handler$Callback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Handler::__constructor(__jni_impl::android::os::Looper arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Handler",
			"(Landroid/os/Looper;)V",
			arg0.__jniObject().object());
	}
	void Handler::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Handler",
			"(Landroid/os/Handler$Callback;)V",
			arg0.__jniObject().object());
	}
	void Handler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Handler",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Handler::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void Handler::handleMessage(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object());
	}
	void Handler::dispatchMessage(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"dispatchMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Handler::createAsync(__jni_impl::android::os::Looper arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Handler",
			"createAsync",
			"(Landroid/os/Looper;)Landroid/os/Handler;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Handler::createAsync(__jni_impl::android::os::Looper arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Handler",
			"createAsync",
			"(Landroid/os/Looper;Landroid/os/Handler$Callback;)Landroid/os/Handler;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Handler::getMessageName(__jni_impl::android::os::Message arg0)
	{
		return __thiz.callObjectMethod(
			"getMessageName",
			"(Landroid/os/Message;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Handler::obtainMessage(jint arg0, jint arg1, jint arg2, jobject arg3)
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"(IIILjava/lang/Object;)Landroid/os/Message;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Handler::obtainMessage(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"(III)Landroid/os/Message;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject Handler::obtainMessage(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"(ILjava/lang/Object;)Landroid/os/Message;",
			arg0,
			arg1);
	}
	QAndroidJniObject Handler::obtainMessage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"(I)Landroid/os/Message;",
			arg0);
	}
	QAndroidJniObject Handler::obtainMessage()
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"()Landroid/os/Message;");
	}
	jboolean Handler::post(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"post",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object());
	}
	jboolean Handler::postAtTime(__jni_impl::__JniBaseClass arg0, jobject arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"postAtTime",
			"(Ljava/lang/Runnable;Ljava/lang/Object;J)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	jboolean Handler::postAtTime(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postAtTime",
			"(Ljava/lang/Runnable;J)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean Handler::postDelayed(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;J)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean Handler::postDelayed(__jni_impl::__JniBaseClass arg0, jobject arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;Ljava/lang/Object;J)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	jboolean Handler::postAtFrontOfQueue(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"postAtFrontOfQueue",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object());
	}
	void Handler::removeCallbacks(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Handler::removeCallbacks(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object());
	}
	jboolean Handler::sendMessage(__jni_impl::android::os::Message arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendMessage",
			"(Landroid/os/Message;)Z",
			arg0.__jniObject().object());
	}
	jboolean Handler::sendEmptyMessage(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendEmptyMessage",
			"(I)Z",
			arg0);
	}
	jboolean Handler::sendEmptyMessageDelayed(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"sendEmptyMessageDelayed",
			"(IJ)Z",
			arg0,
			arg1);
	}
	jboolean Handler::sendEmptyMessageAtTime(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"sendEmptyMessageAtTime",
			"(IJ)Z",
			arg0,
			arg1);
	}
	jboolean Handler::sendMessageDelayed(__jni_impl::android::os::Message arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"sendMessageDelayed",
			"(Landroid/os/Message;J)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean Handler::sendMessageAtTime(__jni_impl::android::os::Message arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"sendMessageAtTime",
			"(Landroid/os/Message;J)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean Handler::sendMessageAtFrontOfQueue(__jni_impl::android::os::Message arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendMessageAtFrontOfQueue",
			"(Landroid/os/Message;)Z",
			arg0.__jniObject().object());
	}
	void Handler::removeMessages(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeMessages",
			"(I)V",
			arg0);
	}
	void Handler::removeMessages(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"removeMessages",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1);
	}
	void Handler::removeCallbacksAndMessages(jobject arg0)
	{
		__thiz.callMethod<void>(
			"removeCallbacksAndMessages",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	jboolean Handler::hasMessages(jint arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"hasMessages",
			"(ILjava/lang/Object;)Z",
			arg0,
			arg1);
	}
	jboolean Handler::hasMessages(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMessages",
			"(I)Z",
			arg0);
	}
	jboolean Handler::hasCallbacks(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCallbacks",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Handler::getLooper()
	{
		return __thiz.callObjectMethod(
			"getLooper",
			"()Landroid/os/Looper;");
	}
	void Handler::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Handler : public __jni_impl::android::os::Handler
	{
	public:
		Handler(QAndroidJniObject obj) { __thiz = obj; }
		Handler(__jni_impl::android::os::Looper arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Handler(__jni_impl::android::os::Looper arg0)
		{
			__constructor(
				arg0);
		}
		Handler(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		Handler()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_HANDLER

