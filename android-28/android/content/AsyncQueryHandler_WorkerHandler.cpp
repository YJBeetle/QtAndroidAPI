#include "./AsyncQueryHandler.hpp"
#include "../os/Looper.hpp"
#include "../os/Message.hpp"
#include "./AsyncQueryHandler_WorkerHandler.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	AsyncQueryHandler_WorkerHandler::AsyncQueryHandler_WorkerHandler(QAndroidJniObject obj) : android::os::Handler(obj) {}
	
	// Constructors
	AsyncQueryHandler_WorkerHandler::AsyncQueryHandler_WorkerHandler(android::content::AsyncQueryHandler arg0, android::os::Looper arg1)
		: android::os::Handler(
			"android.content.AsyncQueryHandler$WorkerHandler",
			"(Landroid/content/AsyncQueryHandler;Landroid/os/Looper;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void AsyncQueryHandler_WorkerHandler::handleMessage(android::os::Message arg0)
	{
		callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
} // namespace android::content

