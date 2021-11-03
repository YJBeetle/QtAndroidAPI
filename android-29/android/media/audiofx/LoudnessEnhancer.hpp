#pragma once

#include "./AudioEffect.hpp"

namespace android::media::audiofx
{
	class LoudnessEnhancer : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_TARGET_GAIN_MB();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LoudnessEnhancer(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		LoudnessEnhancer(QAndroidJniObject obj);
		
		// Constructors
		LoudnessEnhancer(jint arg0);
		
		// Methods
		jfloat getTargetGain() const;
		void setTargetGain(jint arg0) const;
	};
} // namespace android::media::audiofx

