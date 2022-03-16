#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./CalendarContract_CalendarCache.hpp"

namespace android::provider
{
	// Fields
	JString CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES_PREVIOUS()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES_PREVIOUS",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract_CalendarCache::KEY_TIMEZONE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract_CalendarCache::TIMEZONE_TYPE_AUTO()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_AUTO",
			"Ljava/lang/String;"
		);
	}
	JString CalendarContract_CalendarCache::TIMEZONE_TYPE_HOME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_HOME",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri CalendarContract_CalendarCache::URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

