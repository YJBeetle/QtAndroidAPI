#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_Calendars : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CALENDAR_LOCATION();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject ENTERPRISE_CONTENT_URI();
		static jstring NAME();
		
		CalendarContract_Calendars(QAndroidJniObject obj);
		// Constructors
		CalendarContract_Calendars() = default;
		
		// Methods
	};
} // namespace android::provider

