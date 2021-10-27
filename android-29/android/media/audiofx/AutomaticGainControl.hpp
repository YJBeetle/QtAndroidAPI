#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AudioEffect.hpp"


namespace android::media::audiofx
{
	class AutomaticGainControl : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		AutomaticGainControl(QAndroidJniObject obj);
		// Constructors
		AutomaticGainControl() = default;
		
		// Methods
		static QAndroidJniObject create(jint arg0);
		static jboolean isAvailable();
	};
} // namespace android::media::audiofx

