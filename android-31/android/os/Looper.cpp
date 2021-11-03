#include "./MessageQueue.hpp"
#include "../../JString.hpp"
#include "../../java/lang/Thread.hpp"
#include "./Looper.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	Looper::Looper(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::Looper Looper::getMainLooper()
	{
		return callStaticObjectMethod(
			"android.os.Looper",
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	void Looper::loop()
	{
		callStaticMethod<void>(
			"android.os.Looper",
			"loop",
			"()V"
		);
	}
	android::os::Looper Looper::myLooper()
	{
		return callStaticObjectMethod(
			"android.os.Looper",
			"myLooper",
			"()Landroid/os/Looper;"
		);
	}
	android::os::MessageQueue Looper::myQueue()
	{
		return callStaticObjectMethod(
			"android.os.Looper",
			"myQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	void Looper::prepare()
	{
		callStaticMethod<void>(
			"android.os.Looper",
			"prepare",
			"()V"
		);
	}
	void Looper::prepareMainLooper()
	{
		callStaticMethod<void>(
			"android.os.Looper",
			"prepareMainLooper",
			"()V"
		);
	}
	void Looper::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::os::MessageQueue Looper::getQueue() const
	{
		return callObjectMethod(
			"getQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	java::lang::Thread Looper::getThread() const
	{
		return callObjectMethod(
			"getThread",
			"()Ljava/lang/Thread;"
		);
	}
	jboolean Looper::isCurrentThread() const
	{
		return callMethod<jboolean>(
			"isCurrentThread",
			"()Z"
		);
	}
	void Looper::quit() const
	{
		callMethod<void>(
			"quit",
			"()V"
		);
	}
	void Looper::quitSafely() const
	{
		callMethod<void>(
			"quitSafely",
			"()V"
		);
	}
	void Looper::setMessageLogging(JObject arg0) const
	{
		callMethod<void>(
			"setMessageLogging",
			"(Landroid/util/Printer;)V",
			arg0.object()
		);
	}
	JString Looper::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

