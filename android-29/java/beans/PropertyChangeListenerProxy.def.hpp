#pragma once

#include "../util/EventListenerProxy.def.hpp"

namespace java::beans
{
	class PropertyChangeEvent;
}
class JString;

namespace java::beans
{
	class PropertyChangeListenerProxy : public java::util::EventListenerProxy
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyChangeListenerProxy(const char *className, const char *sig, Ts...agv) : java::util::EventListenerProxy(className, sig, std::forward<Ts>(agv)...) {}
		PropertyChangeListenerProxy(QJniObject obj) : java::util::EventListenerProxy(obj) {}
		
		// Constructors
		PropertyChangeListenerProxy(JString arg0, JObject arg1);
		
		// Methods
		JString getPropertyName() const;
		void propertyChange(java::beans::PropertyChangeEvent arg0) const;
	};
} // namespace java::beans

