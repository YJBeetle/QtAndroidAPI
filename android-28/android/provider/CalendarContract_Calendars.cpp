#include "../net/Uri.hpp"
#include "./CalendarContract_Calendars.hpp"

namespace android::provider
{
	// Fields
	jstring CalendarContract_Calendars::CALENDAR_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CALENDAR_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CalendarContract_Calendars::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CalendarContract_Calendars::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_Calendars::NAME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	CalendarContract_Calendars::CalendarContract_Calendars(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

