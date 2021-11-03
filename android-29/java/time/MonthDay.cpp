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
#include "./MonthDay.hpp"

namespace java::time
{
	// Fields
	
	// QAndroidJniObject forward
	MonthDay::MonthDay(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::MonthDay MonthDay::from(JObject arg0)
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
	java::time::MonthDay MonthDay::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/MonthDay;",
			arg0.object<jstring>()
		);
	}
	java::time::MonthDay MonthDay::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/MonthDay;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject MonthDay::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::LocalDate MonthDay::atYear(jint arg0) const
	{
		return callObjectMethod(
			"atYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	jint MonthDay::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint MonthDay::compareTo(java::time::MonthDay arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/MonthDay;)I",
			arg0.object()
		);
	}
	jboolean MonthDay::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString MonthDay::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint MonthDay::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint MonthDay::getDayOfMonth() const
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	jlong MonthDay::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	java::time::Month MonthDay::getMonth() const
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint MonthDay::getMonthValue() const
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint MonthDay::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MonthDay::isAfter(java::time::MonthDay arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/MonthDay;)Z",
			arg0.object()
		);
	}
	jboolean MonthDay::isBefore(java::time::MonthDay arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/MonthDay;)Z",
			arg0.object()
		);
	}
	jboolean MonthDay::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jboolean MonthDay::isValidYear(jint arg0) const
	{
		return callMethod<jboolean>(
			"isValidYear",
			"(I)Z",
			arg0
		);
	}
	JObject MonthDay::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::time::temporal::ValueRange MonthDay::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	JString MonthDay::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::time::MonthDay MonthDay::with(java::time::Month arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/Month;)Ljava/time/MonthDay;",
			arg0.object()
		);
	}
	java::time::MonthDay MonthDay::withDayOfMonth(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/MonthDay;",
			arg0
		);
	}
	java::time::MonthDay MonthDay::withMonth(jint arg0) const
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/MonthDay;",
			arg0
		);
	}
} // namespace java::time

