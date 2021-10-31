#include "./TimerStat.hpp"
#include "./HealthStats.hpp"

namespace android::os::health
{
	// Fields
	
	// QAndroidJniObject forward
	HealthStats::HealthStats(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring HealthStats::getDataType()
	{
		return callObjectMethod(
			"getDataType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong HealthStats::getMeasurement(jint arg0)
	{
		return callMethod<jlong>(
			"getMeasurement",
			"(I)J",
			arg0
		);
	}
	jint HealthStats::getMeasurementKeyAt(jint arg0)
	{
		return callMethod<jint>(
			"getMeasurementKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getMeasurementKeyCount()
	{
		return callMethod<jint>(
			"getMeasurementKeyCount",
			"()I"
		);
	}
	__JniBaseClass HealthStats::getMeasurements(jint arg0)
	{
		return callObjectMethod(
			"getMeasurements",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	jint HealthStats::getMeasurementsKeyAt(jint arg0)
	{
		return callMethod<jint>(
			"getMeasurementsKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getMeasurementsKeyCount()
	{
		return callMethod<jint>(
			"getMeasurementsKeyCount",
			"()I"
		);
	}
	__JniBaseClass HealthStats::getStats(jint arg0)
	{
		return callObjectMethod(
			"getStats",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	jint HealthStats::getStatsKeyAt(jint arg0)
	{
		return callMethod<jint>(
			"getStatsKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getStatsKeyCount()
	{
		return callMethod<jint>(
			"getStatsKeyCount",
			"()I"
		);
	}
	android::os::health::TimerStat HealthStats::getTimer(jint arg0)
	{
		return callObjectMethod(
			"getTimer",
			"(I)Landroid/os/health/TimerStat;",
			arg0
		);
	}
	jint HealthStats::getTimerCount(jint arg0)
	{
		return callMethod<jint>(
			"getTimerCount",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getTimerKeyAt(jint arg0)
	{
		return callMethod<jint>(
			"getTimerKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getTimerKeyCount()
	{
		return callMethod<jint>(
			"getTimerKeyCount",
			"()I"
		);
	}
	jlong HealthStats::getTimerTime(jint arg0)
	{
		return callMethod<jlong>(
			"getTimerTime",
			"(I)J",
			arg0
		);
	}
	__JniBaseClass HealthStats::getTimers(jint arg0)
	{
		return callObjectMethod(
			"getTimers",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	jint HealthStats::getTimersKeyAt(jint arg0)
	{
		return callMethod<jint>(
			"getTimersKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getTimersKeyCount()
	{
		return callMethod<jint>(
			"getTimersKeyCount",
			"()I"
		);
	}
	jboolean HealthStats::hasMeasurement(jint arg0)
	{
		return callMethod<jboolean>(
			"hasMeasurement",
			"(I)Z",
			arg0
		);
	}
	jboolean HealthStats::hasMeasurements(jint arg0)
	{
		return callMethod<jboolean>(
			"hasMeasurements",
			"(I)Z",
			arg0
		);
	}
	jboolean HealthStats::hasStats(jint arg0)
	{
		return callMethod<jboolean>(
			"hasStats",
			"(I)Z",
			arg0
		);
	}
	jboolean HealthStats::hasTimer(jint arg0)
	{
		return callMethod<jboolean>(
			"hasTimer",
			"(I)Z",
			arg0
		);
	}
	jboolean HealthStats::hasTimers(jint arg0)
	{
		return callMethod<jboolean>(
			"hasTimers",
			"(I)Z",
			arg0
		);
	}
} // namespace android::os::health

