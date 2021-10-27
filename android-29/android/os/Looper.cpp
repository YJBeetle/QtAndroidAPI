#include "./MessageQueue.hpp"
#include "../../java/lang/Thread.hpp"
#include "./Looper.hpp"

namespace android::os
{
	// Fields
	
	Looper::Looper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Looper::getMainLooper()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Looper",
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	void Looper::loop()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Looper",
			"loop",
			"()V"
		);
	}
	QAndroidJniObject Looper::myLooper()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Looper",
			"myLooper",
			"()Landroid/os/Looper;"
		);
	}
	QAndroidJniObject Looper::myQueue()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Looper",
			"myQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	void Looper::prepare()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Looper",
			"prepare",
			"()V"
		);
	}
	void Looper::prepareMainLooper()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Looper",
			"prepareMainLooper",
			"()V"
		);
	}
	void Looper::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Looper::dump(__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Looper::getQueue()
	{
		return __thiz.callObjectMethod(
			"getQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	QAndroidJniObject Looper::getThread()
	{
		return __thiz.callObjectMethod(
			"getThread",
			"()Ljava/lang/Thread;"
		);
	}
	jboolean Looper::isCurrentThread()
	{
		return __thiz.callMethod<jboolean>(
			"isCurrentThread",
			"()Z"
		);
	}
	void Looper::quit()
	{
		__thiz.callMethod<void>(
			"quit",
			"()V"
		);
	}
	void Looper::quitSafely()
	{
		__thiz.callMethod<void>(
			"quitSafely",
			"()V"
		);
	}
	void Looper::setMessageLogging(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setMessageLogging",
			"(Landroid/util/Printer;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Looper::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os

