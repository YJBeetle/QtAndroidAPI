#include "./EventListenerProxy.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	EventListenerProxy::EventListenerProxy(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EventListenerProxy::EventListenerProxy(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.util.EventListenerProxy",
			"(Ljava/util/EventListener;)V",
			arg0.object()
		) {}
	
	// Methods
	__JniBaseClass EventListenerProxy::getListener()
	{
		return callObjectMethod(
			"getListener",
			"()Ljava/util/EventListener;"
		);
	}
} // namespace java::util

