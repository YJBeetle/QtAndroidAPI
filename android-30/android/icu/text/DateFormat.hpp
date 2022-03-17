#pragma once

#include "../../../JArray.hpp"
#include "./DateFormat_BooleanAttribute.def.hpp"
#include "./DisplayContext.def.hpp"
#include "./DisplayContext_Type.def.hpp"
#include "./NumberFormat.def.hpp"
#include "../util/Calendar.def.hpp"
#include "../util/TimeZone.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.def.hpp"
#include "../../../java/text/FieldPosition.def.hpp"
#include "../../../java/text/ParsePosition.def.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./DateFormat.def.hpp"

namespace android::icu::text
{
	// Fields
	inline JString DateFormat::ABBR_GENERIC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_GENERIC_TZ",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::ABBR_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_MONTH",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::ABBR_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_MONTH_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::ABBR_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::ABBR_QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_QUARTER",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::ABBR_SPECIFIC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_SPECIFIC_TZ",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::ABBR_UTC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_UTC_TZ",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::ABBR_WEEKDAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_WEEKDAY",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::AM_PM_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"AM_PM_FIELD"
		);
	}
	inline jint DateFormat::AM_PM_MIDNIGHT_NOON_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"AM_PM_MIDNIGHT_NOON_FIELD"
		);
	}
	inline jint DateFormat::DATE_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DATE_FIELD"
		);
	}
	inline JString DateFormat::DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"DAY",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::DAY_OF_WEEK_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DAY_OF_WEEK_FIELD"
		);
	}
	inline jint DateFormat::DAY_OF_WEEK_IN_MONTH_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DAY_OF_WEEK_IN_MONTH_FIELD"
		);
	}
	inline jint DateFormat::DAY_OF_YEAR_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DAY_OF_YEAR_FIELD"
		);
	}
	inline jint DateFormat::DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DEFAULT"
		);
	}
	inline jint DateFormat::DOW_LOCAL_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DOW_LOCAL_FIELD"
		);
	}
	inline jint DateFormat::ERA_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"ERA_FIELD"
		);
	}
	inline jint DateFormat::EXTENDED_YEAR_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"EXTENDED_YEAR_FIELD"
		);
	}
	inline jint DateFormat::FLEXIBLE_DAY_PERIOD_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"FLEXIBLE_DAY_PERIOD_FIELD"
		);
	}
	inline jint DateFormat::FRACTIONAL_SECOND_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"FRACTIONAL_SECOND_FIELD"
		);
	}
	inline jint DateFormat::FULL()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"FULL"
		);
	}
	inline JString DateFormat::GENERIC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"GENERIC_TZ",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::HOUR()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::HOUR0_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR0_FIELD"
		);
	}
	inline jint DateFormat::HOUR1_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR1_FIELD"
		);
	}
	inline JString DateFormat::HOUR24()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR24",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::HOUR24_MINUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR24_MINUTE",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::HOUR24_MINUTE_SECOND()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR24_MINUTE_SECOND",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::HOUR_MINUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR_MINUTE",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::HOUR_MINUTE_SECOND()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR_MINUTE_SECOND",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::HOUR_OF_DAY0_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR_OF_DAY0_FIELD"
		);
	}
	inline jint DateFormat::HOUR_OF_DAY1_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR_OF_DAY1_FIELD"
		);
	}
	inline jint DateFormat::JULIAN_DAY_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"JULIAN_DAY_FIELD"
		);
	}
	inline JString DateFormat::LOCATION_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"LOCATION_TZ",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::LONG()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"LONG"
		);
	}
	inline jint DateFormat::MEDIUM()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MEDIUM"
		);
	}
	inline jint DateFormat::MILLISECONDS_IN_DAY_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MILLISECONDS_IN_DAY_FIELD"
		);
	}
	inline jint DateFormat::MILLISECOND_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MILLISECOND_FIELD"
		);
	}
	inline JString DateFormat::MINUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MINUTE",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::MINUTE_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MINUTE_FIELD"
		);
	}
	inline JString DateFormat::MINUTE_SECOND()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MINUTE_SECOND",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MONTH",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MONTH_DAY",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::MONTH_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MONTH_FIELD"
		);
	}
	inline JString DateFormat::MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::NONE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"NONE"
		);
	}
	inline JString DateFormat::NUM_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"NUM_MONTH",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::NUM_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"NUM_MONTH_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::NUM_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"NUM_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"QUARTER",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::QUARTER_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"QUARTER_FIELD"
		);
	}
	inline jint DateFormat::RELATIVE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE"
		);
	}
	inline jint DateFormat::RELATIVE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_DEFAULT"
		);
	}
	inline jint DateFormat::RELATIVE_FULL()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_FULL"
		);
	}
	inline jint DateFormat::RELATIVE_LONG()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_LONG"
		);
	}
	inline jint DateFormat::RELATIVE_MEDIUM()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_MEDIUM"
		);
	}
	inline jint DateFormat::RELATIVE_SHORT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_SHORT"
		);
	}
	inline JString DateFormat::SECOND()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"SECOND",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::SECOND_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"SECOND_FIELD"
		);
	}
	inline jint DateFormat::SHORT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"SHORT"
		);
	}
	inline JString DateFormat::SPECIFIC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"SPECIFIC_TZ",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::STANDALONE_DAY_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"STANDALONE_DAY_FIELD"
		);
	}
	inline jint DateFormat::STANDALONE_MONTH_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"STANDALONE_MONTH_FIELD"
		);
	}
	inline jint DateFormat::STANDALONE_QUARTER_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"STANDALONE_QUARTER_FIELD"
		);
	}
	inline jint DateFormat::TIMEZONE_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_FIELD"
		);
	}
	inline jint DateFormat::TIMEZONE_GENERIC_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_GENERIC_FIELD"
		);
	}
	inline jint DateFormat::TIMEZONE_ISO_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_ISO_FIELD"
		);
	}
	inline jint DateFormat::TIMEZONE_ISO_LOCAL_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_ISO_LOCAL_FIELD"
		);
	}
	inline jint DateFormat::TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD"
		);
	}
	inline jint DateFormat::TIMEZONE_RFC_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_RFC_FIELD"
		);
	}
	inline jint DateFormat::TIMEZONE_SPECIAL_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_SPECIAL_FIELD"
		);
	}
	inline JString DateFormat::WEEKDAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"WEEKDAY",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::WEEK_OF_MONTH_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"WEEK_OF_MONTH_FIELD"
		);
	}
	inline jint DateFormat::WEEK_OF_YEAR_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"WEEK_OF_YEAR_FIELD"
		);
	}
	inline JString DateFormat::YEAR()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::YEAR_ABBR_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_MONTH",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::YEAR_ABBR_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_MONTH_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::YEAR_ABBR_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::YEAR_ABBR_QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_QUARTER",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::YEAR_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"YEAR_FIELD"
		);
	}
	inline JString DateFormat::YEAR_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_MONTH",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::YEAR_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_MONTH_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::YEAR_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::YEAR_NAME_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"YEAR_NAME_FIELD"
		);
	}
	inline JString DateFormat::YEAR_NUM_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_NUM_MONTH",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::YEAR_NUM_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_NUM_MONTH_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::YEAR_NUM_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_NUM_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DateFormat::YEAR_QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_QUARTER",
			"Ljava/lang/String;"
		);
	}
	inline jint DateFormat::YEAR_WOY_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"YEAR_WOY_FIELD"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray DateFormat::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateInstance(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(I)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateInstance(android::icu::util::Calendar arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(Landroid/icu/util/Calendar;I)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateInstance(jint arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateInstance(jint arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateInstance(android::icu::util::Calendar arg0, jint arg1, android::icu::util::ULocale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(Landroid/icu/util/Calendar;ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateInstance(android::icu::util::Calendar arg0, jint arg1, java::util::Locale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(Landroid/icu/util/Calendar;ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateTimeInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateTimeInstance(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(II)Landroid/icu/text/DateFormat;",
			arg0,
			arg1
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(Landroid/icu/util/Calendar;II)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateTimeInstance(jint arg0, jint arg1, android::icu::util::ULocale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateTimeInstance(jint arg0, jint arg1, java::util::Locale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(IILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2, android::icu::util::ULocale arg3)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(Landroid/icu/util/Calendar;IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2, java::util::Locale arg3)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(Landroid/icu/util/Calendar;IILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	inline android::icu::text::DateFormat DateFormat::getInstance(android::icu::util::Calendar arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstance",
			"(Landroid/icu/util/Calendar;)Landroid/icu/text/DateFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getInstance(android::icu::util::Calendar arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstance",
			"(Landroid/icu/util/Calendar;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(JString arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(android::icu::util::Calendar arg0, JString arg1, android::icu::util::ULocale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(android::icu::util::Calendar arg0, JString arg1, java::util::Locale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getPatternInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getPatternInstance(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getPatternInstance(JString arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getPatternInstance(android::icu::util::Calendar arg0, JString arg1, android::icu::util::ULocale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getPatternInstance(android::icu::util::Calendar arg0, JString arg1, java::util::Locale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getTimeInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	inline android::icu::text::DateFormat DateFormat::getTimeInstance(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(I)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	inline android::icu::text::DateFormat DateFormat::getTimeInstance(android::icu::util::Calendar arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(Landroid/icu/util/Calendar;I)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1
		);
	}
	inline android::icu::text::DateFormat DateFormat::getTimeInstance(jint arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getTimeInstance(jint arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getTimeInstance(android::icu::util::Calendar arg0, jint arg1, android::icu::util::ULocale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(Landroid/icu/util/Calendar;ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::getTimeInstance(android::icu::util::Calendar arg0, jint arg1, java::util::Locale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(Landroid/icu/util/Calendar;ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JObject DateFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean DateFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString DateFormat::format(java::util::Date arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Date;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline java::lang::StringBuffer DateFormat::format(android::icu::util::Calendar arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer DateFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer DateFormat::format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean DateFormat::getBooleanAttribute(android::icu::text::DateFormat_BooleanAttribute arg0) const
	{
		return callMethod<jboolean>(
			"getBooleanAttribute",
			"(Landroid/icu/text/DateFormat$BooleanAttribute;)Z",
			arg0.object()
		);
	}
	inline android::icu::util::Calendar DateFormat::getCalendar() const
	{
		return callObjectMethod(
			"getCalendar",
			"()Landroid/icu/util/Calendar;"
		);
	}
	inline android::icu::text::DisplayContext DateFormat::getContext(android::icu::text::DisplayContext_Type arg0) const
	{
		return callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberFormat DateFormat::getNumberFormat() const
	{
		return callObjectMethod(
			"getNumberFormat",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	inline android::icu::util::TimeZone DateFormat::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	inline jint DateFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean DateFormat::isCalendarLenient() const
	{
		return callMethod<jboolean>(
			"isCalendarLenient",
			"()Z"
		);
	}
	inline jboolean DateFormat::isLenient() const
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	inline java::util::Date DateFormat::parse(JString arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0.object<jstring>()
		);
	}
	inline java::util::Date DateFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void DateFormat::parse(JString arg0, android::icu::util::Calendar arg1, java::text::ParsePosition arg2) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject DateFormat::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateFormat::setBooleanAttribute(android::icu::text::DateFormat_BooleanAttribute arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"setBooleanAttribute",
			"(Landroid/icu/text/DateFormat$BooleanAttribute;Z)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1
		);
	}
	inline void DateFormat::setCalendar(android::icu::util::Calendar arg0) const
	{
		callMethod<void>(
			"setCalendar",
			"(Landroid/icu/util/Calendar;)V",
			arg0.object()
		);
	}
	inline void DateFormat::setCalendarLenient(jboolean arg0) const
	{
		callMethod<void>(
			"setCalendarLenient",
			"(Z)V",
			arg0
		);
	}
	inline void DateFormat::setContext(android::icu::text::DisplayContext arg0) const
	{
		callMethod<void>(
			"setContext",
			"(Landroid/icu/text/DisplayContext;)V",
			arg0.object()
		);
	}
	inline void DateFormat::setLenient(jboolean arg0) const
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	inline void DateFormat::setNumberFormat(android::icu::text::NumberFormat arg0) const
	{
		callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.object()
		);
	}
	inline void DateFormat::setTimeZone(android::icu::util::TimeZone arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

