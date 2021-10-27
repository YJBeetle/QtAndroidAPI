#pragma once

#include "../../__JniBaseClass.hpp"
#include "../os/Handler.hpp"

namespace android::content
{
	class AsyncQueryHandler;
}
namespace android::os
{
	class Looper;
}
namespace android::os
{
	class Message;
}

namespace android::content
{
	class AsyncQueryHandler_WorkerHandler : public android::os::Handler
	{
	public:
		// Fields
		
		AsyncQueryHandler_WorkerHandler(QAndroidJniObject obj);
		// Constructors
		AsyncQueryHandler_WorkerHandler(android::content::AsyncQueryHandler &arg0, android::os::Looper &arg1);
		AsyncQueryHandler_WorkerHandler() = default;
		
		// Methods
		void handleMessage(android::os::Message arg0);
	};
} // namespace android::content

