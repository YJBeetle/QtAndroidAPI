#include "../net/Uri.hpp"
#include "./CalendarContract_CalendarAlerts.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_CalendarAlerts::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri CalendarContract_CalendarAlerts::CONTENT_URI_BY_INSTANCE()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI_BY_INSTANCE",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

