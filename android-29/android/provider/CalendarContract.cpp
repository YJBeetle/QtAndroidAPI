#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./CalendarContract.hpp"

namespace android::provider
{
	// Fields
	JString CalendarContract::ACCOUNT_TYPE_LOCAL()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"ACCOUNT_TYPE_LOCAL",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract::ACTION_EVENT_REMINDER()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_EVENT_REMINDER",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract::ACTION_HANDLE_CUSTOM_EVENT()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_HANDLE_CUSTOM_EVENT",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract::ACTION_VIEW_MANAGED_PROFILE_CALENDAR_EVENT()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_VIEW_MANAGED_PROFILE_CALENDAR_EVENT",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract::CALLER_IS_SYNCADAPTER()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri CalendarContract::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString CalendarContract::EXTRA_CUSTOM_APP_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_CUSTOM_APP_URI",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract::EXTRA_EVENT_ALL_DAY()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_ALL_DAY",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract::EXTRA_EVENT_BEGIN_TIME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_BEGIN_TIME",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract::EXTRA_EVENT_END_TIME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_END_TIME",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract::EXTRA_EVENT_ID()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	CalendarContract::CalendarContract(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CalendarContract::startViewCalendarEventInManagedProfile(android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jboolean arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"android.provider.CalendarContract",
			"startViewCalendarEventInManagedProfile",
			"(Landroid/content/Context;JJJZI)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
} // namespace android::provider

