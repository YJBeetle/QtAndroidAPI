#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.def.hpp"
#include "./LocalDate.def.hpp"
#include "./Month.def.hpp"
#include "./ZoneId.def.hpp"
#include "./format/DateTimeFormatter.def.hpp"
#include "./temporal/ValueRange.def.hpp"
#include "./MonthDay.def.hpp"

namespace java::time
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::MonthDay MonthDay::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/MonthDay;",
			arg0.object()
		);
	}
	inline java::time::MonthDay MonthDay::now()
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"now",
			"()Ljava/time/MonthDay;"
		);
	}
	inline java::time::MonthDay MonthDay::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"now",
			"(Ljava/time/Clock;)Ljava/time/MonthDay;",
			arg0.object()
		);
	}
	inline java::time::MonthDay MonthDay::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/MonthDay;",
			arg0.object()
		);
	}
	inline java::time::MonthDay MonthDay::of(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"of",
			"(II)Ljava/time/MonthDay;",
			arg0,
			arg1
		);
	}
	inline java::time::MonthDay MonthDay::of(java::time::Month arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"of",
			"(Ljava/time/Month;I)Ljava/time/MonthDay;",
			arg0.object(),
			arg1
		);
	}
	inline java::time::MonthDay MonthDay::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/MonthDay;",
			arg0.object<jstring>()
		);
	}
	inline java::time::MonthDay MonthDay::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.MonthDay",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/MonthDay;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject MonthDay::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline java::time::LocalDate MonthDay::atYear(jint arg0) const
	{
		return callObjectMethod(
			"atYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline jint MonthDay::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint MonthDay::compareTo(java::time::MonthDay arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/MonthDay;)I",
			arg0.object()
		);
	}
	inline jboolean MonthDay::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString MonthDay::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint MonthDay::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	inline jint MonthDay::getDayOfMonth() const
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	inline jlong MonthDay::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline java::time::Month MonthDay::getMonth() const
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	inline jint MonthDay::getMonthValue() const
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	inline jint MonthDay::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean MonthDay::isAfter(java::time::MonthDay arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/MonthDay;)Z",
			arg0.object()
		);
	}
	inline jboolean MonthDay::isBefore(java::time::MonthDay arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/MonthDay;)Z",
			arg0.object()
		);
	}
	inline jboolean MonthDay::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	inline jboolean MonthDay::isValidYear(jint arg0) const
	{
		return callMethod<jboolean>(
			"isValidYear",
			"(I)Z",
			arg0
		);
	}
	inline JObject MonthDay::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::temporal::ValueRange MonthDay::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline JString MonthDay::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::MonthDay MonthDay::with(java::time::Month arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/Month;)Ljava/time/MonthDay;",
			arg0.object()
		);
	}
	inline java::time::MonthDay MonthDay::withDayOfMonth(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/MonthDay;",
			arg0
		);
	}
	inline java::time::MonthDay MonthDay::withMonth(jint arg0) const
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/MonthDay;",
			arg0
		);
	}
} // namespace java::time

// Base class headers

