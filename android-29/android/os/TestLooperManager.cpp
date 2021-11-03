#include "./Handler.hpp"
#include "./Looper.hpp"
#include "./Message.hpp"
#include "./MessageQueue.hpp"
#include "../../JObject.hpp"
#include "./TestLooperManager.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	TestLooperManager::TestLooperManager(QJniObject obj) : JObject(obj) {}
	
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
	android::os::MessageQueue TestLooperManager::getMessageQueue()
	{
		return callObjectMethod(
			"getMessageQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	jboolean TestLooperManager::hasMessages(android::os::Handler arg0, JObject arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;I)Z",
			arg0.object(),
			arg1.object<jobject>(),
			arg2
		);
	}
	jboolean TestLooperManager::hasMessages(android::os::Handler arg0, JObject arg1, JObject arg2)
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;Ljava/lang/Runnable;)Z",
			arg0.object(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	android::os::Message TestLooperManager::next()
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

