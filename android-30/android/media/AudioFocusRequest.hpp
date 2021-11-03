#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioAttributes;
}

namespace android::media
{
	class AudioFocusRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioFocusRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioFocusRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean acceptsDelayedFocusGain();
		android::media::AudioAttributes getAudioAttributes();
		jint getFocusGain();
		jboolean willPauseWhenDucked();
	};
} // namespace android::media

