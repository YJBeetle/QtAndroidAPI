#pragma once

#include "../net/Uri.def.hpp"
#include "./CalendarContract_CalendarAlerts.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri CalendarContract_CalendarAlerts::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri CalendarContract_CalendarAlerts::CONTENT_URI_BY_INSTANCE()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI_BY_INSTANCE",
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
