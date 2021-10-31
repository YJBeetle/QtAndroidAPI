#include "../text/DateFormat.hpp"
#include "./Calendar_WeekData.hpp"
#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./Calendar.hpp"

namespace android::icu::util
{
	// Fields
	jint Calendar::AM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"AM"
		);
	}
	jint Calendar::AM_PM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"AM_PM"
		);
	}
	jint Calendar::APRIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"APRIL"
		);
	}
	jint Calendar::AUGUST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"AUGUST"
		);
	}
	jint Calendar::DATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"DATE"
		);
	}
	jint Calendar::DAY_OF_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"DAY_OF_MONTH"
		);
	}
	jint Calendar::DAY_OF_WEEK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"DAY_OF_WEEK"
		);
	}
	jint Calendar::DAY_OF_WEEK_IN_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"DAY_OF_WEEK_IN_MONTH"
		);
	}
	jint Calendar::DAY_OF_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"DAY_OF_YEAR"
		);
	}
	jint Calendar::DECEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"DECEMBER"
		);
	}
	jint Calendar::DOW_LOCAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"DOW_LOCAL"
		);
	}
	jint Calendar::DST_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"DST_OFFSET"
		);
	}
	jint Calendar::ERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"ERA"
		);
	}
	jint Calendar::EXTENDED_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"EXTENDED_YEAR"
		);
	}
	jint Calendar::FEBRUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"FEBRUARY"
		);
	}
	jint Calendar::FRIDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"FRIDAY"
		);
	}
	jint Calendar::HOUR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"HOUR"
		);
	}
	jint Calendar::HOUR_OF_DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"HOUR_OF_DAY"
		);
	}
	jint Calendar::IS_LEAP_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"IS_LEAP_MONTH"
		);
	}
	jint Calendar::JANUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"JANUARY"
		);
	}
	jint Calendar::JULIAN_DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"JULIAN_DAY"
		);
	}
	jint Calendar::JULY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"JULY"
		);
	}
	jint Calendar::JUNE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"JUNE"
		);
	}
	jint Calendar::MARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"MARCH"
		);
	}
	jint Calendar::MAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"MAY"
		);
	}
	jint Calendar::MILLISECOND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"MILLISECOND"
		);
	}
	jint Calendar::MILLISECONDS_IN_DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"MILLISECONDS_IN_DAY"
		);
	}
	jint Calendar::MINUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"MINUTE"
		);
	}
	jint Calendar::MONDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"MONDAY"
		);
	}
	jint Calendar::MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"MONTH"
		);
	}
	jint Calendar::NOVEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"NOVEMBER"
		);
	}
	jint Calendar::OCTOBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"OCTOBER"
		);
	}
	jint Calendar::PM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"PM"
		);
	}
	jint Calendar::SATURDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"SATURDAY"
		);
	}
	jint Calendar::SECOND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"SECOND"
		);
	}
	jint Calendar::SEPTEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"SEPTEMBER"
		);
	}
	jint Calendar::SUNDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"SUNDAY"
		);
	}
	jint Calendar::THURSDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"THURSDAY"
		);
	}
	jint Calendar::TUESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"TUESDAY"
		);
	}
	jint Calendar::UNDECIMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"UNDECIMBER"
		);
	}
	jint Calendar::WALLTIME_FIRST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"WALLTIME_FIRST"
		);
	}
	jint Calendar::WALLTIME_LAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"WALLTIME_LAST"
		);
	}
	jint Calendar::WALLTIME_NEXT_VALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"WALLTIME_NEXT_VALID"
		);
	}
	jint Calendar::WEDNESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"WEDNESDAY"
		);
	}
	jint Calendar::WEEK_OF_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"WEEK_OF_MONTH"
		);
	}
	jint Calendar::WEEK_OF_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"WEEK_OF_YEAR"
		);
	}
	jint Calendar::YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"YEAR"
		);
	}
	jint Calendar::YEAR_WOY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"YEAR_WOY"
		);
	}
	jint Calendar::ZONE_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Calendar",
			"ZONE_OFFSET"
		);
	}
	
	// QAndroidJniObject forward
	Calendar::Calendar(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray Calendar::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	android::icu::util::Calendar Calendar::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"()Landroid/icu/util/Calendar;"
		);
	}
	android::icu::util::Calendar Calendar::getInstance(android::icu::util::TimeZone arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/TimeZone;)Landroid/icu/util/Calendar;",
			arg0.object()
		);
	}
	android::icu::util::Calendar Calendar::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;",
			arg0.object()
		);
	}
	android::icu::util::Calendar Calendar::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/util/Calendar;",
			arg0.object()
		);
	}
	android::icu::util::Calendar Calendar::getInstance(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::util::Calendar Calendar::getInstance(android::icu::util::TimeZone arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)Landroid/icu/util/Calendar;",
			arg0.object(),
			arg1.object()
		);
	}
	jarray Calendar::getKeywordValuesForLocale(jstring arg0, android::icu::util::ULocale arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0,
			arg1.object(),
			arg2
		).object<jarray>();
	}
	android::icu::util::Calendar_WeekData Calendar::getWeekDataForRegion(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getWeekDataForRegion",
			"(Ljava/lang/String;)Landroid/icu/util/Calendar$WeekData;",
			arg0
		);
	}
	void Calendar::add(jint arg0, jint arg1)
	{
		callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Calendar::after(jobject arg0)
	{
		return callMethod<jboolean>(
			"after",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Calendar::before(jobject arg0)
	{
		return callMethod<jboolean>(
			"before",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void Calendar::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Calendar::clear(jint arg0)
	{
		callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	jobject Calendar::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Calendar::compareTo(android::icu::util::Calendar arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/util/Calendar;)I",
			arg0.object()
		);
	}
	jint Calendar::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean Calendar::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Calendar::fieldDifference(java::util::Date arg0, jint arg1)
	{
		return callMethod<jint>(
			"fieldDifference",
			"(Ljava/util/Date;I)I",
			arg0.object(),
			arg1
		);
	}
	jint Calendar::get(jint arg0)
	{
		return callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getActualMaximum(jint arg0)
	{
		return callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getActualMinimum(jint arg0)
	{
		return callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	android::icu::text::DateFormat Calendar::getDateTimeFormat(jint arg0, jint arg1, android::icu::util::ULocale arg2)
	{
		return callObjectMethod(
			"getDateTimeFormat",
			"(IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::icu::text::DateFormat Calendar::getDateTimeFormat(jint arg0, jint arg1, java::util::Locale arg2)
	{
		return callObjectMethod(
			"getDateTimeFormat",
			"(IILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jstring Calendar::getDisplayName(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Calendar::getDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint Calendar::getFieldCount()
	{
		return callMethod<jint>(
			"getFieldCount",
			"()I"
		);
	}
	jint Calendar::getFirstDayOfWeek()
	{
		return callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	jint Calendar::getGreatestMinimum(jint arg0)
	{
		return callMethod<jint>(
			"getGreatestMinimum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getLeastMaximum(jint arg0)
	{
		return callMethod<jint>(
			"getLeastMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getMaximum(jint arg0)
	{
		return callMethod<jint>(
			"getMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getMinimalDaysInFirstWeek()
	{
		return callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I"
		);
	}
	jint Calendar::getMinimum(jint arg0)
	{
		return callMethod<jint>(
			"getMinimum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getRepeatedWallTimeOption()
	{
		return callMethod<jint>(
			"getRepeatedWallTimeOption",
			"()I"
		);
	}
	jint Calendar::getSkippedWallTimeOption()
	{
		return callMethod<jint>(
			"getSkippedWallTimeOption",
			"()I"
		);
	}
	java::util::Date Calendar::getTime()
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/util/Date;"
		);
	}
	jlong Calendar::getTimeInMillis()
	{
		return callMethod<jlong>(
			"getTimeInMillis",
			"()J"
		);
	}
	android::icu::util::TimeZone Calendar::getTimeZone()
	{
		return callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jstring Calendar::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::icu::util::Calendar_WeekData Calendar::getWeekData()
	{
		return callObjectMethod(
			"getWeekData",
			"()Landroid/icu/util/Calendar$WeekData;"
		);
	}
	jint Calendar::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Calendar::isEquivalentTo(android::icu::util::Calendar arg0)
	{
		return callMethod<jboolean>(
			"isEquivalentTo",
			"(Landroid/icu/util/Calendar;)Z",
			arg0.object()
		);
	}
	jboolean Calendar::isLenient()
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	jboolean Calendar::isSet(jint arg0)
	{
		return callMethod<jboolean>(
			"isSet",
			"(I)Z",
			arg0
		);
	}
	jboolean Calendar::isWeekend()
	{
		return callMethod<jboolean>(
			"isWeekend",
			"()Z"
		);
	}
	jboolean Calendar::isWeekend(java::util::Date arg0)
	{
		return callMethod<jboolean>(
			"isWeekend",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	void Calendar::roll(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"roll",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Calendar::roll(jint arg0, jint arg1)
	{
		callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Calendar::set(jint arg0, jint arg1)
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"set",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callMethod<void>(
			"set",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callMethod<void>(
			"set",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Calendar::setFirstDayOfWeek(jint arg0)
	{
		callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	void Calendar::setLenient(jboolean arg0)
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	void Calendar::setMinimalDaysInFirstWeek(jint arg0)
	{
		callMethod<void>(
			"setMinimalDaysInFirstWeek",
			"(I)V",
			arg0
		);
	}
	void Calendar::setRepeatedWallTimeOption(jint arg0)
	{
		callMethod<void>(
			"setRepeatedWallTimeOption",
			"(I)V",
			arg0
		);
	}
	void Calendar::setSkippedWallTimeOption(jint arg0)
	{
		callMethod<void>(
			"setSkippedWallTimeOption",
			"(I)V",
			arg0
		);
	}
	void Calendar::setTime(java::util::Date arg0)
	{
		callMethod<void>(
			"setTime",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void Calendar::setTimeInMillis(jlong arg0)
	{
		callMethod<void>(
			"setTimeInMillis",
			"(J)V",
			arg0
		);
	}
	void Calendar::setTimeZone(android::icu::util::TimeZone arg0)
	{
		callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		);
	}
	android::icu::util::Calendar Calendar::setWeekData(android::icu::util::Calendar_WeekData arg0)
	{
		return callObjectMethod(
			"setWeekData",
			"(Landroid/icu/util/Calendar$WeekData;)Landroid/icu/util/Calendar;",
			arg0.object()
		);
	}
	jstring Calendar::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

