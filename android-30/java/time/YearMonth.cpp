#include "../io/ObjectInputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.hpp"
#include "./LocalDate.hpp"
#include "./Month.hpp"
#include "./ZoneId.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./YearMonth.hpp"

namespace java::time
{
	// Fields
	
	// Constructors
	
	// Methods
	java::time::YearMonth YearMonth::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::YearMonth YearMonth::now()
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"now",
			"()Ljava/time/YearMonth;"
		);
	}
	java::time::YearMonth YearMonth::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"now",
			"(Ljava/time/Clock;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::YearMonth YearMonth::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::YearMonth YearMonth::of(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"of",
			"(II)Ljava/time/YearMonth;",
			arg0,
			arg1
		);
	}
	java::time::YearMonth YearMonth::of(jint arg0, java::time::Month arg1)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"of",
			"(ILjava/time/Month;)Ljava/time/YearMonth;",
			arg0,
			arg1.object()
		);
	}
	java::time::YearMonth YearMonth::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/YearMonth;",
			arg0.object<jstring>()
		);
	}
	java::time::YearMonth YearMonth::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/YearMonth;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject YearMonth::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::LocalDate YearMonth::atDay(jint arg0) const
	{
		return callObjectMethod(
			"atDay",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate YearMonth::atEndOfMonth() const
	{
		return callObjectMethod(
			"atEndOfMonth",
			"()Ljava/time/LocalDate;"
		);
	}
	jint YearMonth::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint YearMonth::compareTo(java::time::YearMonth arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/YearMonth;)I",
			arg0.object()
		);
	}
	jboolean YearMonth::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString YearMonth::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint YearMonth::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jlong YearMonth::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	java::time::Month YearMonth::getMonth() const
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint YearMonth::getMonthValue() const
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint YearMonth::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint YearMonth::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean YearMonth::isAfter(java::time::YearMonth arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/YearMonth;)Z",
			arg0.object()
		);
	}
	jboolean YearMonth::isBefore(java::time::YearMonth arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/YearMonth;)Z",
			arg0.object()
		);
	}
	jboolean YearMonth::isLeapYear() const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"()Z"
		);
	}
	jboolean YearMonth::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jboolean YearMonth::isValidDay(jint arg0) const
	{
		return callMethod<jboolean>(
			"isValidDay",
			"(I)Z",
			arg0
		);
	}
	jint YearMonth::lengthOfMonth() const
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	jint YearMonth::lengthOfYear() const
	{
		return callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	java::time::YearMonth YearMonth::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::YearMonth YearMonth::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/YearMonth;",
			arg0,
			arg1.object()
		);
	}
	java::time::YearMonth YearMonth::minusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth YearMonth::minusYears(jlong arg0) const
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth YearMonth::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::YearMonth YearMonth::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/YearMonth;",
			arg0,
			arg1.object()
		);
	}
	java::time::YearMonth YearMonth::plusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth YearMonth::plusYears(jlong arg0) const
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	JObject YearMonth::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::time::temporal::ValueRange YearMonth::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	JString YearMonth::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jlong YearMonth::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::YearMonth YearMonth::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::YearMonth YearMonth::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/YearMonth;",
			arg0.object(),
			arg1
		);
	}
	java::time::YearMonth YearMonth::withMonth(jint arg0) const
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth YearMonth::withYear(jint arg0) const
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
} // namespace java::time

