#include "../../../JString.hpp"
#include "./Time.hpp"

namespace android::text::format
{
	// Fields
	jint Time::EPOCH_JULIAN_DAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"EPOCH_JULIAN_DAY"
		);
	}
	jint Time::FRIDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"FRIDAY"
		);
	}
	jint Time::HOUR()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"HOUR"
		);
	}
	jint Time::MINUTE()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MINUTE"
		);
	}
	jint Time::MONDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MONDAY"
		);
	}
	jint Time::MONDAY_BEFORE_JULIAN_EPOCH()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MONDAY_BEFORE_JULIAN_EPOCH"
		);
	}
	jint Time::MONTH()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MONTH"
		);
	}
	jint Time::MONTH_DAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"MONTH_DAY"
		);
	}
	jint Time::SATURDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"SATURDAY"
		);
	}
	jint Time::SECOND()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"SECOND"
		);
	}
	jint Time::SUNDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"SUNDAY"
		);
	}
	jint Time::THURSDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"THURSDAY"
		);
	}
	JString Time::TIMEZONE_UTC()
	{
		return getStaticObjectField(
			"android.text.format.Time",
			"TIMEZONE_UTC",
			"Ljava/lang/String;"
		);
	}
	jint Time::TUESDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"TUESDAY"
		);
	}
	jint Time::WEDNESDAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"WEDNESDAY"
		);
	}
	jint Time::WEEK_DAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"WEEK_DAY"
		);
	}
	jint Time::WEEK_NUM()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"WEEK_NUM"
		);
	}
	jint Time::YEAR()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"YEAR"
		);
	}
	jint Time::YEAR_DAY()
	{
		return getStaticField<jint>(
			"android.text.format.Time",
			"YEAR_DAY"
		);
	}
	jboolean Time::allDay()
	{
		return getField<jboolean>(
			"allDay"
		);
	}
	jlong Time::gmtoff()
	{
		return getField<jlong>(
			"gmtoff"
		);
	}
	jint Time::hour()
	{
		return getField<jint>(
			"hour"
		);
	}
	jint Time::isDst()
	{
		return getField<jint>(
			"isDst"
		);
	}
	jint Time::minute()
	{
		return getField<jint>(
			"minute"
		);
	}
	jint Time::month()
	{
		return getField<jint>(
			"month"
		);
	}
	jint Time::monthDay()
	{
		return getField<jint>(
			"monthDay"
		);
	}
	jint Time::second()
	{
		return getField<jint>(
			"second"
		);
	}
	JString Time::timezone()
	{
		return getObjectField(
			"timezone",
			"Ljava/lang/String;"
		);
	}
	jint Time::weekDay()
	{
		return getField<jint>(
			"weekDay"
		);
	}
	jint Time::year()
	{
		return getField<jint>(
			"year"
		);
	}
	jint Time::yearDay()
	{
		return getField<jint>(
			"yearDay"
		);
	}
	
	// QJniObject forward
	Time::Time(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Time::Time()
		: JObject(
			"android.text.format.Time",
			"()V"
		) {}
	Time::Time(android::text::format::Time &arg0)
		: JObject(
			"android.text.format.Time",
			"(Landroid/text/format/Time;)V",
			arg0.object()
		) {}
	Time::Time(JString arg0)
		: JObject(
			"android.text.format.Time",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint Time::compare(android::text::format::Time arg0, android::text::format::Time arg1)
	{
		return callStaticMethod<jint>(
			"android.text.format.Time",
			"compare",
			"(Landroid/text/format/Time;Landroid/text/format/Time;)I",
			arg0.object(),
			arg1.object()
		);
	}
	JString Time::getCurrentTimezone()
	{
		return callStaticObjectMethod(
			"android.text.format.Time",
			"getCurrentTimezone",
			"()Ljava/lang/String;"
		);
	}
	jint Time::getJulianDay(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jint>(
			"android.text.format.Time",
			"getJulianDay",
			"(JJ)I",
			arg0,
			arg1
		);
	}
	jint Time::getJulianMondayFromWeeksSinceEpoch(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.text.format.Time",
			"getJulianMondayFromWeeksSinceEpoch",
			"(I)I",
			arg0
		);
	}
	jint Time::getWeeksSinceEpochFromJulianDay(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.text.format.Time",
			"getWeeksSinceEpochFromJulianDay",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean Time::isEpoch(android::text::format::Time arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.format.Time",
			"isEpoch",
			"(Landroid/text/format/Time;)Z",
			arg0.object()
		);
	}
	jboolean Time::after(android::text::format::Time arg0) const
	{
		return callMethod<jboolean>(
			"after",
			"(Landroid/text/format/Time;)Z",
			arg0.object()
		);
	}
	jboolean Time::before(android::text::format::Time arg0) const
	{
		return callMethod<jboolean>(
			"before",
			"(Landroid/text/format/Time;)Z",
			arg0.object()
		);
	}
	void Time::clear(JString arg0) const
	{
		callMethod<void>(
			"clear",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString Time::format(JString arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Time::format2445() const
	{
		return callObjectMethod(
			"format2445",
			"()Ljava/lang/String;"
		);
	}
	JString Time::format3339(jboolean arg0) const
	{
		return callObjectMethod(
			"format3339",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
	jint Time::getActualMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	jint Time::getWeekNumber() const
	{
		return callMethod<jint>(
			"getWeekNumber",
			"()I"
		);
	}
	jlong Time::normalize(jboolean arg0) const
	{
		return callMethod<jlong>(
			"normalize",
			"(Z)J",
			arg0
		);
	}
	jboolean Time::parse(JString arg0) const
	{
		return callMethod<jboolean>(
			"parse",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Time::parse3339(JString arg0) const
	{
		return callMethod<jboolean>(
			"parse3339",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void Time::set(android::text::format::Time arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/text/format/Time;)V",
			arg0.object()
		);
	}
	void Time::set(jlong arg0) const
	{
		callMethod<void>(
			"set",
			"(J)V",
			arg0
		);
	}
	void Time::set(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"set",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Time::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	jlong Time::setJulianDay(jint arg0) const
	{
		return callMethod<jlong>(
			"setJulianDay",
			"(I)J",
			arg0
		);
	}
	void Time::setToNow() const
	{
		callMethod<void>(
			"setToNow",
			"()V"
		);
	}
	void Time::switchTimezone(JString arg0) const
	{
		callMethod<void>(
			"switchTimezone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jlong Time::toMillis(jboolean arg0) const
	{
		return callMethod<jlong>(
			"toMillis",
			"(Z)J",
			arg0
		);
	}
	JString Time::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text::format

