#include "./AsyncQueryHandler.hpp"
#include "../os/Looper.hpp"
#include "../os/Message.hpp"
#include "./AsyncQueryHandler_WorkerHandler.hpp"

namespace android::content
{
	// Fields
	
	AsyncQueryHandler_WorkerHandler::AsyncQueryHandler_WorkerHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AsyncQueryHandler_WorkerHandler::AsyncQueryHandler_WorkerHandler(android::content::AsyncQueryHandler arg0, android::os::Looper arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.AsyncQueryHandler$WorkerHandler",
			"(Landroid/content/AsyncQueryHandler;Landroid/os/Looper;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void AsyncQueryHandler_WorkerHandler::handleMessage(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content

