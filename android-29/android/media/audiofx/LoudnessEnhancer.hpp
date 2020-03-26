#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_LOUDNESSENHANCER
#define ANDROID_MEDIA_AUDIOFX_LOUDNESSENHANCER

#include "../../../__JniBaseClass.hpp"
#include "AudioEffect.hpp"


namespace __jni_impl::android::media::audiofx
{
	class LoudnessEnhancer : public __jni_impl::android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_TARGET_GAIN_MB();
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		void setTargetGain(jint arg0);
		jfloat getTargetGain();
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	jint LoudnessEnhancer::PARAM_TARGET_GAIN_MB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.LoudnessEnhancer",
			"PARAM_TARGET_GAIN_MB"
		);
	}
	
	// Constructors
	void LoudnessEnhancer::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.LoudnessEnhancer",
			"(I)V",
			arg0);
	}
	
	// Methods
	void LoudnessEnhancer::setTargetGain(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTargetGain",
			"(I)V",
			arg0
		);
	}
	jfloat LoudnessEnhancer::getTargetGain()
	{
		return __thiz.callMethod<jfloat>(
			"getTargetGain",
			"()F"
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class LoudnessEnhancer : public __jni_impl::android::media::audiofx::LoudnessEnhancer
	{
	public:
		LoudnessEnhancer(QAndroidJniObject obj) { __thiz = obj; }
		LoudnessEnhancer(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_LOUDNESSENHANCER

