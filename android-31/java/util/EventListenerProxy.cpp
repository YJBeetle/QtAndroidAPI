#include "./EventListenerProxy.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	EventListenerProxy::EventListenerProxy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EventListenerProxy::EventListenerProxy(JObject arg0)
		: JObject(
			"java.util.EventListenerProxy",
			"(Ljava/util/EventListener;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject EventListenerProxy::getListener()
	{
		return callObjectMethod(
			"getListener",
			"()Ljava/util/EventListener;"
		);
	}
} // namespace java::util

