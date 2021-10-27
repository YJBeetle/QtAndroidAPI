#include "./NumberFormat_Field.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject NumberFormat_Field::CURRENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"CURRENCY",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::DECIMAL_SEPARATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"DECIMAL_SEPARATOR",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::EXPONENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::EXPONENT_SIGN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT_SIGN",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::EXPONENT_SYMBOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT_SYMBOL",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::FRACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"FRACTION",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::GROUPING_SEPARATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"GROUPING_SEPARATOR",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::INTEGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"INTEGER",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::PERCENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"PERCENT",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::PERMILLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"PERMILLE",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::SIGN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"SIGN",
			"Landroid/icu/text/NumberFormat$Field;"
		);
	}
	
	NumberFormat_Field::NumberFormat_Field(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::icu::text

