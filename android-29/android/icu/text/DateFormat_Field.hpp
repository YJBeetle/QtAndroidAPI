#pragma once

#ifndef ANDROID_ICU_TEXT_DATEFORMAT_FIELD
#define ANDROID_ICU_TEXT_DATEFORMAT_FIELD

#include "../../../java/text/Format_Field.hpp"


namespace __jni_impl::android::icu::text
{
	class DateFormat_Field : public __jni_impl::java::text::Format_Field
	{
	public:
		// Fields
		static QAndroidJniObject AM_PM();
		static QAndroidJniObject AM_PM_MIDNIGHT_NOON();
		static QAndroidJniObject DAY_OF_MONTH();
		static QAndroidJniObject DAY_OF_WEEK();
		static QAndroidJniObject DAY_OF_WEEK_IN_MONTH();
		static QAndroidJniObject DAY_OF_YEAR();
		static QAndroidJniObject DOW_LOCAL();
		static QAndroidJniObject ERA();
		static QAndroidJniObject EXTENDED_YEAR();
		static QAndroidJniObject FLEXIBLE_DAY_PERIOD();
		static QAndroidJniObject HOUR0();
		static QAndroidJniObject HOUR1();
		static QAndroidJniObject HOUR_OF_DAY0();
		static QAndroidJniObject HOUR_OF_DAY1();
		static QAndroidJniObject JULIAN_DAY();
		static QAndroidJniObject MILLISECOND();
		static QAndroidJniObject MILLISECONDS_IN_DAY();
		static QAndroidJniObject MINUTE();
		static QAndroidJniObject MONTH();
		static QAndroidJniObject QUARTER();
		static QAndroidJniObject SECOND();
		static QAndroidJniObject TIME_ZONE();
		static QAndroidJniObject WEEK_OF_MONTH();
		static QAndroidJniObject WEEK_OF_YEAR();
		static QAndroidJniObject YEAR();
		static QAndroidJniObject YEAR_WOY();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject ofCalendarField(jint arg0);
		jint getCalendarField();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject DateFormat_Field::AM_PM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"AM_PM",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::AM_PM_MIDNIGHT_NOON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"AM_PM_MIDNIGHT_NOON",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::DAY_OF_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"DAY_OF_MONTH",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::DAY_OF_WEEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"DAY_OF_WEEK",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::DAY_OF_WEEK_IN_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"DAY_OF_WEEK_IN_MONTH",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::DAY_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"DAY_OF_YEAR",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::DOW_LOCAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"DOW_LOCAL",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::ERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"ERA",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::EXTENDED_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"EXTENDED_YEAR",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::FLEXIBLE_DAY_PERIOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"FLEXIBLE_DAY_PERIOD",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::HOUR0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"HOUR0",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::HOUR1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"HOUR1",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::HOUR_OF_DAY0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"HOUR_OF_DAY0",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::HOUR_OF_DAY1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"HOUR_OF_DAY1",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::JULIAN_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"JULIAN_DAY",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::MILLISECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"MILLISECOND",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::MILLISECONDS_IN_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"MILLISECONDS_IN_DAY",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"MINUTE",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"MONTH",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::QUARTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"QUARTER",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"SECOND",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::TIME_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"TIME_ZONE",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::WEEK_OF_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"WEEK_OF_MONTH",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::WEEK_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"WEEK_OF_YEAR",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"YEAR",
			"Landroid/icu/text/DateFormat$Field;");
	}
	QAndroidJniObject DateFormat_Field::YEAR_WOY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DateFormat$Field",
			"YEAR_WOY",
			"Landroid/icu/text/DateFormat$Field;");
	}
	
	// Constructors
	void DateFormat_Field::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateFormat$Field",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DateFormat_Field::ofCalendarField(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateFormat$Field",
			"ofCalendarField",
			"(I)Landroid/icu/text/DateFormat$Field;",
			arg0);
	}
	jint DateFormat_Field::getCalendarField()
	{
		return __thiz.callMethod<jint>(
			"getCalendarField",
			"()I");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DateFormat_Field : public __jni_impl::android::icu::text::DateFormat_Field
	{
	public:
		DateFormat_Field(QAndroidJniObject obj) { __thiz = obj; }
		DateFormat_Field()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DATEFORMAT_FIELD

