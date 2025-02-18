#pragma once

#include "../../JArray.hpp"
#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "./CalendarContract_EventDays.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri CalendarContract_EventDays::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CalendarContract$EventDays",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject CalendarContract_EventDays::query(android::content::ContentResolver arg0, jint arg1, jint arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"android.provider.CalendarContract$EventDays",
			"query",
			"(Landroid/content/ContentResolver;II[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jarray>()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
