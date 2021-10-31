#include "./NumberFormat_Field.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::NumberFormat_Field NumberFormat_Field::COMPACT()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"COMPACT",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::CURRENCY()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"CURRENCY",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::DECIMAL_SEPARATOR()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"DECIMAL_SEPARATOR",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::EXPONENT()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::EXPONENT_SIGN()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT_SIGN",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::EXPONENT_SYMBOL()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT_SYMBOL",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::FRACTION()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"FRACTION",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::GROUPING_SEPARATOR()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"GROUPING_SEPARATOR",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::INTEGER()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"INTEGER",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::MEASURE_UNIT()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"MEASURE_UNIT",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::PERCENT()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"PERCENT",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::PERMILLE()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"PERMILLE",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	android::icu::text::NumberFormat_Field NumberFormat_Field::SIGN()
	{
		return getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"SIGN",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	
	// QJniObject forward
	NumberFormat_Field::NumberFormat_Field(QJniObject obj) : java::text::Format_Field(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::icu::text

