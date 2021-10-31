#include "../net/Uri.hpp"
#include "./CalendarContract_Calendars.hpp"

namespace android::provider
{
	// Fields
	jstring CalendarContract_Calendars::CALENDAR_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CALENDAR_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CalendarContract_Calendars::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CalendarContract_Calendars::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CalendarContract_Calendars::ENTERPRISE_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"ENTERPRISE_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CalendarContract_Calendars::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	CalendarContract_Calendars::CalendarContract_Calendars(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

