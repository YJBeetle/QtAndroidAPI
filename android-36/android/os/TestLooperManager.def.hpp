#pragma once

#include "../../JObject.hpp"

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
namespace java::lang
{
	class Long;
}
class JObject;

namespace android::os
{
	class TestLooperManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TestLooperManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TestLooperManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void execute(android::os::Message arg0) const;
		android::os::MessageQueue getMessageQueue() const;
		jboolean hasMessages(android::os::Handler arg0, JObject arg1, jint arg2) const;
		jboolean hasMessages(android::os::Handler arg0, JObject arg1, JObject arg2) const;
		jboolean isBlockedOnSyncBarrier() const;
		android::os::Message next() const;
		java::lang::Long peekWhen() const;
		android::os::Message poll() const;
		void recycle(android::os::Message arg0) const;
		void release() const;
	};
} // namespace android::os

