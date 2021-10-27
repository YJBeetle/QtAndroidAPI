#include "./TemporalQueries.hpp"

namespace java::time::temporal
{
	// Fields
	
	TemporalQueries::TemporalQueries(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TemporalQueries::chronology()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"chronology",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::localDate()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localDate",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::localTime()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localTime",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::offset()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"offset",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::precision()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"precision",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::zone()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zone",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject TemporalQueries::zoneId()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zoneId",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
} // namespace java::time::temporal

