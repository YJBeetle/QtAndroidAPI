#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./CalendarContract_EventDays.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri CalendarContract_EventDays::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$EventDays",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	CalendarContract_EventDays::CalendarContract_EventDays(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject CalendarContract_EventDays::query(android::content::ContentResolver arg0, jint arg1, jint arg2, jarray arg3)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$EventDays",
			"query",
			"(Landroid/content/ContentResolver;II[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::provider

