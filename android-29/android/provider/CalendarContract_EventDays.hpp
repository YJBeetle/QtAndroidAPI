#pragma once

#ifndef ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYS
#define ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_EventDays : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, jint arg1, jint arg2, jarray arg3);
	};
} // namespace __jni_impl::android::provider

#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
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
	
	// Constructors
	void CalendarContract_EventDays::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$EventDays",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CalendarContract_EventDays::query(__jni_impl::android::content::ContentResolver arg0, jint arg1, jint arg2, jarray arg3)
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
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_EventDays : public __jni_impl::android::provider::CalendarContract_EventDays
	{
	public:
		CalendarContract_EventDays(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_EventDays()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYS

