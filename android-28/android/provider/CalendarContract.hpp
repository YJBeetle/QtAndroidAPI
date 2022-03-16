#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./CalendarContract.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CalendarContract::ACCOUNT_TYPE_LOCAL()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"ACCOUNT_TYPE_LOCAL",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract::ACTION_EVENT_REMINDER()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_EVENT_REMINDER",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract::ACTION_HANDLE_CUSTOM_EVENT()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"ACTION_HANDLE_CUSTOM_EVENT",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract::CALLER_IS_SYNCADAPTER()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"CALLER_IS_SYNCADAPTER",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri CalendarContract::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString CalendarContract::EXTRA_CUSTOM_APP_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_CUSTOM_APP_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract::EXTRA_EVENT_ALL_DAY()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_ALL_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract::EXTRA_EVENT_BEGIN_TIME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_BEGIN_TIME",
			"Ljava/lang/String;"
		);
	}
	inline JString CalendarContract::EXTRA_EVENT_END_TIME()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract",
			"EXTRA_EVENT_END_TIME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

