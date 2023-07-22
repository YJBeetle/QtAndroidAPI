#pragma once

#include "./TimerStat.def.hpp"
#include "../../../JString.hpp"
#include "./HealthStats.def.hpp"

namespace android::os::health
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString HealthStats::getDataType() const
	{
		return callObjectMethod(
			"getDataType",
			"()Ljava/lang/String;"
		);
	}
	inline jlong HealthStats::getMeasurement(jint arg0) const
	{
		return callMethod<jlong>(
			"getMeasurement",
			"(I)J",
			arg0
		);
	}
	inline jint HealthStats::getMeasurementKeyAt(jint arg0) const
	{
		return callMethod<jint>(
			"getMeasurementKeyAt",
			"(I)I",
			arg0
		);
	}
	inline jint HealthStats::getMeasurementKeyCount() const
	{
		return callMethod<jint>(
			"getMeasurementKeyCount",
			"()I"
		);
	}
	inline JObject HealthStats::getMeasurements(jint arg0) const
	{
		return callObjectMethod(
			"getMeasurements",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	inline jint HealthStats::getMeasurementsKeyAt(jint arg0) const
	{
		return callMethod<jint>(
			"getMeasurementsKeyAt",
			"(I)I",
			arg0
		);
	}
	inline jint HealthStats::getMeasurementsKeyCount() const
	{
		return callMethod<jint>(
			"getMeasurementsKeyCount",
			"()I"
		);
	}
	inline JObject HealthStats::getStats(jint arg0) const
	{
		return callObjectMethod(
			"getStats",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	inline jint HealthStats::getStatsKeyAt(jint arg0) const
	{
		return callMethod<jint>(
			"getStatsKeyAt",
			"(I)I",
			arg0
		);
	}
	inline jint HealthStats::getStatsKeyCount() const
	{
		return callMethod<jint>(
			"getStatsKeyCount",
			"()I"
		);
	}
	inline android::os::health::TimerStat HealthStats::getTimer(jint arg0) const
	{
		return callObjectMethod(
			"getTimer",
			"(I)Landroid/os/health/TimerStat;",
			arg0
		);
	}
	inline jint HealthStats::getTimerCount(jint arg0) const
	{
		return callMethod<jint>(
			"getTimerCount",
			"(I)I",
			arg0
		);
	}
	inline jint HealthStats::getTimerKeyAt(jint arg0) const
	{
		return callMethod<jint>(
			"getTimerKeyAt",
			"(I)I",
			arg0
		);
	}
	inline jint HealthStats::getTimerKeyCount() const
	{
		return callMethod<jint>(
			"getTimerKeyCount",
			"()I"
		);
	}
	inline jlong HealthStats::getTimerTime(jint arg0) const
	{
		return callMethod<jlong>(
			"getTimerTime",
			"(I)J",
			arg0
		);
	}
	inline JObject HealthStats::getTimers(jint arg0) const
	{
		return callObjectMethod(
			"getTimers",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	inline jint HealthStats::getTimersKeyAt(jint arg0) const
	{
		return callMethod<jint>(
			"getTimersKeyAt",
			"(I)I",
			arg0
		);
	}
	inline jint HealthStats::getTimersKeyCount() const
	{
		return callMethod<jint>(
			"getTimersKeyCount",
			"()I"
		);
	}
	inline jboolean HealthStats::hasMeasurement(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasMeasurement",
			"(I)Z",
			arg0
		);
	}
	inline jboolean HealthStats::hasMeasurements(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasMeasurements",
			"(I)Z",
			arg0
		);
	}
	inline jboolean HealthStats::hasStats(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasStats",
			"(I)Z",
			arg0
		);
	}
	inline jboolean HealthStats::hasTimer(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasTimer",
			"(I)Z",
			arg0
		);
	}
	inline jboolean HealthStats::hasTimers(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasTimers",
			"(I)Z",
			arg0
		);
	}
} // namespace android::os::health

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::health;
#endif
