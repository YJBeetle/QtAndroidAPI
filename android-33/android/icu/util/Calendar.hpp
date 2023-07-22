#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../text/DateFormat.def.hpp"
#include "./Calendar_WeekData.def.hpp"
#include "./TimeZone.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./Calendar.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint Calendar::AM()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"AM"
		);
	}
	inline jint Calendar::AM_PM()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"AM_PM"
		);
	}
	inline jint Calendar::APRIL()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"APRIL"
		);
	}
	inline jint Calendar::AUGUST()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"AUGUST"
		);
	}
	inline jint Calendar::DATE()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"DATE"
		);
	}
	inline jint Calendar::DAY_OF_MONTH()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"DAY_OF_MONTH"
		);
	}
	inline jint Calendar::DAY_OF_WEEK()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"DAY_OF_WEEK"
		);
	}
	inline jint Calendar::DAY_OF_WEEK_IN_MONTH()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"DAY_OF_WEEK_IN_MONTH"
		);
	}
	inline jint Calendar::DAY_OF_YEAR()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"DAY_OF_YEAR"
		);
	}
	inline jint Calendar::DECEMBER()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"DECEMBER"
		);
	}
	inline jint Calendar::DOW_LOCAL()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"DOW_LOCAL"
		);
	}
	inline jint Calendar::DST_OFFSET()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"DST_OFFSET"
		);
	}
	inline jint Calendar::ERA()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"ERA"
		);
	}
	inline jint Calendar::EXTENDED_YEAR()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"EXTENDED_YEAR"
		);
	}
	inline jint Calendar::FEBRUARY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"FEBRUARY"
		);
	}
	inline jint Calendar::FRIDAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"FRIDAY"
		);
	}
	inline jint Calendar::HOUR()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"HOUR"
		);
	}
	inline jint Calendar::HOUR_OF_DAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"HOUR_OF_DAY"
		);
	}
	inline jint Calendar::IS_LEAP_MONTH()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"IS_LEAP_MONTH"
		);
	}
	inline jint Calendar::JANUARY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"JANUARY"
		);
	}
	inline jint Calendar::JULIAN_DAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"JULIAN_DAY"
		);
	}
	inline jint Calendar::JULY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"JULY"
		);
	}
	inline jint Calendar::JUNE()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"JUNE"
		);
	}
	inline jint Calendar::MARCH()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"MARCH"
		);
	}
	inline jint Calendar::MAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"MAY"
		);
	}
	inline jint Calendar::MILLISECOND()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"MILLISECOND"
		);
	}
	inline jint Calendar::MILLISECONDS_IN_DAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"MILLISECONDS_IN_DAY"
		);
	}
	inline jint Calendar::MINUTE()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"MINUTE"
		);
	}
	inline jint Calendar::MONDAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"MONDAY"
		);
	}
	inline jint Calendar::MONTH()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"MONTH"
		);
	}
	inline jint Calendar::NOVEMBER()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"NOVEMBER"
		);
	}
	inline jint Calendar::OCTOBER()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"OCTOBER"
		);
	}
	inline jint Calendar::PM()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"PM"
		);
	}
	inline jint Calendar::SATURDAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"SATURDAY"
		);
	}
	inline jint Calendar::SECOND()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"SECOND"
		);
	}
	inline jint Calendar::SEPTEMBER()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"SEPTEMBER"
		);
	}
	inline jint Calendar::SUNDAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"SUNDAY"
		);
	}
	inline jint Calendar::THURSDAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"THURSDAY"
		);
	}
	inline jint Calendar::TUESDAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"TUESDAY"
		);
	}
	inline jint Calendar::UNDECIMBER()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"UNDECIMBER"
		);
	}
	inline jint Calendar::WALLTIME_FIRST()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"WALLTIME_FIRST"
		);
	}
	inline jint Calendar::WALLTIME_LAST()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"WALLTIME_LAST"
		);
	}
	inline jint Calendar::WALLTIME_NEXT_VALID()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"WALLTIME_NEXT_VALID"
		);
	}
	inline jint Calendar::WEDNESDAY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"WEDNESDAY"
		);
	}
	inline jint Calendar::WEEK_OF_MONTH()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"WEEK_OF_MONTH"
		);
	}
	inline jint Calendar::WEEK_OF_YEAR()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"WEEK_OF_YEAR"
		);
	}
	inline jint Calendar::YEAR()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"YEAR"
		);
	}
	inline jint Calendar::YEAR_WOY()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"YEAR_WOY"
		);
	}
	inline jint Calendar::ZONE_OFFSET()
	{
		return getStaticField<jint>(
			"android.icu.util.Calendar",
			"ZONE_OFFSET"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray Calendar::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline android::icu::util::Calendar Calendar::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"()Landroid/icu/util/Calendar;"
		);
	}
	inline android::icu::util::Calendar Calendar::getInstance(android::icu::util::TimeZone arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/TimeZone;)Landroid/icu/util/Calendar;",
			arg0.object()
		);
	}
	inline android::icu::util::Calendar Calendar::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;",
			arg0.object()
		);
	}
	inline android::icu::util::Calendar Calendar::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/util/Calendar;",
			arg0.object()
		);
	}
	inline android::icu::util::Calendar Calendar::getInstance(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::util::Calendar Calendar::getInstance(android::icu::util::TimeZone arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getInstance",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)Landroid/icu/util/Calendar;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JArray Calendar::getKeywordValuesForLocale(JString arg0, android::icu::util::ULocale arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline android::icu::util::Calendar_WeekData Calendar::getWeekDataForRegion(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Calendar",
			"getWeekDataForRegion",
			"(Ljava/lang/String;)Landroid/icu/util/Calendar$WeekData;",
			arg0.object<jstring>()
		);
	}
	inline void Calendar::add(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean Calendar::after(JObject arg0) const
	{
		return callMethod<jboolean>(
			"after",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean Calendar::before(JObject arg0) const
	{
		return callMethod<jboolean>(
			"before",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void Calendar::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void Calendar::clear(jint arg0) const
	{
		callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	inline JObject Calendar::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint Calendar::compareTo(android::icu::util::Calendar arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/util/Calendar;)I",
			arg0.object()
		);
	}
	inline jint Calendar::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Calendar::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Calendar::fieldDifference(java::util::Date arg0, jint arg1) const
	{
		return callMethod<jint>(
			"fieldDifference",
			"(Ljava/util/Date;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint Calendar::get(jint arg0) const
	{
		return callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	inline jint Calendar::getActualMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	inline jint Calendar::getActualMinimum(jint arg0) const
	{
		return callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	inline android::icu::text::DateFormat Calendar::getDateTimeFormat(jint arg0, jint arg1, android::icu::util::ULocale arg2) const
	{
		return callObjectMethod(
			"getDateTimeFormat",
			"(IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::icu::text::DateFormat Calendar::getDateTimeFormat(jint arg0, jint arg1, java::util::Locale arg2) const
	{
		return callObjectMethod(
			"getDateTimeFormat",
			"(IILjava/util/Locale;)Landroid/icu/text/DateFormat;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline JString Calendar::getDisplayName(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Calendar::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint Calendar::getFieldCount() const
	{
		return callMethod<jint>(
			"getFieldCount",
			"()I"
		);
	}
	inline jint Calendar::getFirstDayOfWeek() const
	{
		return callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	inline jint Calendar::getGreatestMinimum(jint arg0) const
	{
		return callMethod<jint>(
			"getGreatestMinimum",
			"(I)I",
			arg0
		);
	}
	inline jint Calendar::getLeastMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getLeastMaximum",
			"(I)I",
			arg0
		);
	}
	inline jint Calendar::getMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getMaximum",
			"(I)I",
			arg0
		);
	}
	inline jint Calendar::getMinimalDaysInFirstWeek() const
	{
		return callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I"
		);
	}
	inline jint Calendar::getMinimum(jint arg0) const
	{
		return callMethod<jint>(
			"getMinimum",
			"(I)I",
			arg0
		);
	}
	inline jint Calendar::getRepeatedWallTimeOption() const
	{
		return callMethod<jint>(
			"getRepeatedWallTimeOption",
			"()I"
		);
	}
	inline jint Calendar::getSkippedWallTimeOption() const
	{
		return callMethod<jint>(
			"getSkippedWallTimeOption",
			"()I"
		);
	}
	inline java::util::Date Calendar::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/util/Date;"
		);
	}
	inline jlong Calendar::getTimeInMillis() const
	{
		return callMethod<jlong>(
			"getTimeInMillis",
			"()J"
		);
	}
	inline android::icu::util::TimeZone Calendar::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	inline JString Calendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline android::icu::util::Calendar_WeekData Calendar::getWeekData() const
	{
		return callObjectMethod(
			"getWeekData",
			"()Landroid/icu/util/Calendar$WeekData;"
		);
	}
	inline jint Calendar::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Calendar::isEquivalentTo(android::icu::util::Calendar arg0) const
	{
		return callMethod<jboolean>(
			"isEquivalentTo",
			"(Landroid/icu/util/Calendar;)Z",
			arg0.object()
		);
	}
	inline jboolean Calendar::isLenient() const
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	inline jboolean Calendar::isSet(jint arg0) const
	{
		return callMethod<jboolean>(
			"isSet",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Calendar::isWeekend() const
	{
		return callMethod<jboolean>(
			"isWeekend",
			"()Z"
		);
	}
	inline jboolean Calendar::isWeekend(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"isWeekend",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	inline void Calendar::roll(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"roll",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void Calendar::roll(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Calendar::set(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Calendar::set(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"set",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Calendar::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	inline void Calendar::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	inline void Calendar::setFirstDayOfWeek(jint arg0) const
	{
		callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	inline void Calendar::setLenient(jboolean arg0) const
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	inline void Calendar::setMinimalDaysInFirstWeek(jint arg0) const
	{
		callMethod<void>(
			"setMinimalDaysInFirstWeek",
			"(I)V",
			arg0
		);
	}
	inline void Calendar::setRepeatedWallTimeOption(jint arg0) const
	{
		callMethod<void>(
			"setRepeatedWallTimeOption",
			"(I)V",
			arg0
		);
	}
	inline void Calendar::setSkippedWallTimeOption(jint arg0) const
	{
		callMethod<void>(
			"setSkippedWallTimeOption",
			"(I)V",
			arg0
		);
	}
	inline void Calendar::setTime(java::util::Date arg0) const
	{
		callMethod<void>(
			"setTime",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	inline void Calendar::setTimeInMillis(jlong arg0) const
	{
		callMethod<void>(
			"setTimeInMillis",
			"(J)V",
			arg0
		);
	}
	inline void Calendar::setTimeZone(android::icu::util::TimeZone arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		);
	}
	inline android::icu::util::Calendar Calendar::setWeekData(android::icu::util::Calendar_WeekData arg0) const
	{
		return callObjectMethod(
			"setWeekData",
			"(Landroid/icu/util/Calendar$WeekData;)Landroid/icu/util/Calendar;",
			arg0.object()
		);
	}
	inline JString Calendar::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
