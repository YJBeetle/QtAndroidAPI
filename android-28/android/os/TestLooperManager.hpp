#pragma once

#include "./Handler.def.hpp"
#include "./Looper.def.hpp"
#include "./Message.def.hpp"
#include "./MessageQueue.def.hpp"
#include "../../JObject.hpp"
#include "./TestLooperManager.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void TestLooperManager::execute(android::os::Message arg0) const
	{
		callMethod<void>(
			"execute",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline android::os::MessageQueue TestLooperManager::getMessageQueue() const
	{
		return callObjectMethod(
			"getMessageQueue",
			"()Landroid/os/MessageQueue;"
		);
	}
	inline jboolean TestLooperManager::hasMessages(android::os::Handler arg0, JObject arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;I)Z",
			arg0.object(),
			arg1.object<jobject>(),
			arg2
		);
	}
	inline jboolean TestLooperManager::hasMessages(android::os::Handler arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"hasMessages",
			"(Landroid/os/Handler;Ljava/lang/Object;Ljava/lang/Runnable;)Z",
			arg0.object(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	inline android::os::Message TestLooperManager::next() const
	{
		return callObjectMethod(
			"next",
			"()Landroid/os/Message;"
		);
	}
	inline void TestLooperManager::recycle(android::os::Message arg0) const
	{
		callMethod<void>(
			"recycle",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline void TestLooperManager::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::os

// Base class headers

