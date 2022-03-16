#include "./Handler.hpp"
#include "./Message.hpp"
#include "./MessageQueue.hpp"
#include "../../JObject.hpp"
#include "./TestLooperManager.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	void TestLooperManager::execute(android::os::Message arg0) const
	{
		callMethod<void>(
			"execute",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	android::os::MessageQueue TestLooperManager::getMessageQueue() const
	{
		return callObjectMethod(
			"getMessageQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	jboolean TestLooperManager::hasMessages(android::os::Handler arg0, JObject arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;I)Z",
			arg0.object(),
			arg1.object<jobject>(),
			arg2
		);
	}
	jboolean TestLooperManager::hasMessages(android::os::Handler arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;Ljava/lang/Runnable;)Z",
			arg0.object(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	android::os::Message TestLooperManager::next() const
	{
		return callObjectMethod(
			"next",
			"()Landroid/os/Message;"
		);
	}
	void TestLooperManager::recycle(android::os::Message arg0) const
	{
		callMethod<void>(
			"recycle",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void TestLooperManager::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::os

