#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./CalendarContract_Attendees.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_Attendees::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Attendees",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	CalendarContract_Attendees::CalendarContract_Attendees(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass CalendarContract_Attendees::query(android::content::ContentResolver arg0, jlong arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$Attendees",
			"query",
			"(Landroid/content/ContentResolver;J[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::provider

