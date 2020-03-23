#pragma once

#ifndef ANDROID_PROVIDER_CALENDARCONTRACT_REMINDERS
#define ANDROID_PROVIDER_CALENDARCONTRACT_REMINDERS

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
	class CalendarContract_Reminders : public __JniBaseClass
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
	QAndroidJniObject CalendarContract_Reminders::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Reminders",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void CalendarContract_Reminders::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$Reminders",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CalendarContract_Reminders::query(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$Reminders",
			"query",
			"(Landroid/content/ContentResolver;J[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_Reminders : public __jni_impl::android::provider::CalendarContract_Reminders
	{
	public:
		CalendarContract_Reminders(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_Reminders()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALENDARCONTRACT_REMINDERS

