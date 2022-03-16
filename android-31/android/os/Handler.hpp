#pragma once

#include "./Looper.def.hpp"
#include "./Message.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Handler.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline Handler::Handler()
		: JObject(
			"android.os.Handler",
			"()V"
		) {}
	inline Handler::Handler(JObject arg0)
		: JObject(
			"android.os.Handler",
			"(Landroid/os/Handler$Callback;)V",
			arg0.object()
		) {}
	inline Handler::Handler(android::os::Looper arg0)
		: JObject(
			"android.os.Handler",
			"(Landroid/os/Looper;)V",
			arg0.object()
		) {}
	inline Handler::Handler(android::os::Looper arg0, JObject arg1)
		: JObject(
			"android.os.Handler",
			"(Landroid/os/Looper;Landroid/os/Handler$Callback;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::os::Handler Handler::createAsync(android::os::Looper arg0)
	{
		return callStaticObjectMethod(
			"android.os.Handler",
			"createAsync",
			"(Landroid/os/Looper;)Landroid/os/Handler;",
			arg0.object()
		);
	}
	inline android::os::Handler Handler::createAsync(android::os::Looper arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.os.Handler",
			"createAsync",
			"(Landroid/os/Looper;Landroid/os/Handler$Callback;)Landroid/os/Handler;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Handler::dispatchMessage(android::os::Message arg0) const
	{
		callMethod<void>(
			"dispatchMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline void Handler::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::os::Looper Handler::getLooper() const
	{
		return callObjectMethod(
			"getLooper",
			"()Landroid/os/Looper;"
		);
	}
	inline JString Handler::getMessageName(android::os::Message arg0) const
	{
		return callObjectMethod(
			"getMessageName",
			"(Landroid/os/Message;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline void Handler::handleMessage(android::os::Message arg0) const
	{
		callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline jboolean Handler::hasCallbacks(JObject arg0) const
	{
		return callMethod<jboolean>(
			"hasCallbacks",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	inline jboolean Handler::hasMessages(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Handler::hasMessages(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(ILjava/lang/Object;)Z",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline android::os::Message Handler::obtainMessage() const
	{
		return callObjectMethod(
			"obtainMessage",
			"()Landroid/os/Message;"
		);
	}
	inline android::os::Message Handler::obtainMessage(jint arg0) const
	{
		return callObjectMethod(
			"obtainMessage",
			"(I)Landroid/os/Message;",
			arg0
		);
	}
	inline android::os::Message Handler::obtainMessage(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"obtainMessage",
			"(ILjava/lang/Object;)Landroid/os/Message;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline android::os::Message Handler::obtainMessage(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"obtainMessage",
			"(III)Landroid/os/Message;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::os::Message Handler::obtainMessage(jint arg0, jint arg1, jint arg2, JObject arg3) const
	{
		return callObjectMethod(
			"obtainMessage",
			"(IIILjava/lang/Object;)Landroid/os/Message;",
			arg0,
			arg1,
			arg2,
			arg3.object<jobject>()
		);
	}
	inline jboolean Handler::post(JObject arg0) const
	{
		return callMethod<jboolean>(
			"post",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	inline jboolean Handler::postAtFrontOfQueue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"postAtFrontOfQueue",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	inline jboolean Handler::postAtTime(JObject arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"postAtTime",
			"(Ljava/lang/Runnable;J)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean Handler::postAtTime(JObject arg0, JObject arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"postAtTime",
			"(Ljava/lang/Runnable;Ljava/lang/Object;J)Z",
			arg0.object(),
			arg1.object<jobject>(),
			arg2
		);
	}
	inline jboolean Handler::postDelayed(JObject arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;J)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean Handler::postDelayed(JObject arg0, JObject arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;Ljava/lang/Object;J)Z",
			arg0.object(),
			arg1.object<jobject>(),
			arg2
		);
	}
	inline void Handler::removeCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void Handler::removeCallbacks(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline void Handler::removeCallbacksAndMessages(JObject arg0) const
	{
		callMethod<void>(
			"removeCallbacksAndMessages",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void Handler::removeMessages(jint arg0) const
	{
		callMethod<void>(
			"removeMessages",
			"(I)V",
			arg0
		);
	}
	inline void Handler::removeMessages(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"removeMessages",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jboolean Handler::sendEmptyMessage(jint arg0) const
	{
		return callMethod<jboolean>(
			"sendEmptyMessage",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Handler::sendEmptyMessageAtTime(jint arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"sendEmptyMessageAtTime",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Handler::sendEmptyMessageDelayed(jint arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"sendEmptyMessageDelayed",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Handler::sendMessage(android::os::Message arg0) const
	{
		return callMethod<jboolean>(
			"sendMessage",
			"(Landroid/os/Message;)Z",
			arg0.object()
		);
	}
	inline jboolean Handler::sendMessageAtFrontOfQueue(android::os::Message arg0) const
	{
		return callMethod<jboolean>(
			"sendMessageAtFrontOfQueue",
			"(Landroid/os/Message;)Z",
			arg0.object()
		);
	}
	inline jboolean Handler::sendMessageAtTime(android::os::Message arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"sendMessageAtTime",
			"(Landroid/os/Message;J)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean Handler::sendMessageDelayed(android::os::Message arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"sendMessageDelayed",
			"(Landroid/os/Message;J)Z",
			arg0.object(),
			arg1
		);
	}
	inline JString Handler::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

// Base class headers

