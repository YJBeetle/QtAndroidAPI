#include "./PropertyChangeEvent.hpp"
#include "../../JString.hpp"
#include "./PropertyChangeListenerProxy.hpp"

namespace java::beans
{
	// Fields
	
	// QAndroidJniObject forward
	PropertyChangeListenerProxy::PropertyChangeListenerProxy(QAndroidJniObject obj) : java::util::EventListenerProxy(obj) {}
	
	// Constructors
	PropertyChangeListenerProxy::PropertyChangeListenerProxy(JString arg0, JObject arg1)
		: java::util::EventListenerProxy(
			"java.beans.PropertyChangeListenerProxy",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	JString PropertyChangeListenerProxy::getPropertyName()
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		);
	}
	void PropertyChangeListenerProxy::propertyChange(java::beans::PropertyChangeEvent arg0)
	{
		callMethod<void>(
			"propertyChange",
			"(Ljava/beans/PropertyChangeEvent;)V",
			arg0.object()
		);
	}
} // namespace java::beans

