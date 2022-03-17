#pragma once

#include "../../../JString.hpp"
#include "./Time.def.hpp"

namespace android::text::format
{
	// Fields
	inline jint Time::EPOCH_JULIAN_DAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"EPOCH_JULIAN_DAY"
		);
	}
	inline jint Time::FRIDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"FRIDAY"
		);
	}
	inline jint Time::HOUR()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"HOUR"
		);
	}
	inline jint Time::MINUTE()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MINUTE"
		);
	}
	inline jint Time::MONDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MONDAY"
		);
	}
	inline jint Time::MONDAY_BEFORE_JULIAN_EPOCH()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MONDAY_BEFORE_JULIAN_EPOCH"
		);
	}
	inline jint Time::MONTH()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MONTH"
		);
	}
	inline jint Time::MONTH_DAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MONTH_DAY"
		);
	}
	inline jint Time::SATURDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"SATURDAY"
		);
	}
	inline jint Time::SECOND()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"SECOND"
		);
	}
	inline jint Time::SUNDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"SUNDAY"
		);
	}
	inline jint Time::THURSDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"THURSDAY"
		);
	}
	inline JString Time::TIMEZONE_UTC()
	{
		return getStaticObjectField(
			"android.text.format.Time",
			"TIMEZONE_UTC",
			"Ljava/lang/String;"
		);
	}
	inline jint Time::TUESDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"TUESDAY"
		);
	}
	inline jint Time::WEDNESDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"WEDNESDAY"
		);
	}
	inline jint Time::WEEK_DAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"WEEK_DAY"
		);
	}
	inline jint Time::WEEK_NUM()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"WEEK_NUM"
		);
	}
	inline jint Time::YEAR()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"YEAR"
		);
	}
	inline jint Time::YEAR_DAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"YEAR_DAY"
		);
	}
	inline jboolean Time::allDay()
	{
		return getField<jboolean>(
			"allDay"
		);
	}
	inline jlong Time::gmtoff()
	{
		return getField<jlong>(
			"gmtoff"
		);
	}
	inline jint Time::hour()
	{
		return getField<jint>(
			"hour"
		);
	}
	inline jint Time::isDst()
	{
		return getField<jint>(
			"isDst"
		);
	}
	inline jint Time::minute()
	{
		return getField<jint>(
			"minute"
		);
	}
	inline jint Time::month()
	{
		return getField<jint>(
			"month"
		);
	}
	inline jint Time::monthDay()
	{
		return getField<jint>(
			"monthDay"
		);
	}
	inline jint Time::second()
	{
		return getField<jint>(
			"second"
		);
	}
	inline JString Time::timezone()
	{
		return getObjectField(
			"timezone",
			"Ljava/lang/String;"
		);
	}
	inline jint Time::weekDay()
	{
		return getField<jint>(
			"weekDay"
		);
	}
	inline jint Time::year()
	{
		return getField<jint>(
			"year"
		);
	}
	inline jint Time::yearDay()
	{
		return getField<jint>(
			"yearDay"
		);
	}
	
	// Constructors
	inline Time::Time()
		: JObject(
			"android.text.format.Time",
			"()V"
		) {}
	inline Time::Time(android::text::format::Time &arg0)
		: JObject(
			"android.text.format.Time",
			"(Landroid/text/format/Time;)V",
			arg0.object()
		) {}
	inline Time::Time(JString arg0)
		: JObject(
			"android.text.format.Time",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint Time::compare(android::text::format::Time arg0, android::text::format::Time arg1)
	{
		return callStaticMethod<jint>(
			"android.text.format.Time",
			"compare",
			"(Landroid/text/format/Time;Landroid/text/format/Time;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString Time::getCurrentTimezone()
	{
		return callStaticObjectMethod(
			"android.text.format.Time",
			"getCurrentTimezone",
			"()Ljava/lang/String;"
		);
	}
	inline jint Time::getJulianDay(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jint>(
			"android.text.format.Time",
			"getJulianDay",
			"(JJ)I",
			arg0,
			arg1
		);
	}
	inline jint Time::getJulianMondayFromWeeksSinceEpoch(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.text.format.Time",
			"getJulianMondayFromWeeksSinceEpoch",
			"(I)I",
			arg0
		);
	}
	inline jint Time::getWeeksSinceEpochFromJulianDay(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.text.format.Time",
			"getWeeksSinceEpochFromJulianDay",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jboolean Time::isEpoch(android::text::format::Time arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.format.Time",
			"isEpoch",
			"(Landroid/text/format/Time;)Z",
			arg0.object()
		);
	}
	inline jboolean Time::after(android::text::format::Time arg0) const
	{
		return callMethod<jboolean>(
			"after",
			"(Landroid/text/format/Time;)Z",
			arg0.object()
		);
	}
	inline jboolean Time::before(android::text::format::Time arg0) const
	{
		return callMethod<jboolean>(
			"before",
			"(Landroid/text/format/Time;)Z",
			arg0.object()
		);
	}
	inline void Time::clear(JString arg0) const
	{
		callMethod<void>(
			"clear",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString Time::format(JString arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Time::format2445() const
	{
		return callObjectMethod(
			"format2445",
			"()Ljava/lang/String;"
		);
	}
	inline JString Time::format3339(jboolean arg0) const
	{
		return callObjectMethod(
			"format3339",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
	inline jint Time::getActualMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	inline jint Time::getWeekNumber() const
	{
		return callMethod<jint>(
			"getWeekNumber",
			"()I"
		);
	}
	inline jlong Time::normalize(jboolean arg0) const
	{
		return callMethod<jlong>(
			"normalize",
			"(Z)J",
			arg0
		);
	}
	inline jboolean Time::parse(JString arg0) const
	{
		return callMethod<jboolean>(
			"parse",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean Time::parse3339(JString arg0) const
	{
		return callMethod<jboolean>(
			"parse3339",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void Time::set(android::text::format::Time arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/text/format/Time;)V",
			arg0.object()
		);
	}
	inline void Time::set(jlong arg0) const
	{
		callMethod<void>(
			"set",
			"(J)V",
			arg0
		);
	}
	inline void Time::set(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"set",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Time::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	inline jlong Time::setJulianDay(jint arg0) const
	{
		return callMethod<jlong>(
			"setJulianDay",
			"(I)J",
			arg0
		);
	}
	inline void Time::setToNow() const
	{
		callMethod<void>(
			"setToNow",
			"()V"
		);
	}
	inline void Time::switchTimezone(JString arg0) const
	{
		callMethod<void>(
			"switchTimezone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jlong Time::toMillis(jboolean arg0) const
	{
		return callMethod<jlong>(
			"toMillis",
			"(Z)J",
			arg0
		);
	}
	inline JString Time::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text::format

// Base class headers

