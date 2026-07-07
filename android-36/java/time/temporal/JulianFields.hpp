#pragma once

#include "./JulianFields.def.hpp"

namespace java::time::temporal
{
	// Fields
	inline JObject JulianFields::JULIAN_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.JulianFields",
			"JULIAN_DAY",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	inline JObject JulianFields::MODIFIED_JULIAN_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.JulianFields",
			"MODIFIED_JULIAN_DAY",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	inline JObject JulianFields::RATA_DIE()
	{
		return getStaticObjectField(
			"java.time.temporal.JulianFields",
			"RATA_DIE",
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
