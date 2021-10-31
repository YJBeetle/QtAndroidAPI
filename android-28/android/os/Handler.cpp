#include "./Looper.hpp"
#include "./Message.hpp"
#include "./Handler.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	Handler::Handler(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Handler::Handler()
		: __JniBaseClass(
			"android.os.Handler",
			"()V"
		) {}
	Handler::Handler(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.os.Handler",
			"(Landroid/os/Handler$Callback;)V",
			arg0.object()
		) {}
	Handler::Handler(android::os::Looper arg0)
		: __JniBaseClass(
			"android.os.Handler",
			"(Landroid/os/Looper;)V",
			arg0.object()
		) {}
	Handler::Handler(android::os::Looper arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.os.Handler",
			"(Landroid/os/Looper;Landroid/os/Handler$Callback;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::os::Handler Handler::createAsync(android::os::Looper arg0)
	{
		return callStaticObjectMethod(
			"android.os.Handler",
			"createAsync",
			"(Landroid/os/Looper;)Landroid/os/Handler;",
			arg0.object()
		);
	}
	android::os::Handler Handler::createAsync(android::os::Looper arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"android.os.Handler",
			"createAsync",
			"(Landroid/os/Looper;Landroid/os/Handler$Callback;)Landroid/os/Handler;",
			arg0.object(),
			arg1.object()
		);
	}
	void Handler::dispatchMessage(android::os::Message arg0)
	{
		callMethod<void>(
			"dispatchMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void Handler::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	android::os::Looper Handler::getLooper()
	{
		return callObjectMethod(
			"getLooper",
			"()Landroid/os/Looper;"
		);
	}
	jstring Handler::getMessageName(android::os::Message arg0)
	{
		return callObjectMethod(
			"getMessageName",
			"(Landroid/os/Message;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	void Handler::handleMessage(android::os::Message arg0)
	{
		callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	jboolean Handler::hasMessages(jint arg0)
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(I)Z",
			arg0
		);
	}
	jboolean Handler::hasMessages(jint arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(ILjava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	android::os::Message Handler::obtainMessage()
	{
		return callObjectMethod(
			"obtainMessage",
			"()Landroid/os/Message;"
		);
	}
	android::os::Message Handler::obtainMessage(jint arg0)
	{
		return callObjectMethod(
			"obtainMessage",
			"(I)Landroid/os/Message;",
			arg0
		);
	}
	android::os::Message Handler::obtainMessage(jint arg0, jobject arg1)
	{
		return callObjectMethod(
			"obtainMessage",
			"(ILjava/lang/Object;)Landroid/os/Message;",
			arg0,
			arg1
		);
	}
	android::os::Message Handler::obtainMessage(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"obtainMessage",
			"(III)Landroid/os/Message;",
			arg0,
			arg1,
			arg2
		);
	}
	android::os::Message Handler::obtainMessage(jint arg0, jint arg1, jint arg2, jobject arg3)
	{
		return callObjectMethod(
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
		return callMethod<jboolean>(
			"post",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	jboolean Handler::postAtFrontOfQueue(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"postAtFrontOfQueue",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	jboolean Handler::postAtTime(__JniBaseClass arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"postAtTime",
			"(Ljava/lang/Runnable;J)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Handler::postAtTime(__JniBaseClass arg0, jobject arg1, jlong arg2)
	{
		return callMethod<jboolean>(
			"postAtTime",
			"(Ljava/lang/Runnable;Ljava/lang/Object;J)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean Handler::postDelayed(__JniBaseClass arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;J)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Handler::postDelayed(__JniBaseClass arg0, jobject arg1, jlong arg2)
	{
		return callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;Ljava/lang/Object;J)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Handler::removeCallbacks(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void Handler::removeCallbacks(__JniBaseClass arg0, jobject arg1)
	{
		callMethod<void>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)V",
			arg0.object(),
			arg1
		);
	}
	void Handler::removeCallbacksAndMessages(jobject arg0)
	{
		callMethod<void>(
			"removeCallbacksAndMessages",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Handler::removeMessages(jint arg0)
	{
		callMethod<void>(
			"removeMessages",
			"(I)V",
			arg0
		);
	}
	void Handler::removeMessages(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"removeMessages",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean Handler::sendEmptyMessage(jint arg0)
	{
		return callMethod<jboolean>(
			"sendEmptyMessage",
			"(I)Z",
			arg0
		);
	}
	jboolean Handler::sendEmptyMessageAtTime(jint arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"sendEmptyMessageAtTime",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
	jboolean Handler::sendEmptyMessageDelayed(jint arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"sendEmptyMessageDelayed",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
	jboolean Handler::sendMessage(android::os::Message arg0)
	{
		return callMethod<jboolean>(
			"sendMessage",
			"(Landroid/os/Message;)Z",
			arg0.object()
		);
	}
	jboolean Handler::sendMessageAtFrontOfQueue(android::os::Message arg0)
	{
		return callMethod<jboolean>(
			"sendMessageAtFrontOfQueue",
			"(Landroid/os/Message;)Z",
			arg0.object()
		);
	}
	jboolean Handler::sendMessageAtTime(android::os::Message arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"sendMessageAtTime",
			"(Landroid/os/Message;J)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Handler::sendMessageDelayed(android::os::Message arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"sendMessageDelayed",
			"(Landroid/os/Message;J)Z",
			arg0.object(),
			arg1
		);
	}
	jstring Handler::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os

