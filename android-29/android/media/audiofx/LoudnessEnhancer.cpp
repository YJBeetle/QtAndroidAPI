#include "./LoudnessEnhancer.hpp"

namespace android::media::audiofx
{
	// Fields
	jint LoudnessEnhancer::PARAM_TARGET_GAIN_MB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.LoudnessEnhancer",
			"PARAM_TARGET_GAIN_MB"
		);
	}
	
	LoudnessEnhancer::LoudnessEnhancer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LoudnessEnhancer::LoudnessEnhancer(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.LoudnessEnhancer",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jfloat LoudnessEnhancer::getTargetGain()
	{
		return __thiz.callMethod<jfloat>(
			"getTargetGain",
			"()F"
		);
	}
	void LoudnessEnhancer::setTargetGain(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTargetGain",
			"(I)V",
			arg0
		);
	}
} // namespace android::media::audiofx

