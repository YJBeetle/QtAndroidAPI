#include "./Looper.hpp"
#include "./HandlerThread.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	HandlerThread::HandlerThread(QAndroidJniObject obj) : java::lang::Thread(obj) {}
	
	// Constructors
	HandlerThread::HandlerThread(jstring arg0)
		: java::lang::Thread(
			"android.os.HandlerThread",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	HandlerThread::HandlerThread(jstring arg0, jint arg1)
		: java::lang::Thread(
			"android.os.HandlerThread",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::os::Looper HandlerThread::getLooper()
	{
		return callObjectMethod(
			"getLooper",
			"()Landroid/os/Looper;"
		);
	}
	jint HandlerThread::getThreadId()
	{
		return callMethod<jint>(
			"getThreadId",
			"()I"
		);
	}
	jboolean HandlerThread::quit()
	{
		return callMethod<jboolean>(
			"quit",
			"()Z"
		);
	}
	jboolean HandlerThread::quitSafely()
	{
		return callMethod<jboolean>(
			"quitSafely",
			"()Z"
		);
	}
	void HandlerThread::run()
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::os

