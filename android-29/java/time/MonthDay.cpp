#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./LocalDate.hpp"
#include "./Month.hpp"
#include "./ZoneId.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./MonthDay.hpp"

namespace java::time
{
	// Fields
	
	// QJniObject forward
	MonthDay::MonthDay(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::MonthDay MonthDay::from(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/MonthDay;",
			arg0.object()
		);
	}
	java::time::MonthDay MonthDay::now()
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"now",
			"()Ljava/time/MonthDay;"
		);
	}
	java::time::MonthDay MonthDay::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"now",
			"(Ljava/time/Clock;)Ljava/time/MonthDay;",
			arg0.object()
		);
	}
	java::time::MonthDay MonthDay::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/MonthDay;",
			arg0.object()
		);
	}
	java::time::MonthDay MonthDay::of(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"of",
			"(II)Ljava/time/MonthDay;",
			arg0,
			arg1
		);
	}
	java::time::MonthDay MonthDay::of(java::time::Month arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"of",
			"(Ljava/time/Month;I)Ljava/time/MonthDay;",
			arg0.object(),
			arg1
		);
	}
	java::time::MonthDay MonthDay::parse(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/MonthDay;",
			arg0
		);
	}
	java::time::MonthDay MonthDay::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/MonthDay;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass MonthDay::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::LocalDate MonthDay::atYear(jint arg0)
	{
		return callObjectMethod(
			"atYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	jint MonthDay::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint MonthDay::compareTo(java::time::MonthDay arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/MonthDay;)I",
			arg0.object()
		);
	}
	jboolean MonthDay::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MonthDay::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint MonthDay::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint MonthDay::getDayOfMonth()
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	jlong MonthDay::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	java::time::Month MonthDay::getMonth()
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint MonthDay::getMonthValue()
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint MonthDay::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MonthDay::isAfter(java::time::MonthDay arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/MonthDay;)Z",
			arg0.object()
		);
	}
	jboolean MonthDay::isBefore(java::time::MonthDay arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/MonthDay;)Z",
			arg0.object()
		);
	}
	jboolean MonthDay::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jboolean MonthDay::isValidYear(jint arg0)
	{
		return callMethod<jboolean>(
			"isValidYear",
			"(I)Z",
			arg0
		);
	}
	jobject MonthDay::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	java::time::temporal::ValueRange MonthDay::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jstring MonthDay::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::time::MonthDay MonthDay::with(java::time::Month arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/Month;)Ljava/time/MonthDay;",
			arg0.object()
		);
	}
	java::time::MonthDay MonthDay::withDayOfMonth(jint arg0)
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/MonthDay;",
			arg0
		);
	}
	java::time::MonthDay MonthDay::withMonth(jint arg0)
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/MonthDay;",
			arg0
		);
	}
} // namespace java::time

