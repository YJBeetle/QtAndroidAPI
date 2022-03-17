#pragma once

#include "../net/Uri.def.hpp"
#include "./CalendarContract_CalendarEntity.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri CalendarContract_CalendarEntity::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$CalendarEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject CalendarContract_CalendarEntity::newEntityIterator(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$CalendarEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

