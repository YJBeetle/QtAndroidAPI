#pragma once

#include "./PropertyChangeEvent.def.hpp"
#include "../../JString.hpp"
#include "./PropertyChangeListenerProxy.def.hpp"

namespace java::beans
{
	// Fields
	
	// Constructors
	inline PropertyChangeListenerProxy::PropertyChangeListenerProxy(JString arg0, JObject arg1)
		: java::util::EventListenerProxy(
			"java.beans.PropertyChangeListenerProxy",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline JString PropertyChangeListenerProxy::getPropertyName() const
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		);
	}
	inline void PropertyChangeListenerProxy::propertyChange(java::beans::PropertyChangeEvent arg0) const
	{
		callMethod<void>(
			"propertyChange",
			"(Ljava/beans/PropertyChangeEvent;)V",
			arg0.object()
		);
	}
} // namespace java::beans

// Base class headers
#include "../util/EventListenerProxy.hpp"

