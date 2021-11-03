#pragma once

#include "../../JObject.hpp"
#include "../util/EventObject.hpp"
#include "./PropertyChangeEvent.hpp"

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
		IndexedPropertyChangeEvent(QAndroidJniObject obj);
		
		// Constructors
		IndexedPropertyChangeEvent(jobject arg0, jstring arg1, jobject arg2, jobject arg3, jint arg4);
		
		// Methods
		jint getIndex();
	};
} // namespace java::beans

