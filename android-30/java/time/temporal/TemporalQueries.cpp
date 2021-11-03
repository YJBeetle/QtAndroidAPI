#include "./TemporalQueries.hpp"

namespace java::time::temporal
{
	// Fields
	
	// QJniObject forward
	TemporalQueries::TemporalQueries(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject TemporalQueries::chronology()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"chronology",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	JObject TemporalQueries::localDate()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localDate",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	JObject TemporalQueries::localTime()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localTime",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	JObject TemporalQueries::offset()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"offset",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	JObject TemporalQueries::precision()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"precision",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	JObject TemporalQueries::zone()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zone",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	JObject TemporalQueries::zoneId()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zoneId",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
} // namespace java::time::temporal

