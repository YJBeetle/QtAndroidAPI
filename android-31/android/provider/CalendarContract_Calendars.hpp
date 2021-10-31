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
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static android::net::Uri ENTERPRISE_CONTENT_URI();
		static jstring NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_Calendars(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_Calendars(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

