#pragma once

#include "../os/Handler.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsyncQueryHandler_WorkerHandler(const char *className, const char *sig, Ts...agv) : android::os::Handler(className, sig, std::forward<Ts>(agv)...) {}
		AsyncQueryHandler_WorkerHandler(QAndroidJniObject obj) : android::os::Handler(obj) {}
		
		// Constructors
		AsyncQueryHandler_WorkerHandler(android::content::AsyncQueryHandler arg0, android::os::Looper arg1);
		
		// Methods
		void handleMessage(android::os::Message arg0) const;
	};
} // namespace android::content

