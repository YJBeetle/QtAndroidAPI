#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.hpp"
#include "../text/DateFormatSymbols.hpp"
#include "../time/Instant.hpp"
#include "./Date.hpp"
#include "./Locale.hpp"
#include "./TimeZone.hpp"
#include "./Calendar.hpp"

namespace java::util
{
	// Fields
	jint Calendar::ALL_STYLES()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"ALL_STYLES"
		);
	}
	jint Calendar::AM()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"AM"
		);
	}
	jint Calendar::AM_PM()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"AM_PM"
		);
	}
	jint Calendar::APRIL()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"APRIL"
		);
	}
	jint Calendar::AUGUST()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"AUGUST"
		);
	}
	jint Calendar::DATE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DATE"
		);
	}
	jint Calendar::DAY_OF_MONTH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_MONTH"
		);
	}
	jint Calendar::DAY_OF_WEEK()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_WEEK"
		);
	}
	jint Calendar::DAY_OF_WEEK_IN_MONTH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_WEEK_IN_MONTH"
		);
	}
	jint Calendar::DAY_OF_YEAR()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_YEAR"
		);
	}
	jint Calendar::DECEMBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DECEMBER"
		);
	}
	jint Calendar::DST_OFFSET()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"DST_OFFSET"
		);
	}
	jint Calendar::ERA()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"ERA"
		);
	}
	jint Calendar::FEBRUARY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"FEBRUARY"
		);
	}
	jint Calendar::FIELD_COUNT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"FIELD_COUNT"
		);
	}
	jint Calendar::FRIDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"FRIDAY"
		);
	}
	jint Calendar::HOUR()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"HOUR"
		);
	}
	jint Calendar::HOUR_OF_DAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"HOUR_OF_DAY"
		);
	}
	jint Calendar::JANUARY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"JANUARY"
		);
	}
	jint Calendar::JULY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"JULY"
		);
	}
	jint Calendar::JUNE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"JUNE"
		);
	}
	jint Calendar::LONG()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"LONG"
		);
	}
	jint Calendar::LONG_FORMAT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"LONG_FORMAT"
		);
	}
	jint Calendar::LONG_STANDALONE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"LONG_STANDALONE"
		);
	}
	jint Calendar::MARCH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MARCH"
		);
	}
	jint Calendar::MAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MAY"
		);
	}
	jint Calendar::MILLISECOND()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MILLISECOND"
		);
	}
	jint Calendar::MINUTE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MINUTE"
		);
	}
	jint Calendar::MONDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MONDAY"
		);
	}
	jint Calendar::MONTH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"MONTH"
		);
	}
	jint Calendar::NARROW_FORMAT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"NARROW_FORMAT"
		);
	}
	jint Calendar::NARROW_STANDALONE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"NARROW_STANDALONE"
		);
	}
	jint Calendar::NOVEMBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"NOVEMBER"
		);
	}
	jint Calendar::OCTOBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"OCTOBER"
		);
	}
	jint Calendar::PM()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"PM"
		);
	}
	jint Calendar::SATURDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SATURDAY"
		);
	}
	jint Calendar::SECOND()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SECOND"
		);
	}
	jint Calendar::SEPTEMBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SEPTEMBER"
		);
	}
	jint Calendar::SHORT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SHORT"
		);
	}
	jint Calendar::SHORT_FORMAT()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SHORT_FORMAT"
		);
	}
	jint Calendar::SHORT_STANDALONE()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SHORT_STANDALONE"
		);
	}
	jint Calendar::SUNDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"SUNDAY"
		);
	}
	jint Calendar::THURSDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"THURSDAY"
		);
	}
	jint Calendar::TUESDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"TUESDAY"
		);
	}
	jint Calendar::UNDECIMBER()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"UNDECIMBER"
		);
	}
	jint Calendar::WEDNESDAY()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"WEDNESDAY"
		);
	}
	jint Calendar::WEEK_OF_MONTH()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"WEEK_OF_MONTH"
		);
	}
	jint Calendar::WEEK_OF_YEAR()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"WEEK_OF_YEAR"
		);
	}
	jint Calendar::YEAR()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"YEAR"
		);
	}
	jint Calendar::ZONE_OFFSET()
	{
		return getStaticField<jint>(
			"java.util.Calendar",
			"ZONE_OFFSET"
		);
	}
	
	// QJniObject forward
	Calendar::Calendar(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Calendar::getAvailableCalendarTypes()
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getAvailableCalendarTypes",
			"()Ljava/util/Set;"
		);
	}
	JArray Calendar::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	java::util::Calendar Calendar::getInstance()
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"()Ljava/util/Calendar;"
		);
	}
	java::util::Calendar Calendar::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/util/Calendar;",
			arg0.object()
		);
	}
	java::util::Calendar Calendar::getInstance(java::util::TimeZone arg0)
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"(Ljava/util/TimeZone;)Ljava/util/Calendar;",
			arg0.object()
		);
	}
	java::util::Calendar Calendar::getInstance(java::util::TimeZone arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;",
			arg0.object(),
			arg1.object()
		);
	}
	void Calendar::add(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Calendar::after(JObject arg0) const
	{
		return callMethod<jboolean>(
			"after",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean Calendar::before(JObject arg0) const
	{
		return callMethod<jboolean>(
			"before",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void Calendar::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Calendar::clear(jint arg0) const
	{
		callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	JObject Calendar::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jint Calendar::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint Calendar::compareTo(java::util::Calendar arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/util/Calendar;)I",
			arg0.object()
		);
	}
	jboolean Calendar::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Calendar::get(jint arg0) const
	{
		return callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getActualMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getActualMinimum(jint arg0) const
	{
		return callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	JString Calendar::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	JString Calendar::getDisplayName(jint arg0, jint arg1, java::util::Locale arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(IILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	JObject Calendar::getDisplayNames(jint arg0, jint arg1, java::util::Locale arg2) const
	{
		return callObjectMethod(
			"getDisplayNames",
			"(IILjava/util/Locale;)Ljava/util/Map;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint Calendar::getFirstDayOfWeek() const
	{
		return callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	jint Calendar::getGreatestMinimum(jint arg0) const
	{
		return callMethod<jint>(
			"getGreatestMinimum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getLeastMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getLeastMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getMinimalDaysInFirstWeek() const
	{
		return callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I"
		);
	}
	jint Calendar::getMinimum(jint arg0) const
	{
		return callMethod<jint>(
			"getMinimum",
			"(I)I",
			arg0
		);
	}
	java::util::Date Calendar::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/util/Date;"
		);
	}
	jlong Calendar::getTimeInMillis() const
	{
		return callMethod<jlong>(
			"getTimeInMillis",
			"()J"
		);
	}
	java::util::TimeZone Calendar::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
		);
	}
	jint Calendar::getWeekYear() const
	{
		return callMethod<jint>(
			"getWeekYear",
			"()I"
		);
	}
	jint Calendar::getWeeksInWeekYear() const
	{
		return callMethod<jint>(
			"getWeeksInWeekYear",
			"()I"
		);
	}
	jint Calendar::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Calendar::isLenient() const
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	jboolean Calendar::isSet(jint arg0) const
	{
		return callMethod<jboolean>(
			"isSet",
			"(I)Z",
			arg0
		);
	}
	jboolean Calendar::isWeekDateSupported() const
	{
		return callMethod<jboolean>(
			"isWeekDateSupported",
			"()Z"
		);
	}
	void Calendar::roll(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"roll",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Calendar::roll(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Calendar::set(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"set",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	void Calendar::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	void Calendar::setFirstDayOfWeek(jint arg0) const
	{
		callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	void Calendar::setLenient(jboolean arg0) const
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	void Calendar::setMinimalDaysInFirstWeek(jint arg0) const
	{
		callMethod<void>(
			"setMinimalDaysInFirstWeek",
			"(I)V",
			arg0
		);
	}
	void Calendar::setTime(java::util::Date arg0) const
	{
		callMethod<void>(
			"setTime",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void Calendar::setTimeInMillis(jlong arg0) const
	{
		callMethod<void>(
			"setTimeInMillis",
			"(J)V",
			arg0
		);
	}
	void Calendar::setTimeZone(java::util::TimeZone arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/util/TimeZone;)V",
			arg0.object()
		);
	}
	void Calendar::setWeekDate(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setWeekDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::Instant Calendar::toInstant() const
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	JString Calendar::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

