#pragma once

#include "./AsyncQueryHandler.def.hpp"
#include "../os/Looper.def.hpp"
#include "../os/Message.def.hpp"
#include "./AsyncQueryHandler_WorkerHandler.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline AsyncQueryHandler_WorkerHandler::AsyncQueryHandler_WorkerHandler(android::content::AsyncQueryHandler arg0, android::os::Looper arg1)
		: android::os::Handler(
			"android.content.AsyncQueryHandler$WorkerHandler",
			"(Landroid/content/AsyncQueryHandler;Landroid/os/Looper;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void AsyncQueryHandler_WorkerHandler::handleMessage(android::os::Message arg0) const
	{
		callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers
#include "../os/Handler.hpp"

