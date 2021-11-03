#pragma once

#include "../../../JObject.hpp"
#include "./AudioEffect.hpp"


namespace android::media::audiofx
{
	class AcousticEchoCanceler : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AcousticEchoCanceler(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		AcousticEchoCanceler(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::audiofx::AcousticEchoCanceler create(jint arg0);
		static jboolean isAvailable();
	};
} // namespace android::media::audiofx

