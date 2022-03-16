#pragma once

#include "../../JLongArray.hpp"
#include "../media/AudioAttributes.def.hpp"
#include "./VibrationEffect.def.hpp"
#include "./Vibrator.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Vibrator::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline jboolean Vibrator::hasAmplitudeControl() const
	{
		return callMethod<jboolean>(
			"hasAmplitudeControl",
			"()Z"
		);
	}
	inline jboolean Vibrator::hasVibrator() const
	{
		return callMethod<jboolean>(
			"hasVibrator",
			"()Z"
		);
	}
	inline void Vibrator::vibrate(android::os::VibrationEffect arg0) const
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;)V",
			arg0.object()
		);
	}
	inline void Vibrator::vibrate(jlong arg0) const
	{
		callMethod<void>(
			"vibrate",
			"(J)V",
			arg0
		);
	}
	inline void Vibrator::vibrate(JLongArray arg0, jint arg1) const
	{
		callMethod<void>(
			"vibrate",
			"([JI)V",
			arg0.object<jlongArray>(),
			arg1
		);
	}
	inline void Vibrator::vibrate(android::os::VibrationEffect arg0, android::media::AudioAttributes arg1) const
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;Landroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Vibrator::vibrate(jlong arg0, android::media::AudioAttributes arg1) const
	{
		callMethod<void>(
			"vibrate",
			"(JLandroid/media/AudioAttributes;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Vibrator::vibrate(JLongArray arg0, jint arg1, android::media::AudioAttributes arg2) const
	{
		callMethod<void>(
			"vibrate",
			"([JILandroid/media/AudioAttributes;)V",
			arg0.object<jlongArray>(),
			arg1,
			arg2.object()
		);
	}
} // namespace android::os

// Base class headers

