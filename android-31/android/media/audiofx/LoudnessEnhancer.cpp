#include "./LoudnessEnhancer.hpp"

namespace android::media::audiofx
{
	// Fields
	jint LoudnessEnhancer::PARAM_TARGET_GAIN_MB()
	{
		return getStaticField<jint>(
			"android.media.audiofx.LoudnessEnhancer",
			"PARAM_TARGET_GAIN_MB"
		);
	}
	
	// Constructors
	LoudnessEnhancer::LoudnessEnhancer(jint arg0)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.LoudnessEnhancer",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jfloat LoudnessEnhancer::getTargetGain() const
	{
		return callMethod<jfloat>(
			"getTargetGain",
			"()F"
		);
	}
	void LoudnessEnhancer::setTargetGain(jint arg0) const
	{
		callMethod<void>(
			"setTargetGain",
			"(I)V",
			arg0
		);
	}
} // namespace android::media::audiofx

