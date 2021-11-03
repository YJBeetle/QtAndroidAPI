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
	
	// QJniObject forward
	CalendarContract_Attendees::CalendarContract_Attendees(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject CalendarContract_Attendees::query(android::content::ContentResolver arg0, jlong arg1, jarray arg2)
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

