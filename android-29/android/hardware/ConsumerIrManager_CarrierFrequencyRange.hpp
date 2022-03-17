#pragma once

#include "./ConsumerIrManager.def.hpp"
#include "./ConsumerIrManager_CarrierFrequencyRange.def.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	inline ConsumerIrManager_CarrierFrequencyRange::ConsumerIrManager_CarrierFrequencyRange(android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.ConsumerIrManager$CarrierFrequencyRange",
			"(Landroid/hardware/ConsumerIrManager;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint ConsumerIrManager_CarrierFrequencyRange::getMaxFrequency() const
	{
		return callMethod<jint>(
			"getMaxFrequency",
			"()I"
		);
	}
	inline jint ConsumerIrManager_CarrierFrequencyRange::getMinFrequency() const
	{
		return callMethod<jint>(
			"getMinFrequency",
			"()I"
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
