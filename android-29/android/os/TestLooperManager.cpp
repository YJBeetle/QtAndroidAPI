#include "./Handler.hpp"
#include "./Looper.hpp"
#include "./Message.hpp"
#include "./MessageQueue.hpp"
#include "./TestLooperManager.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	TestLooperManager::TestLooperManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void TestLooperManager::execute(android::os::Message arg0)
	{
		callMethod<void>(
			"execute",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	QAndroidJniObject TestLooperManager::getMessageQueue()
	{
		return callObjectMethod(
			"getMessageQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	jboolean TestLooperManager::hasMessages(android::os::Handler arg0, jobject arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;I)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean TestLooperManager::hasMessages(android::os::Handler arg0, jobject arg1, __JniBaseClass arg2)
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;Ljava/lang/Runnable;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject TestLooperManager::next()
	{
		return callObjectMethod(
			"next",
			"()Landroid/os/Message;"
		);
	}
	void TestLooperManager::recycle(android::os::Message arg0)
	{
		callMethod<void>(
			"recycle",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void TestLooperManager::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::os

