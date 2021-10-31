#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./CalendarContract_Instances.hpp"

namespace android::provider
{
	// Fields
	jstring CalendarContract_Instances::BEGIN()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"BEGIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CalendarContract_Instances::CONTENT_BY_DAY_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"CONTENT_BY_DAY_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri CalendarContract_Instances::CONTENT_SEARCH_BY_DAY_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"CONTENT_SEARCH_BY_DAY_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri CalendarContract_Instances::CONTENT_SEARCH_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"CONTENT_SEARCH_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri CalendarContract_Instances::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CalendarContract_Instances::END()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"END",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_Instances::END_DAY()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"END_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_Instances::END_MINUTE()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"END_MINUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_Instances::EVENT_ID()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"EVENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_Instances::START_DAY()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"START_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_Instances::START_MINUTE()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"START_MINUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	CalendarContract_Instances::CalendarContract_Instances(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass CalendarContract_Instances::query(android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$Instances",
			"query",
			"(Landroid/content/ContentResolver;[Ljava/lang/String;JJ)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	__JniBaseClass CalendarContract_Instances::query(android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3, jstring arg4)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$Instances",
			"query",
			"(Landroid/content/ContentResolver;[Ljava/lang/String;JJLjava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::provider

