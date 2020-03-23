#pragma once

#ifndef ANDROID_OS_LOOPER
#define ANDROID_OS_LOOPER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class MessageQueue;
}
namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::android::os
{
	class Looper : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getQueue();
		static void prepare();
		static void loop();
		static void prepareMainLooper();
		static QAndroidJniObject myLooper();
		static QAndroidJniObject myQueue();
		jboolean isCurrentThread();
		void setMessageLogging(__jni_impl::__JniBaseClass arg0);
		void quit();
		void quitSafely();
		QAndroidJniObject getThread();
		static QAndroidJniObject getMainLooper();
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
	};
} // namespace __jni_impl::android::os

#include "MessageQueue.hpp"
#include "../../java/lang/Thread.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void Looper::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Looper",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Looper::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Looper::getQueue()
	{
		return __thiz.callObjectMethod(
			"getQueue",
			"()Landroid/os/MessageQueue;");
	}
	void Looper::prepare()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Looper",
			"prepare",
			"()V");
	}
	void Looper::loop()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Looper",
			"loop",
			"()V");
	}
	void Looper::prepareMainLooper()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Looper",
			"prepareMainLooper",
			"()V");
	}
	QAndroidJniObject Looper::myLooper()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Looper",
			"myLooper",
			"()Landroid/os/Looper;");
	}
	QAndroidJniObject Looper::myQueue()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Looper",
			"myQueue",
			"()Landroid/os/MessageQueue;");
	}
	jboolean Looper::isCurrentThread()
	{
		return __thiz.callMethod<jboolean>(
			"isCurrentThread",
			"()Z");
	}
	void Looper::setMessageLogging(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setMessageLogging",
			"(Landroid/util/Printer;)V",
			arg0.__jniObject().object());
	}
	void Looper::quit()
	{
		__thiz.callMethod<void>(
			"quit",
			"()V");
	}
	void Looper::quitSafely()
	{
		__thiz.callMethod<void>(
			"quitSafely",
			"()V");
	}
	QAndroidJniObject Looper::getThread()
	{
		return __thiz.callObjectMethod(
			"getThread",
			"()Ljava/lang/Thread;");
	}
	QAndroidJniObject Looper::getMainLooper()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Looper",
			"getMainLooper",
			"()Landroid/os/Looper;");
	}
	void Looper::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Looper : public __jni_impl::android::os::Looper
	{
	public:
		Looper(QAndroidJniObject obj) { __thiz = obj; }
		Looper()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_LOOPER

