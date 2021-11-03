#pragma once

#include "../../JObject.hpp"

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
class JObject;

namespace android::os
{
	class TestLooperManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TestLooperManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TestLooperManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void execute(android::os::Message arg0) const;
		android::os::MessageQueue getMessageQueue() const;
		jboolean hasMessages(android::os::Handler arg0, JObject arg1, jint arg2) const;
		jboolean hasMessages(android::os::Handler arg0, JObject arg1, JObject arg2) const;
		android::os::Message next() const;
		void recycle(android::os::Message arg0) const;
		void release() const;
	};
} // namespace android::os

