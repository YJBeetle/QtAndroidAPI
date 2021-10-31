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
	
	// QAndroidJniObject forward
	CalendarContract_Colors::CalendarContract_Colors(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

