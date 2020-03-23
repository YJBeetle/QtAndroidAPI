#pragma once

#ifndef ANDROID_PROVIDER_CALENDARCONTRACT
#define ANDROID_PROVIDER_CALENDARCONTRACT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::provider
{
	class CalendarContract : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACCOUNT_TYPE_LOCAL();
		static QAndroidJniObject ACTION_EVENT_REMINDER();
		static QAndroidJniObject ACTION_HANDLE_CUSTOM_EVENT();
		static QAndroidJniObject ACTION_VIEW_MANAGED_PROFILE_CALENDAR_EVENT();
		static QAndroidJniObject AUTHORITY();
		static QAndroidJniObject CALLER_IS_SYNCADAPTER();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject EXTRA_CUSTOM_APP_URI();
		static QAndroidJniObject EXTRA_EVENT_ALL_DAY();
		static QAndroidJniObject EXTRA_EVENT_BEGIN_TIME();
		static QAndroidJniObject EXTRA_EVENT_END_TIME();
		static QAndroidJniObject EXTRA_EVENT_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean startViewCalendarEventInManagedProfile(__jni_impl::android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jboolean arg4, jint arg5);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract::ACCOUNT_TYPE_LOCAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"ACCOUNT_TYPE_LOCAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::ACTION_EVENT_REMINDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_EVENT_REMINDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::ACTION_HANDLE_CUSTOM_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_HANDLE_CUSTOM_EVENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::ACTION_VIEW_MANAGED_PROFILE_CALENDAR_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_VIEW_MANAGED_PROFILE_CALENDAR_EVENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"AUTHORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::CALLER_IS_SYNCADAPTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract::EXTRA_CUSTOM_APP_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_CUSTOM_APP_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::EXTRA_EVENT_ALL_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_ALL_DAY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::EXTRA_EVENT_BEGIN_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_BEGIN_TIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::EXTRA_EVENT_END_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_END_TIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract::EXTRA_EVENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_ID",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void CalendarContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract",
			"(V)V");
	}
	
	// Methods
	jboolean CalendarContract::startViewCalendarEventInManagedProfile(__jni_impl::android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jboolean arg4, jint arg5)
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
			arg5);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract : public __jni_impl::android::provider::CalendarContract
	{
	public:
		CalendarContract(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALENDARCONTRACT

