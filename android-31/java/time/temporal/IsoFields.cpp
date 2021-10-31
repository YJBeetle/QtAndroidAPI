#include "./IsoFields.hpp"

namespace java::time::temporal
{
	// Fields
	__JniBaseClass IsoFields::DAY_OF_QUARTER()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"DAY_OF_QUARTER",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	__JniBaseClass IsoFields::QUARTER_OF_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"QUARTER_OF_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	__JniBaseClass IsoFields::QUARTER_YEARS()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"QUARTER_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	__JniBaseClass IsoFields::WEEK_BASED_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_BASED_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	__JniBaseClass IsoFields::WEEK_BASED_YEARS()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_BASED_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	__JniBaseClass IsoFields::WEEK_OF_WEEK_BASED_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_OF_WEEK_BASED_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	
	// QAndroidJniObject forward
	IsoFields::IsoFields(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::time::temporal

