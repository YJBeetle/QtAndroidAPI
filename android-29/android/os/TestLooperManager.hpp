#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Looper;
}
namespace android::os
{
	class Message;
}
namespace android::os
{
	class MessageQueue;
}

namespace android::os
{
	class TestLooperManager : public __JniBaseClass
	{
	public:
		// Fields
		
		TestLooperManager(QAndroidJniObject obj);
		// Constructors
		TestLooperManager() = default;
		
		// Methods
		void execute(android::os::Message arg0);
		QAndroidJniObject getMessageQueue();
		jboolean hasMessages(android::os::Handler arg0, jobject arg1, jint arg2);
		jboolean hasMessages(android::os::Handler arg0, jobject arg1, __JniBaseClass arg2);
		QAndroidJniObject next();
		void recycle(android::os::Message arg0);
		void release();
	};
} // namespace android::os

