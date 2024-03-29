#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TimeZoneNames_NameType.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::EXEMPLAR_LOCATION()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"EXEMPLAR_LOCATION",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	inline android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::LONG_DAYLIGHT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"LONG_DAYLIGHT",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	inline android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::LONG_GENERIC()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"LONG_GENERIC",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	inline android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::LONG_STANDARD()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"LONG_STANDARD",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	inline android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::SHORT_DAYLIGHT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"SHORT_DAYLIGHT",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	inline android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::SHORT_GENERIC()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"SHORT_GENERIC",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	inline android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::SHORT_STANDARD()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"SHORT_STANDARD",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneNames$NameType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneNames$NameType;",
			arg0.object<jstring>()
		);
	}
	inline JArray TimeZoneNames_NameType::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneNames$NameType",
			"values",
			"()[Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
