#pragma once

#include "./SatelliteManager.def.hpp"

namespace android::telephony::satellite
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SatelliteManager::registerStateChangeListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerStateChangeListener",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/satellite/SatelliteStateChangeListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SatelliteManager::unregisterStateChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterStateChangeListener",
			"(Landroid/telephony/satellite/SatelliteStateChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::satellite

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::satellite;
#endif
