#pragma once

#include "../../JArray.hpp"
#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "./CalendarContract_Attendees.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri CalendarContract_Attendees::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$Attendees",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject CalendarContract_Attendees::query(android::content::ContentResolver arg0, jlong arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$Attendees",
			"query",
			"(Landroid/content/ContentResolver;J[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2.object<jarray>()
		);
	}
} // namespace android::provider

// Base class headers

