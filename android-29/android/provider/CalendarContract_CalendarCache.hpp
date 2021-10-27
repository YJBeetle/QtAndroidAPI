#pragma once

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
		static jstring KEY_TIMEZONE_INSTANCES();
		static jstring KEY_TIMEZONE_INSTANCES_PREVIOUS();
		static jstring KEY_TIMEZONE_TYPE();
		static jstring TIMEZONE_TYPE_AUTO();
		static jstring TIMEZONE_TYPE_HOME();
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
	jstring CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES_PREVIOUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES_PREVIOUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_CalendarCache::KEY_TIMEZONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_CalendarCache::TIMEZONE_TYPE_AUTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_AUTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_CalendarCache::TIMEZONE_TYPE_HOME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CalendarContract_CalendarCache::URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"URI",
			"Landroid/net/Uri;"
		);
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

