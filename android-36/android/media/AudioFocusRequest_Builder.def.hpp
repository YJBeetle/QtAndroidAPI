#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class AudioFocusRequest;
}
namespace android::os
{
	class Handler;
}

namespace android::media
{
	class AudioFocusRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioFocusRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioFocusRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AudioFocusRequest_Builder(android::media::AudioFocusRequest arg0);
		AudioFocusRequest_Builder(jint arg0);
		
		// Methods
		android::media::AudioFocusRequest build() const;
		android::media::AudioFocusRequest_Builder setAcceptsDelayedFocusGain(jboolean arg0) const;
		android::media::AudioFocusRequest_Builder setAudioAttributes(android::media::AudioAttributes arg0) const;
		android::media::AudioFocusRequest_Builder setFocusGain(jint arg0) const;
		android::media::AudioFocusRequest_Builder setForceDucking(jboolean arg0) const;
		android::media::AudioFocusRequest_Builder setOnAudioFocusChangeListener(JObject arg0) const;
		android::media::AudioFocusRequest_Builder setOnAudioFocusChangeListener(JObject arg0, android::os::Handler arg1) const;
		android::media::AudioFocusRequest_Builder setWillPauseWhenDucked(jboolean arg0) const;
	};
} // namespace android::media

