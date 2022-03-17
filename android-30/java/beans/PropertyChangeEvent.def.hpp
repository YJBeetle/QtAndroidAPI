#pragma once

#include "../util/EventObject.def.hpp"

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
		PropertyChangeEvent(QAndroidJniObject obj) : java::util::EventObject(obj) {}
		
		// Constructors
		PropertyChangeEvent(JObject arg0, JString arg1, JObject arg2, JObject arg3);
		
		// Methods
		JObject getNewValue() const;
		JObject getOldValue() const;
		JObject getPropagationId() const;
		JString getPropertyName() const;
		void setPropagationId(JObject arg0) const;
		JString toString() const;
	};
} // namespace java::beans

