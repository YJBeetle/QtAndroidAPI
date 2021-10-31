#include "../io/ObjectInputStream.hpp"
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
	
	// QAndroidJniObject forward
	YearMonth::YearMonth(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::YearMonth YearMonth::from(__JniBaseClass arg0)
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
	java::time::YearMonth YearMonth::parse(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth YearMonth::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.YearMonth",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/YearMonth;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass YearMonth::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::LocalDate YearMonth::atDay(jint arg0)
	{
		return callObjectMethod(
			"atDay",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate YearMonth::atEndOfMonth()
	{
		return callObjectMethod(
			"atEndOfMonth",
			"()Ljava/time/LocalDate;"
		);
	}
	jint YearMonth::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint YearMonth::compareTo(java::time::YearMonth arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/YearMonth;)I",
			arg0.object()
		);
	}
	jboolean YearMonth::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring YearMonth::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint YearMonth::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jlong YearMonth::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	java::time::Month YearMonth::getMonth()
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint YearMonth::getMonthValue()
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint YearMonth::getYear()
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint YearMonth::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean YearMonth::isAfter(java::time::YearMonth arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/YearMonth;)Z",
			arg0.object()
		);
	}
	jboolean YearMonth::isBefore(java::time::YearMonth arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/YearMonth;)Z",
			arg0.object()
		);
	}
	jboolean YearMonth::isLeapYear()
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"()Z"
		);
	}
	jboolean YearMonth::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jboolean YearMonth::isValidDay(jint arg0)
	{
		return callMethod<jboolean>(
			"isValidDay",
			"(I)Z",
			arg0
		);
	}
	jint YearMonth::lengthOfMonth()
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	jint YearMonth::lengthOfYear()
	{
		return callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	java::time::YearMonth YearMonth::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::YearMonth YearMonth::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/YearMonth;",
			arg0,
			arg1.object()
		);
	}
	java::time::YearMonth YearMonth::minusMonths(jlong arg0)
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth YearMonth::minusYears(jlong arg0)
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth YearMonth::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::YearMonth YearMonth::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/YearMonth;",
			arg0,
			arg1.object()
		);
	}
	java::time::YearMonth YearMonth::plusMonths(jlong arg0)
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth YearMonth::plusYears(jlong arg0)
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/YearMonth;",
			arg0
		);
	}
	jobject YearMonth::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	java::time::temporal::ValueRange YearMonth::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jstring YearMonth::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong YearMonth::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::YearMonth YearMonth::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	java::time::YearMonth YearMonth::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/YearMonth;",
			arg0.object(),
			arg1
		);
	}
	java::time::YearMonth YearMonth::withMonth(jint arg0)
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
	java::time::YearMonth YearMonth::withYear(jint arg0)
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
} // namespace java::time

