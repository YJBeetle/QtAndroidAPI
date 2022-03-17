#pragma once

#include "../net/Uri.def.hpp"
#include "./CalendarContract_SyncState.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri CalendarContract_SyncState::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$SyncState",
			"CONTENT_URI",
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
