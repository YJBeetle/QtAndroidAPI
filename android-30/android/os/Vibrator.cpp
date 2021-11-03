#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../media/AudioAttributes.hpp"
#include "./VibrationEffect.hpp"
#include "./Vibrator.hpp"

namespace android::os
{
	// Fields
	jint Vibrator::VIBRATION_EFFECT_SUPPORT_NO()
	{
		return getStaticField<jint>(
			"android.os.Vibrator",
			"VIBRATION_EFFECT_SUPPORT_NO"
		);
	}
	jint Vibrator::VIBRATION_EFFECT_SUPPORT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.Vibrator",
			"VIBRATION_EFFECT_SUPPORT_UNKNOWN"
		);
	}
	jint Vibrator::VIBRATION_EFFECT_SUPPORT_YES()
	{
		return getStaticField<jint>(
			"android.os.Vibrator",
			"VIBRATION_EFFECT_SUPPORT_YES"
		);
	}
	
	// QAndroidJniObject forward
	Vibrator::Vibrator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Vibrator::areAllEffectsSupported(JIntArray arg0) const
	{
		return callMethod<jint>(
			"areAllEffectsSupported",
			"([I)I",
			arg0.object<jintArray>()
		);
	}
	jboolean Vibrator::areAllPrimitivesSupported(JIntArray arg0) const
	{
		return callMethod<jboolean>(
			"areAllPrimitivesSupported",
			"([I)Z",
			arg0.object<jintArray>()
		);
	}
	JIntArray Vibrator::areEffectsSupported(JIntArray arg0) const
	{
		return callObjectMethod(
			"areEffectsSupported",
			"([I)[I",
			arg0.object<jintArray>()
		);
	}
	JBooleanArray Vibrator::arePrimitivesSupported(JIntArray arg0) const
	{
		return callObjectMethod(
			"arePrimitivesSupported",
			"([I)[Z",
			arg0.object<jintArray>()
		);
	}
	void Vibrator::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean Vibrator::hasAmplitudeControl() const
	{
		return callMethod<jboolean>(
			"hasAmplitudeControl",
			"()Z"
		);
	}
	jboolean Vibrator::hasVibrator() const
	{
		return callMethod<jboolean>(
			"hasVibrator",
			"()Z"
		);
	}
	void Vibrator::vibrate(android::os::VibrationEffect arg0) const
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;)V",
			arg0.object()
		);
	}
	void Vibrator::vibrate(jlong arg0) const
	{
		callMethod<void>(
			"vibrate",
			"(J)V",
			arg0
		);
	}
	void Vibrator::vibrate(JLongArray arg0, jint arg1) const
	{
		callMethod<void>(
			"vibrate",
			"([JI)V",
			arg0.object<jlongArray>(),
			arg1
		);
	}
	void Vibrator::vibrate(android::os::VibrationEffect arg0, android::media::AudioAttributes arg1) const
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;Landroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Vibrator::vibrate(jlong arg0, android::media::AudioAttributes arg1) const
	{
		callMethod<void>(
			"vibrate",
			"(JLandroid/media/AudioAttributes;)V",
			arg0,
			arg1.object()
		);
	}
	void Vibrator::vibrate(JLongArray arg0, jint arg1, android::media::AudioAttributes arg2) const
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

