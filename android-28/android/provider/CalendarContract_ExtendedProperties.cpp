#include "../net/Uri.hpp"
#include "./CalendarContract_ExtendedProperties.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_ExtendedProperties::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$ExtendedProperties",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	CalendarContract_ExtendedProperties::CalendarContract_ExtendedProperties(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

