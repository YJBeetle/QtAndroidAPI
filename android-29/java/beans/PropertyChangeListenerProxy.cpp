#include "./PropertyChangeEvent.hpp"
#include "./PropertyChangeListenerProxy.hpp"

namespace java::beans
{
	// Fields
	
	// QJniObject forward
	PropertyChangeListenerProxy::PropertyChangeListenerProxy(QJniObject obj) : java::util::EventListenerProxy(obj) {}
	
	// Constructors
	PropertyChangeListenerProxy::PropertyChangeListenerProxy(jstring arg0, JObject arg1)
		: java::util::EventListenerProxy(
			"java.beans.PropertyChangeListenerProxy",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jstring PropertyChangeListenerProxy::getPropertyName()
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
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

