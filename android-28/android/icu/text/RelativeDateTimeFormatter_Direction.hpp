#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./RelativeDateTimeFormatter_Direction.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::LAST()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"LAST",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::LAST_2()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"LAST_2",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::NEXT()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"NEXT",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::NEXT_2()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"NEXT_2",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::PLAIN()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"PLAIN",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::THIS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"THIS",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Direction;",
			arg0.object<jstring>()
		);
	}
	inline JArray RelativeDateTimeFormatter_Direction::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

