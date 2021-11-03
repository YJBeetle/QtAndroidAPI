#include "./JulianFields.hpp"

namespace java::time::temporal
{
	// Fields
	JObject JulianFields::JULIAN_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.JulianFields",
			"JULIAN_DAY",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	JObject JulianFields::MODIFIED_JULIAN_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.JulianFields",
			"MODIFIED_JULIAN_DAY",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	JObject JulianFields::RATA_DIE()
	{
		return getStaticObjectField(
			"java.time.temporal.JulianFields",
			"RATA_DIE",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	
	// QJniObject forward
	JulianFields::JulianFields(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::time::temporal

