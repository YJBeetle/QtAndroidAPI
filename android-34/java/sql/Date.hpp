#pragma once

#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "../time/Instant.def.hpp"
#include "../time/LocalDate.def.hpp"
#include "./Date.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline Date::Date(jlong arg0)
		: java::util::Date(
			"java.sql.Date",
			"(J)V",
			arg0
		) {}
	inline Date::Date(jint arg0, jint arg1, jint arg2)
		: java::util::Date(
			"java.sql.Date",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline java::sql::Date Date::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Date",
			"valueOf",
			"(Ljava/lang/String;)Ljava/sql/Date;",
			arg0.object<jstring>()
		);
	}
	inline java::sql::Date Date::valueOf(java::time::LocalDate arg0)
	{
		return callStaticObjectMethod(
			"java.sql.Date",
			"valueOf",
			"(Ljava/time/LocalDate;)Ljava/sql/Date;",
			arg0.object()
		);
	}
	inline jint Date::getHours() const
	{
		return callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	inline jint Date::getMinutes() const
	{
		return callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	inline jint Date::getSeconds() const
	{
		return callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	inline void Date::setHours(jint arg0) const
	{
		callMethod<void>(
			"setHours",
			"(I)V",
			arg0
		);
	}
	inline void Date::setMinutes(jint arg0) const
	{
		callMethod<void>(
			"setMinutes",
			"(I)V",
			arg0
		);
	}
	inline void Date::setSeconds(jint arg0) const
	{
		callMethod<void>(
			"setSeconds",
			"(I)V",
			arg0
		);
	}
	inline void Date::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	inline java::time::Instant Date::toInstant() const
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::LocalDate Date::toLocalDate() const
	{
		return callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	inline JString Date::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::sql

// Base class headers
#include "../util/Date.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::sql;
#endif
