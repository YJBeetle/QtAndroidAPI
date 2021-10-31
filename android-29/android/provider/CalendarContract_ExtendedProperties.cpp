#include "../net/Uri.hpp"
#include "./CalendarContract_ExtendedProperties.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_ExtendedProperties::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$ExtendedProperties",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	CalendarContract_ExtendedProperties::CalendarContract_ExtendedProperties(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

