#pragma once

#ifndef ANDROID_OS_TESTLOOPERMANAGER
#define ANDROID_OS_TESTLOOPERMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::os
{
	class Message;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class MessageQueue;
}

namespace __jni_impl::android::os
{
	class TestLooperManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject next();
		void execute(__jni_impl::android::os::Message arg0);
		void release();
		jboolean hasMessages(__jni_impl::android::os::Handler arg0, jobject arg1, jint arg2);
		jboolean hasMessages(__jni_impl::android::os::Handler arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject getMessageQueue();
		void recycle(__jni_impl::android::os::Message arg0);
	};
} // namespace __jni_impl::android::os

#include "Looper.hpp"
#include "Message.hpp"
#include "Handler.hpp"
#include "MessageQueue.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void TestLooperManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.TestLooperManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TestLooperManager::next()
	{
		return __thiz.callObjectMethod(
			"next",
			"()Landroid/os/Message;"
		);
	}
	void TestLooperManager::execute(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void TestLooperManager::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jboolean TestLooperManager::hasMessages(__jni_impl::android::os::Handler arg0, jobject arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean TestLooperManager::hasMessages(__jni_impl::android::os::Handler arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject TestLooperManager::getMessageQueue()
	{
		return __thiz.callObjectMethod(
			"getMessageQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	void TestLooperManager::recycle(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"recycle",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class TestLooperManager : public __jni_impl::android::os::TestLooperManager
	{
	public:
		TestLooperManager(QAndroidJniObject obj) { __thiz = obj; }
		TestLooperManager()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_TESTLOOPERMANAGER

