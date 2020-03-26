#pragma once

#ifndef ANDROID_PROVIDER_CALENDARCONTRACT_ATTENDEES
#define ANDROID_PROVIDER_CALENDARCONTRACT_ATTENDEES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_Attendees : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jarray arg2);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_Attendees::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Attendees",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void CalendarContract_Attendees::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$Attendees",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CalendarContract_Attendees::query(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$Attendees",
			"query",
			"(Landroid/content/ContentResolver;J[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_Attendees : public __jni_impl::android::provider::CalendarContract_Attendees
	{
	public:
		CalendarContract_Attendees(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_Attendees()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALENDARCONTRACT_ATTENDEES

