#pragma once

#include "../os/CancellationSignal.def.hpp"
#include "./RangingConfig.def.hpp"
#include "./RangingDevice.def.hpp"
#include "./RangingPreference.def.hpp"
#include "../../JString.hpp"
#include "./RangingSession.def.hpp"

namespace android::ranging
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void RangingSession::addDeviceToRangingSession(android::ranging::RangingConfig arg0) const
	{
		callMethod<void>(
			"addDeviceToRangingSession",
			"(Landroid/ranging/RangingConfig;)V",
			arg0.object()
		);
	}
	inline void RangingSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void RangingSession::reconfigureRangingInterval(jint arg0) const
	{
		callMethod<void>(
			"reconfigureRangingInterval",
			"(I)V",
			arg0
		);
	}
	inline void RangingSession::removeDeviceFromRangingSession(android::ranging::RangingDevice arg0) const
	{
		callMethod<void>(
			"removeDeviceFromRangingSession",
			"(Landroid/ranging/RangingDevice;)V",
			arg0.object()
		);
	}
	inline android::os::CancellationSignal RangingSession::start(android::ranging::RangingPreference arg0) const
	{
		return callObjectMethod(
			"start",
			"(Landroid/ranging/RangingPreference;)Landroid/os/CancellationSignal;",
			arg0.object()
		);
	}
	inline void RangingSession::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline JString RangingSession::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
