#include "./Looper.hpp"
#include "./HandlerThread.hpp"

namespace android::os
{
	// Fields
	
	HandlerThread::HandlerThread(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	HandlerThread::HandlerThread(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.HandlerThread",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	HandlerThread::HandlerThread(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.HandlerThread",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	HandlerThread::HandlerThread(jstring &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.HandlerThread",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	HandlerThread::HandlerThread(const QString &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.HandlerThread",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject HandlerThread::getLooper()
	{
		return __thiz.callObjectMethod(
			"getLooper",
			"()Landroid/os/Looper;"
		);
	}
	jint HandlerThread::getThreadId()
	{
		return __thiz.callMethod<jint>(
			"getThreadId",
			"()I"
		);
	}
	jboolean HandlerThread::quit()
	{
		return __thiz.callMethod<jboolean>(
			"quit",
			"()Z"
		);
	}
	jboolean HandlerThread::quitSafely()
	{
		return __thiz.callMethod<jboolean>(
			"quitSafely",
			"()Z"
		);
	}
	void HandlerThread::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::os

