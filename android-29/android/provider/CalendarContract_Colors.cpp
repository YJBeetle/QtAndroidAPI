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
	
	// Constructors
	
	// Methods
} // namespace android::provider

