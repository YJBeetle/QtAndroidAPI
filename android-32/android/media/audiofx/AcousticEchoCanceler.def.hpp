#pragma once

#include "./AudioEffect.def.hpp"

namespace android::media::audiofx
{
	class AcousticEchoCanceler : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AcousticEchoCanceler(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		AcousticEchoCanceler(QJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::audiofx::AcousticEchoCanceler create(jint arg0);
		static jboolean isAvailable();
	};
} // namespace android::media::audiofx

