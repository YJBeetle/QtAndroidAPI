#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./CalendarContract_Calendars.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CalendarContract_Calendars::CALENDAR_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CALENDAR_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri CalendarContract_Calendars::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString CalendarContract_Calendars::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract_Calendars::NAME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Calendars",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
