#include "../io/ObjectInputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.hpp"
#include "./LocalDate.hpp"
#include "./Month.hpp"
#include "./MonthDay.hpp"
#include "./YearMonth.hpp"
#include "./ZoneId.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./Year.hpp"

namespace java::time
{
	// Fields
	jint Year::MAX_VALUE()
	{
		return getStaticField<jint>(
			"java.time.Year",
			"MAX_VALUE"
		);
	}
	jint Year::MIN_VALUE()
	{
		return getStaticField<jint>(
			"java.time.Year",
			"MIN_VALUE"
		);
	}
	
	// QJniObject forward
	Year::Year(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::Year Year::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Year;",
			arg0.object()
		);
	}
	jboolean Year::isLeap(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.time.Year",
			"isLeap",
			"(J)Z",
			arg0
		);
	}
	java::time::Year Year::now()
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"now",
			"()Ljava/time/Year;"
		);
	}
	java::time::Year Year::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"now",
			"(Ljava/time/Clock;)Ljava/time/Year;",
			arg0.object()
		);
	}
	java::time::Year Year::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/Year;",
			arg0.object()
		);
	}
	java::time::Year Year::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"of",
			"(I)Ljava/time/Year;",
			arg0
		);
	}
	java::time::Year Year::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Year;",
			arg0.object<jstring>()
		);
	}
	java::time::Year Year::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.Year",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/Year;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject Year::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::LocalDate Year::atDay(jint arg0) const
	{
		return callObjectMethod(
			"atDay",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::YearMonth Year::atMonth(jint arg0) const
	{
		return callObjectMethod(
			"atMonth",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth Year::atMonth(java::time::Month arg0) const
	{
		return callObjectMethod(
			"atMonth",
			"(Ljava/time/Month;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::LocalDate Year::atMonthDay(java::time::MonthDay arg0) const
	{
		return callObjectMethod(
			"atMonthDay",
			"(Ljava/time/MonthDay;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	jint Year::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint Year::compareTo(java::time::Year arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/Year;)I",
			arg0.object()
		);
	}
	jboolean Year::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Year::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint Year::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jlong Year::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint Year::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jint Year::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Year::isAfter(java::time::Year arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/Year;)Z",
			arg0.object()
		);
	}
	jboolean Year::isBefore(java::time::Year arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/Year;)Z",
			arg0.object()
		);
	}
	jboolean Year::isLeap() const
	{
		return callMethod<jboolean>(
			"isLeap",
			"()Z"
		);
	}
	jboolean Year::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jboolean Year::isValidMonthDay(java::time::MonthDay arg0) const
	{
		return callMethod<jboolean>(
			"isValidMonthDay",
			"(Ljava/time/MonthDay;)Z",
			arg0.object()
		);
	}
	jint Year::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	java::time::Year Year::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Year;",
			arg0.object()
		);
	}
	java::time::Year Year::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Year;",
			arg0,
			arg1.object()
		);
	}
	java::time::Year Year::minusYears(jlong arg0) const
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/Year;",
			arg0
		);
	}
	java::time::Year Year::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Year;",
			arg0.object()
		);
	}
	java::time::Year Year::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Year;",
			arg0,
			arg1.object()
		);
	}
	java::time::Year Year::plusYears(jlong arg0) const
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/Year;",
			arg0
		);
	}
	JObject Year::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::time::temporal::ValueRange Year::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	JString Year::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jlong Year::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::Year Year::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/Year;",
			arg0.object()
		);
	}
	java::time::Year Year::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/Year;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time

