#pragma once

#include "../content/ContentProviderClient.def.hpp"
#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "./CalendarContract_EventsEntity.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri CalendarContract_EventsEntity::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$EventsEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject CalendarContract_EventsEntity::newEntityIterator(JObject arg0, android::content::ContentProviderClient arg1)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$EventsEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;Landroid/content/ContentProviderClient;)Landroid/content/EntityIterator;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject CalendarContract_EventsEntity::newEntityIterator(JObject arg0, android::content::ContentResolver arg1)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$EventsEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;Landroid/content/ContentResolver;)Landroid/content/EntityIterator;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::provider

// Base class headers

