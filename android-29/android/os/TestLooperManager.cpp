#include "./Handler.hpp"
#include "./Looper.hpp"
#include "./Message.hpp"
#include "./MessageQueue.hpp"
#include "./TestLooperManager.hpp"

namespace android::os
{
	// Fields
	
	TestLooperManager::TestLooperManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void TestLooperManager::execute(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TestLooperManager::getMessageQueue()
	{
		return __thiz.callObjectMethod(
			"getMessageQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	jboolean TestLooperManager::hasMessages(android::os::Handler arg0, jobject arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean TestLooperManager::hasMessages(android::os::Handler arg0, jobject arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject TestLooperManager::next()
	{
		return __thiz.callObjectMethod(
			"next",
			"()Landroid/os/Message;"
		);
	}
	void TestLooperManager::recycle(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"recycle",
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
} // namespace android::os

