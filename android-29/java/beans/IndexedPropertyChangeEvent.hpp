#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		IndexedPropertyChangeEvent(QAndroidJniObject obj);
		// Constructors
		IndexedPropertyChangeEvent(jobject arg0, jstring arg1, jobject arg2, jobject arg3, jint arg4);
		IndexedPropertyChangeEvent() = default;
		
		// Methods
		jint getIndex();
	};
} // namespace java::beans

