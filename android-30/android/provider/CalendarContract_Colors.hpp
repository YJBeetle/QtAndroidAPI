#pragma once

#include "../net/Uri.def.hpp"
#include "./CalendarContract_Colors.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri CalendarContract_Colors::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Colors",
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
