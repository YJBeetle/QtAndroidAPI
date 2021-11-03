#pragma once

#include "../util/EventObject.hpp"

class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace java::beans
{
	class PropertyChangeEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PropertyChangeEvent(const char *className, const char *sig, Ts...agv) : java::util::EventObject(className, sig, std::forward<Ts>(agv)...) {}
		PropertyChangeEvent(QAndroidJniObject obj);
		
		// Constructors
		PropertyChangeEvent(JObject arg0, JString arg1, JObject arg2, JObject arg3);
		
		// Methods
		JObject getNewValue();
		JObject getOldValue();
		JObject getPropagationId();
		JString getPropertyName();
		void setPropagationId(JObject arg0);
		JString toString();
	};
} // namespace java::beans

