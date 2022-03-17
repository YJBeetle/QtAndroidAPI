#pragma once

#include "./LoudnessEnhancer.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jint LoudnessEnhancer::PARAM_TARGET_GAIN_MB()
	{
		return getStaticField<jint>(
			"android.media.audiofx.LoudnessEnhancer",
			"PARAM_TARGET_GAIN_MB"
		);
	}
	
	// Constructors
	inline LoudnessEnhancer::LoudnessEnhancer(jint arg0)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.LoudnessEnhancer",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jfloat LoudnessEnhancer::getTargetGain() const
	{
		return callMethod<jfloat>(
			"getTargetGain",
			"()F"
		);
	}
	inline void LoudnessEnhancer::setTargetGain(jint arg0) const
	{
		callMethod<void>(
			"setTargetGain",
			"(I)V",
			arg0
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./AudioEffect.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::audiofx;
#endif
