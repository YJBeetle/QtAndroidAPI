#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../CpuHeadroomParams.def.hpp"
#include "../GpuHeadroomParams.def.hpp"
#include "./HealthStats.def.hpp"
#include "../../util/Pair.def.hpp"
#include "./SystemHealthManager.def.hpp"

namespace android::os::health
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jfloat SystemHealthManager::getCpuHeadroom(android::os::CpuHeadroomParams arg0) const
	{
		return callMethod<jfloat>(
			"getCpuHeadroom",
			"(Landroid/os/CpuHeadroomParams;)F",
			arg0.object()
		);
	}
	inline android::util::Pair SystemHealthManager::getCpuHeadroomCalculationWindowRange() const
	{
		return callObjectMethod(
			"getCpuHeadroomCalculationWindowRange",
			"()Landroid/util/Pair;"
		);
	}
	inline jlong SystemHealthManager::getCpuHeadroomMinIntervalMillis() const
	{
		return callMethod<jlong>(
			"getCpuHeadroomMinIntervalMillis",
			"()J"
		);
	}
	inline jfloat SystemHealthManager::getGpuHeadroom(android::os::GpuHeadroomParams arg0) const
	{
		return callMethod<jfloat>(
			"getGpuHeadroom",
			"(Landroid/os/GpuHeadroomParams;)F",
			arg0.object()
		);
	}
	inline android::util::Pair SystemHealthManager::getGpuHeadroomCalculationWindowRange() const
	{
		return callObjectMethod(
			"getGpuHeadroomCalculationWindowRange",
			"()Landroid/util/Pair;"
		);
	}
	inline jlong SystemHealthManager::getGpuHeadroomMinIntervalMillis() const
	{
		return callMethod<jlong>(
			"getGpuHeadroomMinIntervalMillis",
			"()J"
		);
	}
	inline jint SystemHealthManager::getMaxCpuHeadroomTidsSize() const
	{
		return callMethod<jint>(
			"getMaxCpuHeadroomTidsSize",
			"()I"
		);
	}
	inline void SystemHealthManager::getPowerMonitorReadings(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getPowerMonitorReadings",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void SystemHealthManager::getSupportedPowerMonitors(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getSupportedPowerMonitors",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::os::health::HealthStats SystemHealthManager::takeMyUidSnapshot() const
	{
		return callObjectMethod(
			"takeMyUidSnapshot",
			"()Landroid/os/health/HealthStats;"
		);
	}
	inline android::os::health::HealthStats SystemHealthManager::takeUidSnapshot(jint arg0) const
	{
		return callObjectMethod(
			"takeUidSnapshot",
			"(I)Landroid/os/health/HealthStats;",
			arg0
		);
	}
	inline JArray SystemHealthManager::takeUidSnapshots(JIntArray arg0) const
	{
		return callObjectMethod(
			"takeUidSnapshots",
			"([I)[Landroid/os/health/HealthStats;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::os::health

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::health;
#endif
