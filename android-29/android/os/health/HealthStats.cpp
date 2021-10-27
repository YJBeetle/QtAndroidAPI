#include "./TimerStat.hpp"
#include "./HealthStats.hpp"

namespace android::os::health
{
	// Fields
	
	HealthStats::HealthStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring HealthStats::getDataType()
	{
		return __thiz.callObjectMethod(
			"getDataType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong HealthStats::getMeasurement(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getMeasurement",
			"(I)J",
			arg0
		);
	}
	jint HealthStats::getMeasurementKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMeasurementKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getMeasurementKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getMeasurementKeyCount",
			"()I"
		);
	}
	QAndroidJniObject HealthStats::getMeasurements(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMeasurements",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	jint HealthStats::getMeasurementsKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMeasurementsKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getMeasurementsKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getMeasurementsKeyCount",
			"()I"
		);
	}
	QAndroidJniObject HealthStats::getStats(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStats",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	jint HealthStats::getStatsKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getStatsKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getStatsKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getStatsKeyCount",
			"()I"
		);
	}
	QAndroidJniObject HealthStats::getTimer(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTimer",
			"(I)Landroid/os/health/TimerStat;",
			arg0
		);
	}
	jint HealthStats::getTimerCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getTimerCount",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getTimerKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getTimerKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getTimerKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getTimerKeyCount",
			"()I"
		);
	}
	jlong HealthStats::getTimerTime(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getTimerTime",
			"(I)J",
			arg0
		);
	}
	QAndroidJniObject HealthStats::getTimers(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTimers",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	jint HealthStats::getTimersKeyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getTimersKeyAt",
			"(I)I",
			arg0
		);
	}
	jint HealthStats::getTimersKeyCount()
	{
		return __thiz.callMethod<jint>(
			"getTimersKeyCount",
			"()I"
		);
	}
	jboolean HealthStats::hasMeasurement(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMeasurement",
			"(I)Z",
			arg0
		);
	}
	jboolean HealthStats::hasMeasurements(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMeasurements",
			"(I)Z",
			arg0
		);
	}
	jboolean HealthStats::hasStats(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasStats",
			"(I)Z",
			arg0
		);
	}
	jboolean HealthStats::hasTimer(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasTimer",
			"(I)Z",
			arg0
		);
	}
	jboolean HealthStats::hasTimers(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasTimers",
			"(I)Z",
			arg0
		);
	}
} // namespace android::os::health

