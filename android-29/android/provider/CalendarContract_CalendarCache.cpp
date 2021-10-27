#include "../net/Uri.hpp"
#include "./CalendarContract_CalendarCache.hpp"

namespace android::provider
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
	
	CalendarContract_CalendarCache::CalendarContract_CalendarCache(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

