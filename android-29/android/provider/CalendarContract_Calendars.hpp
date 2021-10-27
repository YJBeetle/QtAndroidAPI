#pragma once

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
		static jstring CALENDAR_LOCATION();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject ENTERPRISE_CONTENT_URI();
		static jstring NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring CalendarContract_Calendars::CALENDAR_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CALENDAR_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CalendarContract_Calendars::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CalendarContract_Calendars::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CalendarContract_Calendars::ENTERPRISE_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"ENTERPRISE_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CalendarContract_Calendars::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
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

