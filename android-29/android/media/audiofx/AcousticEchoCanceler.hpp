#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AudioEffect.hpp"


namespace android::media::audiofx
{
	class AcousticEchoCanceler : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		AcousticEchoCanceler(QAndroidJniObject obj);
		// Constructors
		AcousticEchoCanceler() = default;
		
		// Methods
		static QAndroidJniObject create(jint arg0);
		static jboolean isAvailable();
	};
} // namespace android::media::audiofx

