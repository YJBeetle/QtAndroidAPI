#include "./DateFormat_BooleanAttribute.hpp"
#include "./DisplayContext.hpp"
#include "./DisplayContext_Type.hpp"
#include "./NumberFormat.hpp"
#include "../util/Calendar.hpp"
#include "../util/TimeZone.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DateFormat.hpp"

namespace android::icu::text
{
	// Fields
	jstring DateFormat::ABBR_GENERIC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_GENERIC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_QUARTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_SPECIFIC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_SPECIFIC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_UTC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_UTC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::ABBR_WEEKDAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"ABBR_WEEKDAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::AM_PM_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"AM_PM_FIELD"
		);
	}
	jint DateFormat::AM_PM_MIDNIGHT_NOON_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"AM_PM_MIDNIGHT_NOON_FIELD"
		);
	}
	jint DateFormat::DATE_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DATE_FIELD"
		);
	}
	jstring DateFormat::DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::DAY_OF_WEEK_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DAY_OF_WEEK_FIELD"
		);
	}
	jint DateFormat::DAY_OF_WEEK_IN_MONTH_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DAY_OF_WEEK_IN_MONTH_FIELD"
		);
	}
	jint DateFormat::DAY_OF_YEAR_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DAY_OF_YEAR_FIELD"
		);
	}
	jint DateFormat::DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DEFAULT"
		);
	}
	jint DateFormat::DOW_LOCAL_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"DOW_LOCAL_FIELD"
		);
	}
	jint DateFormat::ERA_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"ERA_FIELD"
		);
	}
	jint DateFormat::EXTENDED_YEAR_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"EXTENDED_YEAR_FIELD"
		);
	}
	jint DateFormat::FLEXIBLE_DAY_PERIOD_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"FLEXIBLE_DAY_PERIOD_FIELD"
		);
	}
	jint DateFormat::FRACTIONAL_SECOND_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"FRACTIONAL_SECOND_FIELD"
		);
	}
	jint DateFormat::FULL()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"FULL"
		);
	}
	jstring DateFormat::GENERIC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"GENERIC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::HOUR0_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR0_FIELD"
		);
	}
	jint DateFormat::HOUR1_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR1_FIELD"
		);
	}
	jstring DateFormat::HOUR24()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR24",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR24_MINUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR24_MINUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR24_MINUTE_SECOND()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR24_MINUTE_SECOND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR_MINUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR_MINUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::HOUR_MINUTE_SECOND()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"HOUR_MINUTE_SECOND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::HOUR_OF_DAY0_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR_OF_DAY0_FIELD"
		);
	}
	jint DateFormat::HOUR_OF_DAY1_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"HOUR_OF_DAY1_FIELD"
		);
	}
	jint DateFormat::JULIAN_DAY_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"JULIAN_DAY_FIELD"
		);
	}
	jstring DateFormat::LOCATION_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"LOCATION_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::LONG()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"LONG"
		);
	}
	jint DateFormat::MEDIUM()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MEDIUM"
		);
	}
	jint DateFormat::MILLISECONDS_IN_DAY_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MILLISECONDS_IN_DAY_FIELD"
		);
	}
	jint DateFormat::MILLISECOND_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MILLISECOND_FIELD"
		);
	}
	jstring DateFormat::MINUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MINUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::MINUTE_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MINUTE_FIELD"
		);
	}
	jstring DateFormat::MINUTE_SECOND()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MINUTE_SECOND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::MONTH_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"MONTH_FIELD"
		);
	}
	jstring DateFormat::MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::NONE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"NONE"
		);
	}
	jstring DateFormat::NUM_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"NUM_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::NUM_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"NUM_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::NUM_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"NUM_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"QUARTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::QUARTER_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"QUARTER_FIELD"
		);
	}
	jint DateFormat::RELATIVE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE"
		);
	}
	jint DateFormat::RELATIVE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_DEFAULT"
		);
	}
	jint DateFormat::RELATIVE_FULL()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_FULL"
		);
	}
	jint DateFormat::RELATIVE_LONG()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_LONG"
		);
	}
	jint DateFormat::RELATIVE_MEDIUM()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_MEDIUM"
		);
	}
	jint DateFormat::RELATIVE_SHORT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"RELATIVE_SHORT"
		);
	}
	jstring DateFormat::SECOND()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"SECOND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::SECOND_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"SECOND_FIELD"
		);
	}
	jint DateFormat::SHORT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"SHORT"
		);
	}
	jstring DateFormat::SPECIFIC_TZ()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"SPECIFIC_TZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::STANDALONE_DAY_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"STANDALONE_DAY_FIELD"
		);
	}
	jint DateFormat::STANDALONE_MONTH_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"STANDALONE_MONTH_FIELD"
		);
	}
	jint DateFormat::STANDALONE_QUARTER_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"STANDALONE_QUARTER_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_GENERIC_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_GENERIC_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_ISO_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_ISO_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_ISO_LOCAL_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_ISO_LOCAL_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_RFC_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_RFC_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_SPECIAL_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"TIMEZONE_SPECIAL_FIELD"
		);
	}
	jstring DateFormat::WEEKDAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"WEEKDAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::WEEK_OF_MONTH_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"WEEK_OF_MONTH_FIELD"
		);
	}
	jint DateFormat::WEEK_OF_YEAR_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"WEEK_OF_YEAR_FIELD"
		);
	}
	jstring DateFormat::YEAR()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_ABBR_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_ABBR_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_ABBR_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_ABBR_QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_ABBR_QUARTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::YEAR_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"YEAR_FIELD"
		);
	}
	jstring DateFormat::YEAR_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::YEAR_NAME_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"YEAR_NAME_FIELD"
		);
	}
	jstring DateFormat::YEAR_NUM_MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_NUM_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_NUM_MONTH_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_NUM_MONTH_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_NUM_MONTH_WEEKDAY_DAY()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_NUM_MONTH_WEEKDAY_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateFormat::YEAR_QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat",
			"YEAR_QUARTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateFormat::YEAR_WOY_FIELD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateFormat",
			"YEAR_WOY_FIELD"
		);
	}
	
	// QAndroidJniObject forward
	DateFormat::DateFormat(QAndroidJniObject obj) : android::icu::text::UFormat(obj) {}
	
	// Constructors
	
	// Methods
	jarray DateFormat::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	android::icu::text::DateFormat DateFormat::getDateInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	android::icu::text::DateFormat DateFormat::getDateInstance(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(I)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	android::icu::text::DateFormat DateFormat::getDateInstance(android::icu::util::Calendar arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(Landroid/icu/util/Calendar;I)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1
		);
	}
	android::icu::text::DateFormat DateFormat::getDateInstance(jint arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getDateInstance(jint arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateInstance",
			"(ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getDateInstance(android::icu::util::Calendar arg0, jint arg1, android::icu::util::ULocale arg2)
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
	android::icu::text::DateFormat DateFormat::getDateInstance(android::icu::util::Calendar arg0, jint arg1, java::util::Locale arg2)
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
	android::icu::text::DateFormat DateFormat::getDateTimeInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	android::icu::text::DateFormat DateFormat::getDateTimeInstance(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getDateTimeInstance",
			"(II)Landroid/icu/text/DateFormat;",
			arg0,
			arg1
		);
	}
	android::icu::text::DateFormat DateFormat::getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2)
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
	android::icu::text::DateFormat DateFormat::getDateTimeInstance(jint arg0, jint arg1, android::icu::util::ULocale arg2)
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
	android::icu::text::DateFormat DateFormat::getDateTimeInstance(jint arg0, jint arg1, java::util::Locale arg2)
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
	android::icu::text::DateFormat DateFormat::getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2, android::icu::util::ULocale arg3)
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
	android::icu::text::DateFormat DateFormat::getDateTimeInstance(android::icu::util::Calendar arg0, jint arg1, jint arg2, java::util::Locale arg3)
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
	android::icu::text::DateFormat DateFormat::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	android::icu::text::DateFormat DateFormat::getInstance(android::icu::util::Calendar arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstance",
			"(Landroid/icu/util/Calendar;)Landroid/icu/text/DateFormat;",
			arg0.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getInstance(android::icu::util::Calendar arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstance",
			"(Landroid/icu/util/Calendar;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(jstring arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(android::icu::util::Calendar arg0, jstring arg1, android::icu::util::ULocale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getInstanceForSkeleton(android::icu::util::Calendar arg0, jstring arg1, java::util::Locale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getInstanceForSkeleton",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getPatternInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	android::icu::text::DateFormat DateFormat::getPatternInstance(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getPatternInstance(jstring arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getPatternInstance(android::icu::util::Calendar arg0, jstring arg1, android::icu::util::ULocale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getPatternInstance(android::icu::util::Calendar arg0, jstring arg1, java::util::Locale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getPatternInstance",
			"(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getTimeInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	android::icu::text::DateFormat DateFormat::getTimeInstance(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(I)Landroid/icu/text/DateFormat;",
			arg0
		);
	}
	android::icu::text::DateFormat DateFormat::getTimeInstance(android::icu::util::Calendar arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(Landroid/icu/util/Calendar;I)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1
		);
	}
	android::icu::text::DateFormat DateFormat::getTimeInstance(jint arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getTimeInstance(jint arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat",
			"getTimeInstance",
			"(ILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::DateFormat DateFormat::getTimeInstance(android::icu::util::Calendar arg0, jint arg1, android::icu::util::ULocale arg2)
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
	android::icu::text::DateFormat DateFormat::getTimeInstance(android::icu::util::Calendar arg0, jint arg1, java::util::Locale arg2)
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
	jobject DateFormat::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DateFormat::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring DateFormat::format(java::util::Date arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Date;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	java::lang::StringBuffer DateFormat::format(android::icu::util::Calendar arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DateFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DateFormat::format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean DateFormat::getBooleanAttribute(android::icu::text::DateFormat_BooleanAttribute arg0)
	{
		return callMethod<jboolean>(
			"getBooleanAttribute",
			"(Landroid/icu/text/DateFormat$BooleanAttribute;)Z",
			arg0.object()
		);
	}
	android::icu::util::Calendar DateFormat::getCalendar()
	{
		return callObjectMethod(
			"getCalendar",
			"()Landroid/icu/util/Calendar;"
		);
	}
	android::icu::text::DisplayContext DateFormat::getContext(android::icu::text::DisplayContext_Type arg0)
	{
		return callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.object()
		);
	}
	android::icu::text::NumberFormat DateFormat::getNumberFormat()
	{
		return callObjectMethod(
			"getNumberFormat",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	android::icu::util::TimeZone DateFormat::getTimeZone()
	{
		return callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jint DateFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DateFormat::isCalendarLenient()
	{
		return callMethod<jboolean>(
			"isCalendarLenient",
			"()Z"
		);
	}
	jboolean DateFormat::isLenient()
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	java::util::Date DateFormat::parse(jstring arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	java::util::Date DateFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0,
			arg1.object()
		);
	}
	void DateFormat::parse(jstring arg0, android::icu::util::Calendar arg1, java::text::ParsePosition arg2)
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jobject DateFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	android::icu::text::DateFormat DateFormat::setBooleanAttribute(android::icu::text::DateFormat_BooleanAttribute arg0, jboolean arg1)
	{
		return callObjectMethod(
			"setBooleanAttribute",
			"(Landroid/icu/text/DateFormat$BooleanAttribute;Z)Landroid/icu/text/DateFormat;",
			arg0.object(),
			arg1
		);
	}
	void DateFormat::setCalendar(android::icu::util::Calendar arg0)
	{
		callMethod<void>(
			"setCalendar",
			"(Landroid/icu/util/Calendar;)V",
			arg0.object()
		);
	}
	void DateFormat::setCalendarLenient(jboolean arg0)
	{
		callMethod<void>(
			"setCalendarLenient",
			"(Z)V",
			arg0
		);
	}
	void DateFormat::setContext(android::icu::text::DisplayContext arg0)
	{
		callMethod<void>(
			"setContext",
			"(Landroid/icu/text/DisplayContext;)V",
			arg0.object()
		);
	}
	void DateFormat::setLenient(jboolean arg0)
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	void DateFormat::setNumberFormat(android::icu::text::NumberFormat arg0)
	{
		callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.object()
		);
	}
	void DateFormat::setTimeZone(android::icu::util::TimeZone arg0)
	{
		callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text
