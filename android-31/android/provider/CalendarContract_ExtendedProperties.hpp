#pragma once

#include "../net/Uri.def.hpp"
#include "./CalendarContract_ExtendedProperties.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri CalendarContract_ExtendedProperties::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$ExtendedProperties",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

