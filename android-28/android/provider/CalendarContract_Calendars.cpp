#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./CalendarContract_Calendars.hpp"

namespace android::provider
{
	// Fields
	JString CalendarContract_Calendars::CALENDAR_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CALENDAR_LOCATION",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri CalendarContract_Calendars::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString CalendarContract_Calendars::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract_Calendars::NAME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	CalendarContract_Calendars::CalendarContract_Calendars(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

