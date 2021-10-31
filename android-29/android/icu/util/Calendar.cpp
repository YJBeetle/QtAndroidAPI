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
	
	Calendar::Calendar(QAndroidJniObject obj) { __thiz = obj; }
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
	QAndroidJniObject Calendar::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"()Landroid/icu/util/Calendar;"
		);
	}
	QAndroidJniObject Calendar::getInstance(android::icu::util::TimeZone arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/TimeZone;)Landroid/icu/util/Calendar;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/util/Calendar;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar::getInstance(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar::getInstance(android::icu::util::TimeZone arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)Landroid/icu/util/Calendar;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jarray Calendar::getKeywordValuesForLocale(jstring arg0, android::icu::util::ULocale arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		).object<jarray>();
	}
	QAndroidJniObject Calendar::getWeekDataForRegion(jstring arg0)
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
		__thiz.callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Calendar::after(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"after",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Calendar::before(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"before",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void Calendar::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Calendar::clear(jint arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	jobject Calendar::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Calendar::compareTo(android::icu::util::Calendar arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/util/Calendar;)I",
			arg0.__jniObject().object()
		);
	}
	jint Calendar::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean Calendar::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Calendar::fieldDifference(java::util::Date arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"fieldDifference",
			"(Ljava/util/Date;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Calendar::get(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getActualMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getActualMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject Calendar::getDateTimeFormat(jint arg0, jint arg1, android::icu::util::ULocale arg2)
	{
		return __thiz.callObjectMethod(
			"getDateTimeFormat",
			"(IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar::getDateTimeFormat(jint arg0, jint arg1, java::util::Locale arg2)
	{
		return __thiz.callObjectMethod(
			"getDateTimeFormat",
			"(IILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jstring Calendar::getDisplayName(android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Calendar::getDisplayName(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint Calendar::getFieldCount()
	{
		return __thiz.callMethod<jint>(
			"getFieldCount",
			"()I"
		);
	}
	jint Calendar::getFirstDayOfWeek()
	{
		return __thiz.callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	jint Calendar::getGreatestMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getGreatestMinimum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getLeastMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeastMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getMinimalDaysInFirstWeek()
	{
		return __thiz.callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I"
		);
	}
	jint Calendar::getMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMinimum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getRepeatedWallTimeOption()
	{
		return __thiz.callMethod<jint>(
			"getRepeatedWallTimeOption",
			"()I"
		);
	}
	jint Calendar::getSkippedWallTimeOption()
	{
		return __thiz.callMethod<jint>(
			"getSkippedWallTimeOption",
			"()I"
		);
	}
	QAndroidJniObject Calendar::getTime()
	{
		return __thiz.callObjectMethod(
			"getTime",
			"()Ljava/util/Date;"
		);
	}
	jlong Calendar::getTimeInMillis()
	{
		return __thiz.callMethod<jlong>(
			"getTimeInMillis",
			"()J"
		);
	}
	QAndroidJniObject Calendar::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jstring Calendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Calendar::getWeekData()
	{
		return __thiz.callObjectMethod(
			"getWeekData",
			"()Landroid/icu/util/Calendar$WeekData;"
		);
	}
	jint Calendar::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Calendar::isEquivalentTo(android::icu::util::Calendar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEquivalentTo",
			"(Landroid/icu/util/Calendar;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Calendar::isLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	jboolean Calendar::isSet(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSet",
			"(I)Z",
			arg0
		);
	}
	jboolean Calendar::isWeekend()
	{
		return __thiz.callMethod<jboolean>(
			"isWeekend",
			"()Z"
		);
	}
	jboolean Calendar::isWeekend(java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isWeekend",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	void Calendar::roll(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Calendar::roll(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Calendar::set(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	void Calendar::setLenient(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	void Calendar::setMinimalDaysInFirstWeek(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimalDaysInFirstWeek",
			"(I)V",
			arg0
		);
	}
	void Calendar::setRepeatedWallTimeOption(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRepeatedWallTimeOption",
			"(I)V",
			arg0
		);
	}
	void Calendar::setSkippedWallTimeOption(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSkippedWallTimeOption",
			"(I)V",
			arg0
		);
	}
	void Calendar::setTime(java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void Calendar::setTimeInMillis(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTimeInMillis",
			"(J)V",
			arg0
		);
	}
	void Calendar::setTimeZone(android::icu::util::TimeZone arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar::setWeekData(android::icu::util::Calendar_WeekData arg0)
	{
		return __thiz.callObjectMethod(
			"setWeekData",
			"(Landroid/icu/util/Calendar$WeekData;)Landroid/icu/util/Calendar;",
			arg0.__jniObject().object()
		);
	}
	jstring Calendar::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

