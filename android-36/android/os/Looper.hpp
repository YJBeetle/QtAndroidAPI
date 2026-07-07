#pragma once

#include "./MessageQueue.def.hpp"
#include "../../JString.hpp"
#include "../../java/lang/Thread.def.hpp"
#include "./Looper.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::Looper Looper::getMainLooper()
	{
		return callStaticObjectMethod(
			"android.os.Looper",
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	inline void Looper::loop()
	{
		callStaticMethod<void>(
			"android.os.Looper",
			"loop",
			"()V"
		);
	}
	inline android::os::Looper Looper::myLooper()
	{
		return callStaticObjectMethod(
			"android.os.Looper",
			"myLooper",
			"()Landroid/os/Looper;"
		);
	}
	inline android::os::MessageQueue Looper::myQueue()
	{
		return callStaticObjectMethod(
			"android.os.Looper",
			"myQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	inline void Looper::prepare()
	{
		callStaticMethod<void>(
			"android.os.Looper",
			"prepare",
			"()V"
		);
	}
	inline void Looper::prepareMainLooper()
	{
		callStaticMethod<void>(
			"android.os.Looper",
			"prepareMainLooper",
			"()V"
		);
	}
	inline void Looper::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::os::MessageQueue Looper::getQueue() const
	{
		return callObjectMethod(
			"getQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	inline java::lang::Thread Looper::getThread() const
	{
		return callObjectMethod(
			"getThread",
			"()Ljava/lang/Thread;"
		);
	}
	inline jboolean Looper::isCurrentThread() const
	{
		return callMethod<jboolean>(
			"isCurrentThread",
			"()Z"
		);
	}
	inline void Looper::quit() const
	{
		callMethod<void>(
			"quit",
			"()V"
		);
	}
	inline void Looper::quitSafely() const
	{
		callMethod<void>(
			"quitSafely",
			"()V"
		);
	}
	inline void Looper::setMessageLogging(JObject arg0) const
	{
		callMethod<void>(
			"setMessageLogging",
			"(Landroid/util/Printer;)V",
			arg0.object()
		);
	}
	inline JString Looper::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
