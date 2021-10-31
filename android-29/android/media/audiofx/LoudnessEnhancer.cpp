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
	
	// QJniObject forward
	LoudnessEnhancer::LoudnessEnhancer(QJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	LoudnessEnhancer::LoudnessEnhancer(jint arg0)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.LoudnessEnhancer",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jfloat LoudnessEnhancer::getTargetGain()
	{
		return callMethod<jfloat>(
			"getTargetGain",
			"()F"
		);
	}
	void LoudnessEnhancer::setTargetGain(jint arg0)
	{
		callMethod<void>(
			"setTargetGain",
			"(I)V",
			arg0
		);
	}
} // namespace android::media::audiofx

