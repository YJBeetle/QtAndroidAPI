#include "./Looper.hpp"
#include "./Message.hpp"
#include "./Handler.hpp"

namespace android::os
{
	// Fields
	
	Handler::Handler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Handler::Handler()
	{
		__thiz = QAndroidJniObject(
			"android.os.Handler",
			"()V"
		);
	}
	Handler::Handler(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Handler",
			"(Landroid/os/Handler$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	Handler::Handler(android::os::Looper arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Handler",
			"(Landroid/os/Looper;)V",
			arg0.__jniObject().object()
		);
	}
	Handler::Handler(android::os::Looper arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.Handler",
			"(Landroid/os/Looper;Landroid/os/Handler$Callback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Handler::createAsync(android::os::Looper arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Handler",
			"createAsync",
			"(Landroid/os/Looper;)Landroid/os/Handler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Handler::createAsync(android::os::Looper arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Handler",
			"createAsync",
			"(Landroid/os/Looper;Landroid/os/Handler$Callback;)Landroid/os/Handler;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Handler::dispatchMessage(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"dispatchMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void Handler::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Handler::getLooper()
	{
		return __thiz.callObjectMethod(
			"getLooper",
			"()Landroid/os/Looper;"
		);
	}
	jstring Handler::getMessageName(android::os::Message arg0)
	{
		return __thiz.callObjectMethod(
			"getMessageName",
			"(Landroid/os/Message;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void Handler::handleMessage(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Handler::hasCallbacks(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCallbacks",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Handler::hasMessages(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMessages",
			"(I)Z",
			arg0
		);
	}
	jboolean Handler::hasMessages(jint arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"hasMessages",
			"(ILjava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Handler::obtainMessage()
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"()Landroid/os/Message;"
		);
	}
	QAndroidJniObject Handler::obtainMessage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"(I)Landroid/os/Message;",
			arg0
		);
	}
	QAndroidJniObject Handler::obtainMessage(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"(ILjava/lang/Object;)Landroid/os/Message;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Handler::obtainMessage(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"(III)Landroid/os/Message;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Handler::obtainMessage(jint arg0, jint arg1, jint arg2, jobject arg3)
	{
		return __thiz.callObjectMethod(
			"obtainMessage",
			"(IIILjava/lang/Object;)Landroid/os/Message;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Handler::post(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"post",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Handler::postAtFrontOfQueue(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"postAtFrontOfQueue",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Handler::postAtTime(__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postAtTime",
			"(Ljava/lang/Runnable;J)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Handler::postAtTime(__JniBaseClass arg0, jobject arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"postAtTime",
			"(Ljava/lang/Runnable;Ljava/lang/Object;J)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Handler::postDelayed(__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;J)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Handler::postDelayed(__JniBaseClass arg0, jobject arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;Ljava/lang/Object;J)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Handler::removeCallbacks(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void Handler::removeCallbacks(__JniBaseClass arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Handler::removeCallbacksAndMessages(jobject arg0)
	{
		__thiz.callMethod<void>(
			"removeCallbacksAndMessages",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Handler::removeMessages(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeMessages",
			"(I)V",
			arg0
		);
	}
	void Handler::removeMessages(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"removeMessages",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean Handler::sendEmptyMessage(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendEmptyMessage",
			"(I)Z",
			arg0
		);
	}
	jboolean Handler::sendEmptyMessageAtTime(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"sendEmptyMessageAtTime",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
	jboolean Handler::sendEmptyMessageDelayed(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"sendEmptyMessageDelayed",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
	jboolean Handler::sendMessage(android::os::Message arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendMessage",
			"(Landroid/os/Message;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Handler::sendMessageAtFrontOfQueue(android::os::Message arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendMessageAtFrontOfQueue",
			"(Landroid/os/Message;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Handler::sendMessageAtTime(android::os::Message arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"sendMessageAtTime",
			"(Landroid/os/Message;J)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Handler::sendMessageDelayed(android::os::Message arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"sendMessageDelayed",
			"(Landroid/os/Message;J)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring Handler::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os

