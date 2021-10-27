#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./CalendarContract.hpp"

namespace android::provider
{
	// Fields
	jstring CalendarContract::ACCOUNT_TYPE_LOCAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"ACCOUNT_TYPE_LOCAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract::ACTION_EVENT_REMINDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_EVENT_REMINDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract::ACTION_HANDLE_CUSTOM_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_HANDLE_CUSTOM_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract::ACTION_VIEW_MANAGED_PROFILE_CALENDAR_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_VIEW_MANAGED_PROFILE_CALENDAR_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract::CALLER_IS_SYNCADAPTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CalendarContract::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CalendarContract::EXTRA_CUSTOM_APP_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_CUSTOM_APP_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract::EXTRA_EVENT_ALL_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_ALL_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract::EXTRA_EVENT_BEGIN_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_BEGIN_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract::EXTRA_EVENT_END_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_END_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract::EXTRA_EVENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	CalendarContract::CalendarContract(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean CalendarContract::startViewCalendarEventInManagedProfile(android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jboolean arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.CalendarContract",
			"startViewCalendarEventInManagedProfile",
			"(Landroid/content/Context;JJJZI)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
} // namespace android::provider

