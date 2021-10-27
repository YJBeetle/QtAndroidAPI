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
		
		PropertyChangeListenerProxy(QAndroidJniObject obj);
		// Constructors
		PropertyChangeListenerProxy(jstring &arg0, __JniBaseClass &arg1);
		PropertyChangeListenerProxy(const QString &arg0, __JniBaseClass &arg1);
		PropertyChangeListenerProxy() = default;
		
		// Methods
		jstring getPropertyName();
		void propertyChange(java::beans::PropertyChangeEvent arg0);
	};
} // namespace java::beans

