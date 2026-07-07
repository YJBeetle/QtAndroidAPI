#pragma once

#include "./PowerMonitor.def.hpp"
#include "../../JString.hpp"
#include "./PowerMonitorReadings.def.hpp"

namespace android::os
{
	// Fields
	inline jint PowerMonitorReadings::ENERGY_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.os.PowerMonitorReadings",
			"ENERGY_UNAVAILABLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong PowerMonitorReadings::getConsumedEnergy(android::os::PowerMonitor arg0) const
	{
		return callMethod<jlong>(
			"getConsumedEnergy",
			"(Landroid/os/PowerMonitor;)J",
			arg0.object()
		);
	}
	inline jlong PowerMonitorReadings::getTimestampMillis(android::os::PowerMonitor arg0) const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"(Landroid/os/PowerMonitor;)J",
			arg0.object()
		);
	}
	inline JString PowerMonitorReadings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
