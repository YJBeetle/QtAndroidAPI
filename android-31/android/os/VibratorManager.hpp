#pragma once

#include "../../JIntArray.hpp"
#include "./CombinedVibration.def.hpp"
#include "./VibrationAttributes.def.hpp"
#include "./Vibrator.def.hpp"
#include "./VibratorManager.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void VibratorManager::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline android::os::Vibrator VibratorManager::getDefaultVibrator() const
	{
		return callObjectMethod(
			"getDefaultVibrator",
			"()Landroid/os/Vibrator;"
		);
	}
	inline android::os::Vibrator VibratorManager::getVibrator(jint arg0) const
	{
		return callObjectMethod(
			"getVibrator",
			"(I)Landroid/os/Vibrator;",
			arg0
		);
	}
	inline JIntArray VibratorManager::getVibratorIds() const
	{
		return callObjectMethod(
			"getVibratorIds",
			"()[I"
		);
	}
	inline void VibratorManager::vibrate(android::os::CombinedVibration arg0) const
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/CombinedVibration;)V",
			arg0.object()
		);
	}
	inline void VibratorManager::vibrate(android::os::CombinedVibration arg0, android::os::VibrationAttributes arg1) const
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/CombinedVibration;Landroid/os/VibrationAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::os

// Base class headers

