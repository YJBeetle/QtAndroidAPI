#pragma once

#ifndef ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARS
#define ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_Calendars : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CALENDAR_LOCATION();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		static QAndroidJniObject ENTERPRISE_CONTENT_URI();
		static QAndroidJniObject NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_Calendars::CALENDAR_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CALENDAR_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_Calendars::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Calendars::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_Calendars::ENTERPRISE_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"ENTERPRISE_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Calendars::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"NAME",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void CalendarContract_Calendars::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$Calendars",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_Calendars : public __jni_impl::android::provider::CalendarContract_Calendars
	{
	public:
		CalendarContract_Calendars(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_Calendars()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARS

