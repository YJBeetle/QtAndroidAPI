#include "../media/AudioAttributes.hpp"
#include "./VibrationEffect.hpp"
#include "./Vibrator.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	Vibrator::Vibrator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Vibrator::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean Vibrator::hasAmplitudeControl()
	{
		return callMethod<jboolean>(
			"hasAmplitudeControl",
			"()Z"
		);
	}
	jboolean Vibrator::hasVibrator()
	{
		return callMethod<jboolean>(
			"hasVibrator",
			"()Z"
		);
	}
	void Vibrator::vibrate(android::os::VibrationEffect arg0)
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;)V",
			arg0.object()
		);
	}
	void Vibrator::vibrate(jlong arg0)
	{
		callMethod<void>(
			"vibrate",
			"(J)V",
			arg0
		);
	}
	void Vibrator::vibrate(jlongArray arg0, jint arg1)
	{
		callMethod<void>(
			"vibrate",
			"([JI)V",
			arg0,
			arg1
		);
	}
	void Vibrator::vibrate(android::os::VibrationEffect arg0, android::media::AudioAttributes arg1)
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;Landroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Vibrator::vibrate(jlong arg0, android::media::AudioAttributes arg1)
	{
		callMethod<void>(
			"vibrate",
			"(JLandroid/media/AudioAttributes;)V",
			arg0,
			arg1.object()
		);
	}
	void Vibrator::vibrate(jlongArray arg0, jint arg1, android::media::AudioAttributes arg2)
	{
		callMethod<void>(
			"vibrate",
			"([JILandroid/media/AudioAttributes;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace android::os

