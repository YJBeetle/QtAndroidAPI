#pragma once

#ifndef ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARCACHE
#define ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARCACHE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_CalendarCache : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject KEY_TIMEZONE_INSTANCES();
		static QAndroidJniObject KEY_TIMEZONE_INSTANCES_PREVIOUS();
		static QAndroidJniObject KEY_TIMEZONE_TYPE();
		static QAndroidJniObject TIMEZONE_TYPE_AUTO();
		static QAndroidJniObject TIMEZONE_TYPE_HOME();
		static QAndroidJniObject URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES_PREVIOUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES_PREVIOUS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_CalendarCache::KEY_TIMEZONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_CalendarCache::TIMEZONE_TYPE_AUTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_AUTO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_CalendarCache::TIMEZONE_TYPE_HOME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_HOME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject CalendarContract_CalendarCache::URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void CalendarContract_CalendarCache::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$CalendarCache",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_CalendarCache : public __jni_impl::android::provider::CalendarContract_CalendarCache
	{
	public:
		CalendarContract_CalendarCache(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_CalendarCache()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARCACHE

