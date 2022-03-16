#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./MeasureFormat_FormatWidth.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::NARROW()
	{
		return getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"NARROW",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	inline android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::NUMERIC()
	{
		return getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"NUMERIC",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	inline android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"SHORT",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	inline android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::WIDE()
	{
		return getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"WIDE",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat$FormatWidth",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MeasureFormat$FormatWidth;",
			arg0.object<jstring>()
		);
	}
	inline JArray MeasureFormat_FormatWidth::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat$FormatWidth",
			"values",
			"()[Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

