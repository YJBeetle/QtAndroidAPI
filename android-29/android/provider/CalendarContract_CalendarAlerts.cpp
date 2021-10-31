#include "../net/Uri.hpp"
#include "./CalendarContract_CalendarAlerts.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_CalendarAlerts::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri CalendarContract_CalendarAlerts::CONTENT_URI_BY_INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI_BY_INSTANCE",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	CalendarContract_CalendarAlerts::CalendarContract_CalendarAlerts(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

