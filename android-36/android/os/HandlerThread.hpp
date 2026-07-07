#pragma once

#include "./Looper.def.hpp"
#include "../../JString.hpp"
#include "./HandlerThread.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline HandlerThread::HandlerThread(JString arg0)
		: java::lang::Thread(
			"android.os.HandlerThread",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline HandlerThread::HandlerThread(JString arg0, jint arg1)
		: java::lang::Thread(
			"android.os.HandlerThread",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline android::os::Looper HandlerThread::getLooper() const
	{
		return callObjectMethod(
			"getLooper",
			"()Landroid/os/Looper;"
		);
	}
	inline jint HandlerThread::getThreadId() const
	{
		return callMethod<jint>(
			"getThreadId",
			"()I"
		);
	}
	inline jboolean HandlerThread::quit() const
	{
		return callMethod<jboolean>(
			"quit",
			"()Z"
		);
	}
	inline jboolean HandlerThread::quitSafely() const
	{
		return callMethod<jboolean>(
			"quitSafely",
			"()Z"
		);
	}
	inline void HandlerThread::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::os

// Base class headers
#include "../../java/lang/Thread.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
