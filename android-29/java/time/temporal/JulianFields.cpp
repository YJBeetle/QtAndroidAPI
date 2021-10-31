#include "./JulianFields.hpp"

namespace java::time::temporal
{
	// Fields
	QAndroidJniObject JulianFields::JULIAN_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.JulianFields",
			"JULIAN_DAY",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject JulianFields::MODIFIED_JULIAN_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.JulianFields",
			"MODIFIED_JULIAN_DAY",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject JulianFields::RATA_DIE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.JulianFields",
			"RATA_DIE",
			"Ljava/time/temporal/TemporalField;"
		);
	}
	
	// QAndroidJniObject forward
	JulianFields::JulianFields(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::time::temporal

