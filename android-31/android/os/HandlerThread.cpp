#include "./Looper.hpp"
#include "../../JString.hpp"
#include "./HandlerThread.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	HandlerThread::HandlerThread(QAndroidJniObject obj) : java::lang::Thread(obj) {}
	
	// Constructors
	HandlerThread::HandlerThread(JString arg0)
		: java::lang::Thread(
			"android.os.HandlerThread",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	HandlerThread::HandlerThread(JString arg0, jint arg1)
		: java::lang::Thread(
			"android.os.HandlerThread",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	android::os::Looper HandlerThread::getLooper() const
	{
		return callObjectMethod(
			"getLooper",
			"()Landroid/os/Looper;"
		);
	}
	jint HandlerThread::getThreadId() const
	{
		return callMethod<jint>(
			"getThreadId",
			"()I"
		);
	}
	jboolean HandlerThread::quit() const
	{
		return callMethod<jboolean>(
			"quit",
			"()Z"
		);
	}
	jboolean HandlerThread::quitSafely() const
	{
		return callMethod<jboolean>(
			"quitSafely",
			"()Z"
		);
	}
	void HandlerThread::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::os

