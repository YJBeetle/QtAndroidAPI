#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../DayOfWeek.def.hpp"
#include "../../util/Locale.def.hpp"
#include "./WeekFields.def.hpp"

namespace java::time::temporal
{
	// Fields
	inline java::time::temporal::WeekFields WeekFields::ISO()
	{
		return getStaticObjectField(
			"java.time.temporal.WeekFields",
			"ISO",
			"Ljava/time/temporal/WeekFields;"
		);
	}
	inline java::time::temporal::WeekFields WeekFields::SUNDAY_START()
	{
		return getStaticObjectField(
			"java.time.temporal.WeekFields",
			"SUNDAY_START",
			"Ljava/time/temporal/WeekFields;"
		);
	}
	inline JObject WeekFields::WEEK_BASED_YEARS()
	{
		return getStaticObjectField(
			"java.time.temporal.WeekFields",
			"WEEK_BASED_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::temporal::WeekFields WeekFields::of(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/util/Locale;)Ljava/time/temporal/WeekFields;",
			arg0.object()
		);
	}
	inline java::time::temporal::WeekFields WeekFields::of(java::time::DayOfWeek arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/time/DayOfWeek;I)Ljava/time/temporal/WeekFields;",
			arg0.object(),
			arg1
		);
	}
	inline JObject WeekFields::dayOfWeek() const
	{
		return callObjectMethod(
			"dayOfWeek",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	inline jboolean WeekFields::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::DayOfWeek WeekFields::getFirstDayOfWeek() const
	{
		return callObjectMethod(
			"getFirstDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	inline jint WeekFields::getMinimalDaysInFirstWeek() const
	{
		return callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I"
		);
	}
	inline jint WeekFields::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString WeekFields::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject WeekFields::weekBasedYear() const
	{
		return callObjectMethod(
			"weekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	inline JObject WeekFields::weekOfMonth() const
	{
		return callObjectMethod(
			"weekOfMonth",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	inline JObject WeekFields::weekOfWeekBasedYear() const
	{
		return callObjectMethod(
			"weekOfWeekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	inline JObject WeekFields::weekOfYear() const
	{
		return callObjectMethod(
			"weekOfYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
} // namespace java::time::temporal

// Base class headers

