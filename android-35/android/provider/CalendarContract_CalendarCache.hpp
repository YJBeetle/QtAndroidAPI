#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./CalendarContract_CalendarCache.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract_CalendarCache::KEY_TIMEZONE_INSTANCES_PREVIOUS()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_INSTANCES_PREVIOUS",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract_CalendarCache::KEY_TIMEZONE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"KEY_TIMEZONE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract_CalendarCache::TIMEZONE_TYPE_AUTO()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_AUTO",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract_CalendarCache::TIMEZONE_TYPE_HOME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarCache",
			"TIMEZONE_TYPE_HOME",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri CalendarContract_CalendarCache::URI()
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
