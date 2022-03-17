#pragma once

#include "./TemporalQueries.def.hpp"

namespace java::time::temporal
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject TemporalQueries::chronology()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"chronology",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	inline JObject TemporalQueries::localDate()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localDate",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	inline JObject TemporalQueries::localTime()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localTime",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	inline JObject TemporalQueries::offset()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"offset",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	inline JObject TemporalQueries::precision()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"precision",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	inline JObject TemporalQueries::zone()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zone",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	inline JObject TemporalQueries::zoneId()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zoneId",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
} // namespace java::time::temporal

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::temporal;
#endif
