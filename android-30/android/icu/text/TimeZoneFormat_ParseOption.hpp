#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TimeZoneFormat_ParseOption.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::TimeZoneFormat_ParseOption TimeZoneFormat_ParseOption::ALL_STYLES()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"ALL_STYLES",
			"Landroid/icu/text/TimeZoneFormat$ParseOption;"
		);
	}
	inline android::icu::text::TimeZoneFormat_ParseOption TimeZoneFormat_ParseOption::TZ_DATABASE_ABBREVIATIONS()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"TZ_DATABASE_ABBREVIATIONS",
			"Landroid/icu/text/TimeZoneFormat$ParseOption;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::TimeZoneFormat_ParseOption TimeZoneFormat_ParseOption::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$ParseOption;",
			arg0.object<jstring>()
		);
	}
	inline JArray TimeZoneFormat_ParseOption::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$ParseOption;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
