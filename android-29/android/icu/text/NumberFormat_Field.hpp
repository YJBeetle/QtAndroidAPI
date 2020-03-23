#pragma once

#ifndef ANDROID_ICU_TEXT_NUMBERFORMAT_FIELD
#define ANDROID_ICU_TEXT_NUMBERFORMAT_FIELD

#include "../../../java/text/Format_Field.hpp"


namespace __jni_impl::android::icu::text
{
	class NumberFormat_Field : public __jni_impl::java::text::Format_Field
	{
	public:
		// Fields
		static QAndroidJniObject CURRENCY();
		static QAndroidJniObject DECIMAL_SEPARATOR();
		static QAndroidJniObject EXPONENT();
		static QAndroidJniObject EXPONENT_SIGN();
		static QAndroidJniObject EXPONENT_SYMBOL();
		static QAndroidJniObject FRACTION();
		static QAndroidJniObject GROUPING_SEPARATOR();
		static QAndroidJniObject INTEGER();
		static QAndroidJniObject PERCENT();
		static QAndroidJniObject PERMILLE();
		static QAndroidJniObject SIGN();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject NumberFormat_Field::CURRENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"CURRENCY",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::DECIMAL_SEPARATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"DECIMAL_SEPARATOR",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::EXPONENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::EXPONENT_SIGN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT_SIGN",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::EXPONENT_SYMBOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"EXPONENT_SYMBOL",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::FRACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"FRACTION",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::GROUPING_SEPARATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"GROUPING_SEPARATOR",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::INTEGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"INTEGER",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::PERCENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"PERCENT",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::PERMILLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"PERMILLE",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	QAndroidJniObject NumberFormat_Field::SIGN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberFormat$Field",
			"SIGN",
			"Landroid/icu/text/NumberFormat$Field;");
	}
	
	// Constructors
	void NumberFormat_Field::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.NumberFormat$Field",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class NumberFormat_Field : public __jni_impl::android::icu::text::NumberFormat_Field
	{
	public:
		NumberFormat_Field(QAndroidJniObject obj) { __thiz = obj; }
		NumberFormat_Field()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_NUMBERFORMAT_FIELD

