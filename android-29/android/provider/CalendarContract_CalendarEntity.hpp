#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_CalendarEntity : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		CalendarContract_CalendarEntity(QAndroidJniObject obj);
		// Constructors
		CalendarContract_CalendarEntity() = default;
		
		// Methods
		static QAndroidJniObject newEntityIterator(__JniBaseClass arg0);
	};
} // namespace android::provider

