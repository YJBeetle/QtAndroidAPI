#include "../net/Uri.hpp"
#include "./CalendarContract_CalendarAlerts.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_CalendarAlerts::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject CalendarContract_CalendarAlerts::CONTENT_URI_BY_INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI_BY_INSTANCE",
			"Landroid/net/Uri;"
		);
	}
	
	CalendarContract_CalendarAlerts::CalendarContract_CalendarAlerts(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

