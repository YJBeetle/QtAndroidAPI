#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "../text/DateFormatSymbols.def.hpp"
#include "../time/Instant.def.hpp"
#include "./Date.def.hpp"
#include "./Locale.def.hpp"
#include "./TimeZone.def.hpp"
#include "./Calendar.def.hpp"

namespace java::util
{
	// Fields
	inline jint Calendar::ALL_STYLES()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"ALL_STYLES"
		);
	}
	inline jint Calendar::AM()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"AM"
		);
	}
	inline jint Calendar::AM_PM()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"AM_PM"
		);
	}
	inline jint Calendar::APRIL()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"APRIL"
		);
	}
	inline jint Calendar::AUGUST()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"AUGUST"
		);
	}
	inline jint Calendar::DATE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DATE"
		);
	}
	inline jint Calendar::DAY_OF_MONTH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_MONTH"
		);
	}
	inline jint Calendar::DAY_OF_WEEK()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_WEEK"
		);
	}
	inline jint Calendar::DAY_OF_WEEK_IN_MONTH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_WEEK_IN_MONTH"
		);
	}
	inline jint Calendar::DAY_OF_YEAR()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_YEAR"
		);
	}
	inline jint Calendar::DECEMBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DECEMBER"
		);
	}
	inline jint Calendar::DST_OFFSET()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DST_OFFSET"
		);
	}
	inline jint Calendar::ERA()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"ERA"
		);
	}
	inline jint Calendar::FEBRUARY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"FEBRUARY"
		);
	}
	inline jint Calendar::FIELD_COUNT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"FIELD_COUNT"
		);
	}
	inline jint Calendar::FRIDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"FRIDAY"
		);
	}
	inline jint Calendar::HOUR()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"HOUR"
		);
	}
	inline jint Calendar::HOUR_OF_DAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"HOUR_OF_DAY"
		);
	}
	inline jint Calendar::JANUARY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"JANUARY"
		);
	}
	inline jint Calendar::JULY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"JULY"
		);
	}
	inline jint Calendar::JUNE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"JUNE"
		);
	}
	inline jint Calendar::LONG()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"LONG"
		);
	}
	inline jint Calendar::LONG_FORMAT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"LONG_FORMAT"
		);
	}
	inline jint Calendar::LONG_STANDALONE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"LONG_STANDALONE"
		);
	}
	inline jint Calendar::MARCH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MARCH"
		);
	}
	inline jint Calendar::MAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MAY"
		);
	}
	inline jint Calendar::MILLISECOND()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MILLISECOND"
		);
	}
	inline jint Calendar::MINUTE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MINUTE"
		);
	}
	inline jint Calendar::MONDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MONDAY"
		);
	}
	inline jint Calendar::MONTH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MONTH"
		);
	}
	inline jint Calendar::NARROW_FORMAT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"NARROW_FORMAT"
		);
	}
	inline jint Calendar::NARROW_STANDALONE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"NARROW_STANDALONE"
		);
	}
	inline jint Calendar::NOVEMBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"NOVEMBER"
		);
	}
	inline jint Calendar::OCTOBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"OCTOBER"
		);
	}
	inline jint Calendar::PM()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"PM"
		);
	}
	inline jint Calendar::SATURDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SATURDAY"
		);
	}
	inline jint Calendar::SECOND()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SECOND"
		);
	}
	inline jint Calendar::SEPTEMBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SEPTEMBER"
		);
	}
	inline jint Calendar::SHORT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SHORT"
		);
	}
	inline jint Calendar::SHORT_FORMAT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SHORT_FORMAT"
		);
	}
	inline jint Calendar::SHORT_STANDALONE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SHORT_STANDALONE"
		);
	}
	inline jint Calendar::SUNDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SUNDAY"
		);
	}
	inline jint Calendar::THURSDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"THURSDAY"
		);
	}
	inline jint Calendar::TUESDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"TUESDAY"
		);
	}
	inline jint Calendar::UNDECIMBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"UNDECIMBER"
		);
	}
	inline jint Calendar::WEDNESDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"WEDNESDAY"
		);
	}
	inline jint Calendar::WEEK_OF_MONTH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"WEEK_OF_MONTH"
		);
	}
	inline jint Calendar::WEEK_OF_YEAR()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"WEEK_OF_YEAR"
		);
	}
	inline jint Calendar::YEAR()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"YEAR"
		);
	}
	inline jint Calendar::ZONE_OFFSET()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"ZONE_OFFSET"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject Calendar::getAvailableCalendarTypes()
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getAvailableCalendarTypes",
			"()Ljava/util/Set;"
		);
	}
	inline JArray Calendar::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline java::util::Calendar Calendar::getInstance()
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"()Ljava/util/Calendar;"
		);
	}
	inline java::util::Calendar Calendar::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/util/Calendar;",
			arg0.object()
		);
	}
	inline java::util::Calendar Calendar::getInstance(java::util::TimeZone arg0)
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"(Ljava/util/TimeZone;)Ljava/util/Calendar;",
			arg0.object()
		);
	}
	inline java::util::Calendar Calendar::getInstance(java::util::TimeZone arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;",
			arg0.object(),
			arg1.object()
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
	inline jint Calendar::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Calendar::compareTo(java::util::Calendar arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/util/Calendar;)I",
			arg0.object()
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
	inline JString Calendar::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	inline JString Calendar::getDisplayName(jint arg0, jint arg1, java::util::Locale arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(IILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline JObject Calendar::getDisplayNames(jint arg0, jint arg1, java::util::Locale arg2) const
	{
		return callObjectMethod(
			"getDisplayNames",
			"(IILjava/util/Locale;)Ljava/util/Map;",
			arg0,
			arg1,
			arg2.object()
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
	inline java::util::TimeZone Calendar::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
		);
	}
	inline jint Calendar::getWeekYear() const
	{
		return callMethod<jint>(
			"getWeekYear",
			"()I"
		);
	}
	inline jint Calendar::getWeeksInWeekYear() const
	{
		return callMethod<jint>(
			"getWeeksInWeekYear",
			"()I"
		);
	}
	inline jint Calendar::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
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
	inline jboolean Calendar::isWeekDateSupported() const
	{
		return callMethod<jboolean>(
			"isWeekDateSupported",
			"()Z"
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
	inline void Calendar::setTimeZone(java::util::TimeZone arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/util/TimeZone;)V",
			arg0.object()
		);
	}
	inline void Calendar::setWeekDate(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setWeekDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::Instant Calendar::toInstant() const
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	inline JString Calendar::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
