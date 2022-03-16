#pragma once

#include "./AudioEffect.def.hpp"

namespace android::media::audiofx
{
	class AutomaticGainControl : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AutomaticGainControl(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		AutomaticGainControl(QJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::audiofx::AutomaticGainControl create(jint arg0);
		static jboolean isAvailable();
	};
} // namespace android::media::audiofx

