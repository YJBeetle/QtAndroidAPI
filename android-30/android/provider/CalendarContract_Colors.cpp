#include "../net/Uri.hpp"
#include "./CalendarContract_Colors.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_Colors::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Colors",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	CalendarContract_Colors::CalendarContract_Colors(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

