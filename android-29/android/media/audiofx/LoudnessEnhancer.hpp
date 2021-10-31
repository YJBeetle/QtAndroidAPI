#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AudioEffect.hpp"


namespace android::media::audiofx
{
	class LoudnessEnhancer : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_TARGET_GAIN_MB();
		
		LoudnessEnhancer(QAndroidJniObject obj);
		// Constructors
		LoudnessEnhancer(jint arg0);
		LoudnessEnhancer() = default;
		
		// Methods
		jfloat getTargetGain();
		void setTargetGain(jint arg0);
	};
} // namespace android::media::audiofx

