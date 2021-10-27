#include "../media/AudioAttributes.hpp"
#include "./VibrationEffect.hpp"
#include "./Vibrator.hpp"

namespace android::os
{
	// Fields
	
	Vibrator::Vibrator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Vibrator::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean Vibrator::hasAmplitudeControl()
	{
		return __thiz.callMethod<jboolean>(
			"hasAmplitudeControl",
			"()Z"
		);
	}
	jboolean Vibrator::hasVibrator()
	{
		return __thiz.callMethod<jboolean>(
			"hasVibrator",
			"()Z"
		);
	}
	void Vibrator::vibrate(android::os::VibrationEffect arg0)
	{
		__thiz.callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;)V",
			arg0.__jniObject().object()
		);
	}
	void Vibrator::vibrate(jlong arg0)
	{
		__thiz.callMethod<void>(
			"vibrate",
			"(J)V",
			arg0
		);
	}
	void Vibrator::vibrate(jlongArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"vibrate",
			"([JI)V",
			arg0,
			arg1
		);
	}
	void Vibrator::vibrate(android::os::VibrationEffect arg0, android::media::AudioAttributes arg1)
	{
		__thiz.callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Vibrator::vibrate(jlong arg0, android::media::AudioAttributes arg1)
	{
		__thiz.callMethod<void>(
			"vibrate",
			"(JLandroid/media/AudioAttributes;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Vibrator::vibrate(jlongArray arg0, jint arg1, android::media::AudioAttributes arg2)
	{
		__thiz.callMethod<void>(
			"vibrate",
			"([JILandroid/media/AudioAttributes;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace android::os

