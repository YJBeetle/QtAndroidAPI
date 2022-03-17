#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NumberFormat_Field.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::CURRENCY()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"CURRENCY",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::DECIMAL_SEPARATOR()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"DECIMAL_SEPARATOR",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::EXPONENT()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::EXPONENT_SIGN()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT_SIGN",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::EXPONENT_SYMBOL()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT_SYMBOL",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::FRACTION()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"FRACTION",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::GROUPING_SEPARATOR()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"GROUPING_SEPARATOR",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::INTEGER()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"INTEGER",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::PERCENT()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"PERCENT",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::PERMILLE()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"PERMILLE",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	inline android::icu::text::NumberFormat_Field NumberFormat_Field::SIGN()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"SIGN",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/AttributedCharacterIterator_Attribute.hpp"
#include "../../../java/text/Format_Field.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
