#pragma once

#ifndef ANDROID_PROVIDER_CALENDARCONTRACT_INSTANCES
#define ANDROID_PROVIDER_CALENDARCONTRACT_INSTANCES

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
	class CalendarContract_Instances : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BEGIN();
		static QAndroidJniObject CONTENT_BY_DAY_URI();
		static QAndroidJniObject CONTENT_SEARCH_BY_DAY_URI();
		static QAndroidJniObject CONTENT_SEARCH_URI();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject END();
		static QAndroidJniObject END_DAY();
		static QAndroidJniObject END_MINUTE();
		static QAndroidJniObject ENTERPRISE_CONTENT_BY_DAY_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_SEARCH_BY_DAY_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_SEARCH_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_URI();
		static QAndroidJniObject EVENT_ID();
		static QAndroidJniObject START_DAY();
		static QAndroidJniObject START_MINUTE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3);
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3, jstring arg4);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_Instances::BEGIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"BEGIN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_Instances::CONTENT_BY_DAY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"CONTENT_BY_DAY_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Instances::CONTENT_SEARCH_BY_DAY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"CONTENT_SEARCH_BY_DAY_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Instances::CONTENT_SEARCH_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"CONTENT_SEARCH_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Instances::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Instances::END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"END",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_Instances::END_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"END_DAY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_Instances::END_MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"END_MINUTE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_Instances::ENTERPRISE_CONTENT_BY_DAY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"ENTERPRISE_CONTENT_BY_DAY_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Instances::ENTERPRISE_CONTENT_SEARCH_BY_DAY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"ENTERPRISE_CONTENT_SEARCH_BY_DAY_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Instances::ENTERPRISE_CONTENT_SEARCH_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"ENTERPRISE_CONTENT_SEARCH_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Instances::ENTERPRISE_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"ENTERPRISE_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject CalendarContract_Instances::EVENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"EVENT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_Instances::START_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"START_DAY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_Instances::START_MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Instances",
			"START_MINUTE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void CalendarContract_Instances::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$Instances",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CalendarContract_Instances::query(__jni_impl::android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$Instances",
			"query",
			"(Landroid/content/ContentResolver;[Ljava/lang/String;JJ)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject CalendarContract_Instances::query(__jni_impl::android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3, jstring arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$Instances",
			"query",
			"(Landroid/content/ContentResolver;[Ljava/lang/String;JJLjava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_Instances : public __jni_impl::android::provider::CalendarContract_Instances
	{
	public:
		CalendarContract_Instances(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_Instances()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALENDARCONTRACT_INSTANCES

