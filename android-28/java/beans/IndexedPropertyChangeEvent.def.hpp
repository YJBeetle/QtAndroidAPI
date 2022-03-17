#pragma once

#include "./PropertyChangeEvent.def.hpp"

class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace java::beans
{
	class IndexedPropertyChangeEvent : public java::beans::PropertyChangeEvent
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IndexedPropertyChangeEvent(const char *className, const char *sig, Ts...agv) : java::beans::PropertyChangeEvent(className, sig, std::forward<Ts>(agv)...) {}
		IndexedPropertyChangeEvent(QAndroidJniObject obj) : java::beans::PropertyChangeEvent(obj) {}
		
		// Constructors
		IndexedPropertyChangeEvent(JObject arg0, JString arg1, JObject arg2, JObject arg3, jint arg4);
		
		// Methods
		jint getIndex() const;
	};
} // namespace java::beans

