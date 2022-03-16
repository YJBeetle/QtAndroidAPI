#include "./EventListenerProxy.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	EventListenerProxy::EventListenerProxy(JObject arg0)
		: JObject(
			"java.util.EventListenerProxy",
			"(Ljava/util/EventListener;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject EventListenerProxy::getListener() const
	{
		return callObjectMethod(
			"getListener",
			"()Ljava/util/EventListener;"
		);
	}
} // namespace java::util

