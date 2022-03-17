#pragma once

#include "./AudioEffect.def.hpp"

namespace android::media::audiofx
{
	class NoiseSuppressor : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoiseSuppressor(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		NoiseSuppressor(QAndroidJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::audiofx::NoiseSuppressor create(jint arg0);
		static jboolean isAvailable();
	};
} // namespace android::media::audiofx

