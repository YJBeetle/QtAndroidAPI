#pragma once

#include "./IsoFields.def.hpp"

namespace java::time::temporal
{
	// Fields
	inline JObject IsoFields::DAY_OF_QUARTER()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"DAY_OF_QUARTER",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	inline JObject IsoFields::QUARTER_OF_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"QUARTER_OF_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	inline JObject IsoFields::QUARTER_YEARS()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"QUARTER_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	inline JObject IsoFields::WEEK_BASED_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_BASED_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	inline JObject IsoFields::WEEK_BASED_YEARS()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_BASED_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	inline JObject IsoFields::WEEK_OF_WEEK_BASED_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_OF_WEEK_BASED_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::time::temporal

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::temporal;
#endif
