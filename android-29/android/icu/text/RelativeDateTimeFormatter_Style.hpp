#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./RelativeDateTimeFormatter_Style.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter_Style::LONG()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"LONG",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter_Style::NARROW()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"NARROW",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter_Style::SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"SHORT",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter_Style::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Style;",
			arg0.object<jstring>()
		);
	}
	inline JArray RelativeDateTimeFormatter_Style::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
