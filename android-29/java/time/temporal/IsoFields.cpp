#include "./IsoFields.hpp"

namespace java::time::temporal
{
	// Fields
	QAndroidJniObject IsoFields::DAY_OF_QUARTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"DAY_OF_QUARTER",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject IsoFields::QUARTER_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"QUARTER_OF_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject IsoFields::QUARTER_YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"QUARTER_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	QAndroidJniObject IsoFields::WEEK_BASED_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_BASED_YEAR",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject IsoFields::WEEK_BASED_YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.IsoFields",
			"WEEK_BASED_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	QAndroidJniObject IsoFields::WEEK_OF_WEEK_BASED_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
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

