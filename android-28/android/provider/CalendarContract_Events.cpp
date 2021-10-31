#include "../net/Uri.hpp"
#include "./CalendarContract_Events.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_Events::CONTENT_EXCEPTION_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Events",
			"CONTENT_EXCEPTION_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri CalendarContract_Events::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Events",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	CalendarContract_Events::CalendarContract_Events(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

