#include "./MessageQueue.hpp"
#include "../../java/lang/Thread.hpp"
#include "./Looper.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	Looper::Looper(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject Looper::getQueue()
	{
		return callObjectMethod(
			"getQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	QAndroidJniObject Looper::getThread()
	{
		return callObjectMethod(
			"getThread",
			"()Ljava/lang/Thread;"
		);
	}
	jboolean Looper::isCurrentThread()
	{
		return callMethod<jboolean>(
			"isCurrentThread",
			"()Z"
		);
	}
	void Looper::quit()
	{
		callMethod<void>(
			"quit",
			"()V"
		);
	}
	void Looper::quitSafely()
	{
		callMethod<void>(
			"quitSafely",
			"()V"
		);
	}
	void Looper::setMessageLogging(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setMessageLogging",
			"(Landroid/util/Printer;)V",
			arg0.object()
		);
	}
	jstring Looper::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os

