#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TimeZoneFormat_TimeType.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::TimeZoneFormat_TimeType TimeZoneFormat_TimeType::DAYLIGHT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$TimeType",
			"DAYLIGHT",
			"Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
	inline android::icu::text::TimeZoneFormat_TimeType TimeZoneFormat_TimeType::STANDARD()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$TimeType",
			"STANDARD",
			"Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
	inline android::icu::text::TimeZoneFormat_TimeType TimeZoneFormat_TimeType::UNKNOWN()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$TimeType",
			"UNKNOWN",
			"Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::TimeZoneFormat_TimeType TimeZoneFormat_TimeType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$TimeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$TimeType;",
			arg0.object<jstring>()
		);
	}
	inline JArray TimeZoneFormat_TimeType::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$TimeType",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
