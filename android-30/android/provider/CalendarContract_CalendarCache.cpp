#include "../net/Uri.hpp"
#include "./CalendarContract_CalendarCache.hpp"

namespace android::provider
{
	// Fields
	jstring CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES_PREVIOUS()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES_PREVIOUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_CalendarCache::KEY_TIMEZONE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_CalendarCache::TIMEZONE_TYPE_AUTO()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_AUTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CalendarContract_CalendarCache::TIMEZONE_TYPE_HOME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CalendarContract_CalendarCache::URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	CalendarContract_CalendarCache::CalendarContract_CalendarCache(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

