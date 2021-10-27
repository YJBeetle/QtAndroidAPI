#pragma once

#ifndef ANDROID_OS_VIBRATOR
#define ANDROID_OS_VIBRATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::os
{
	class VibrationEffect;
}

namespace __jni_impl::android::os
{
	class Vibrator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancel();
		jboolean hasAmplitudeControl();
		jboolean hasVibrator();
		void vibrate(__jni_impl::android::os::VibrationEffect arg0);
		void vibrate(jlong arg0);
		void vibrate(jlongArray arg0, jint arg1);
		void vibrate(__jni_impl::android::os::VibrationEffect arg0, __jni_impl::android::media::AudioAttributes arg1);
		void vibrate(jlong arg0, __jni_impl::android::media::AudioAttributes arg1);
		void vibrate(jlongArray arg0, jint arg1, __jni_impl::android::media::AudioAttributes arg2);
	};
} // namespace __jni_impl::android::os

#include "../media/AudioAttributes.hpp"
#include "VibrationEffect.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void Vibrator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Vibrator",
			"(V)V");
	}
	
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
	void Vibrator::vibrate(__jni_impl::android::os::VibrationEffect arg0)
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
	void Vibrator::vibrate(__jni_impl::android::os::VibrationEffect arg0, __jni_impl::android::media::AudioAttributes arg1)
	{
		__thiz.callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Vibrator::vibrate(jlong arg0, __jni_impl::android::media::AudioAttributes arg1)
	{
		__thiz.callMethod<void>(
			"vibrate",
			"(JLandroid/media/AudioAttributes;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Vibrator::vibrate(jlongArray arg0, jint arg1, __jni_impl::android::media::AudioAttributes arg2)
	{
		__thiz.callMethod<void>(
			"vibrate",
			"([JILandroid/media/AudioAttributes;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Vibrator : public __jni_impl::android::os::Vibrator
	{
	public:
		Vibrator(QAndroidJniObject obj) { __thiz = obj; }
		Vibrator()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_VIBRATOR

