#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AudioEffect.hpp"


namespace android::media::audiofx
{
	class NoiseSuppressor : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		NoiseSuppressor(QAndroidJniObject obj);
		// Constructors
		NoiseSuppressor() = default;
		
		// Methods
		static QAndroidJniObject create(jint arg0);
		static jboolean isAvailable();
	};
} // namespace android::media::audiofx

