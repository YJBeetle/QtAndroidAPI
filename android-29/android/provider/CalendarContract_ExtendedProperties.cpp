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
	
	CalendarContract_ExtendedProperties::CalendarContract_ExtendedProperties(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

