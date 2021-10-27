#include "../net/Uri.hpp"
#include "./CalendarContract_Colors.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_Colors::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Colors",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	CalendarContract_Colors::CalendarContract_Colors(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

