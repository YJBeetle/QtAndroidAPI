#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./CalendarContract_EventDays.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_EventDays::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$EventDays",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	CalendarContract_EventDays::CalendarContract_EventDays(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CalendarContract_EventDays::query(android::content::ContentResolver arg0, jint arg1, jint arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$EventDays",
			"query",
			"(Landroid/content/ContentResolver;II[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::provider

