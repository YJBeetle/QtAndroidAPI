#pragma once

#include "../net/Uri.def.hpp"
#include "./CalendarContract_Events.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri CalendarContract_Events::CONTENT_EXCEPTION_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Events",
			"CONTENT_EXCEPTION_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri CalendarContract_Events::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Events",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri CalendarContract_Events::ENTERPRISE_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Events",
			"ENTERPRISE_CONTENT_URI",
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
