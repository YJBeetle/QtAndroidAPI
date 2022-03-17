#pragma once

#include "../../JString.hpp"
#include "../time/Instant.def.hpp"
#include "../time/LocalTime.def.hpp"
#include "./Time.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline Time::Time(jlong arg0)
		: java::util::Date(
			"java.sql.Time",
			"(J)V",
			arg0
		) {}
	inline Time::Time(jint arg0, jint arg1, jint arg2)
		: java::util::Date(
			"java.sql.Time",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline java::sql::Time Time::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Time;",
			arg0.object<jstring>()
		);
	}
	inline java::sql::Time Time::valueOf(java::time::LocalTime arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Time",
			"valueOf",
			"(Ljava/time/LocalTime;)Ljava/sql/Time;",
			arg0.object()
		);
	}
	inline jint Time::getDate() const
	{
		return callMethod<jint>(
			"getDate",
			"()I"
		);
	}
	inline jint Time::getDay() const
	{
		return callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	inline jint Time::getMonth() const
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	inline jint Time::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	inline void Time::setDate(jint arg0) const
	{
		callMethod<void>(
			"setDate",
			"(I)V",
			arg0
		);
	}
	inline void Time::setMonth(jint arg0) const
	{
		callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	inline void Time::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	inline void Time::setYear(jint arg0) const
	{
		callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	inline java::time::Instant Time::toInstant() const
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::LocalTime Time::toLocalTime() const
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	inline JString Time::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::sql

// Base class headers
#include "../util/Date.hpp"

