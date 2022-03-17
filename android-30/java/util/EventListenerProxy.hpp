#pragma once

#include "./EventListenerProxy.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline EventListenerProxy::EventListenerProxy(JObject arg0)
		: JObject(
			"java.util.EventListenerProxy",
			"(Ljava/util/EventListener;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject EventListenerProxy::getListener() const
	{
		return callObjectMethod(
			"getListener",
			"()Ljava/util/EventListener;"
		);
	}
} // namespace java::util

// Base class headers

