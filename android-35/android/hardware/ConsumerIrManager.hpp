#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./ConsumerIrManager.def.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JArray ConsumerIrManager::getCarrierFrequencies() const
	{
		return callObjectMethod(
			"getCarrierFrequencies",
			"()[Landroid/hardware/ConsumerIrManager$CarrierFrequencyRange;"
		);
	}
	inline jboolean ConsumerIrManager::hasIrEmitter() const
	{
		return callMethod<jboolean>(
			"hasIrEmitter",
			"()Z"
		);
	}
	inline void ConsumerIrManager::transmit(jint arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"transmit",
			"(I[I)V",
			arg0,
			arg1.object<jintArray>()
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
