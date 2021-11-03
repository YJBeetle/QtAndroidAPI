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
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioFocusRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioFocusRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean acceptsDelayedFocusGain() const;
		android::media::AudioAttributes getAudioAttributes() const;
		jint getFocusGain() const;
		jboolean willPauseWhenDucked() const;
	};
} // namespace android::media

