#pragma once

#include "../../__JniBaseClass.hpp"
#include "../util/EventListenerProxy.hpp"

namespace java::beans
{
	class PropertyChangeEvent;
}

namespace java::beans
{
	class PropertyChangeListenerProxy : public java::util::EventListenerProxy
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyChangeListenerProxy(const char *className, const char *sig, Ts...agv) : java::util::EventListenerProxy(className, sig, std::forward<Ts>(agv)...) {}
		PropertyChangeListenerProxy(QJniObject obj);
		
		// Constructors
		PropertyChangeListenerProxy(jstring arg0, __JniBaseClass arg1);
		
		// Methods
		jstring getPropertyName();
		void propertyChange(java::beans::PropertyChangeEvent arg0);
	};
} // namespace java::beans

