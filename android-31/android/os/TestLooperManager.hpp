#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Handler;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit TestLooperManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TestLooperManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void execute(android::os::Message arg0);
		android::os::MessageQueue getMessageQueue();
		jboolean hasMessages(android::os::Handler arg0, jobject arg1, jint arg2);
		jboolean hasMessages(android::os::Handler arg0, jobject arg1, __JniBaseClass arg2);
		android::os::Message next();
		void recycle(android::os::Message arg0);
		void release();
	};
} // namespace android::os

