#pragma once

#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../media/AudioAttributes.def.hpp"
#include "./VibrationEffect.def.hpp"
#include "./Vibrator.def.hpp"

namespace android::os
{
	// Fields
	inline jint Vibrator::VIBRATION_EFFECT_SUPPORT_NO()
	{
		return getStaticField<jint>(
			"android.os.Vibrator",
			"VIBRATION_EFFECT_SUPPORT_NO"
		);
	}
	inline jint Vibrator::VIBRATION_EFFECT_SUPPORT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.Vibrator",
			"VIBRATION_EFFECT_SUPPORT_UNKNOWN"
		);
	}
	inline jint Vibrator::VIBRATION_EFFECT_SUPPORT_YES()
	{
		return getStaticField<jint>(
			"android.os.Vibrator",
			"VIBRATION_EFFECT_SUPPORT_YES"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Vibrator::areAllEffectsSupported(JIntArray arg0) const
	{
		return callMethod<jint>(
			"areAllEffectsSupported",
			"([I)I",
			arg0.object<jintArray>()
		);
	}
	inline jboolean Vibrator::areAllPrimitivesSupported(JIntArray arg0) const
	{
		return callMethod<jboolean>(
			"areAllPrimitivesSupported",
			"([I)Z",
			arg0.object<jintArray>()
		);
	}
	inline JIntArray Vibrator::areEffectsSupported(JIntArray arg0) const
	{
		return callObjectMethod(
			"areEffectsSupported",
			"([I)[I",
			arg0.object<jintArray>()
		);
	}
	inline JBooleanArray Vibrator::arePrimitivesSupported(JIntArray arg0) const
	{
		return callObjectMethod(
			"arePrimitivesSupported",
			"([I)[Z",
			arg0.object<jintArray>()
		);
	}
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
