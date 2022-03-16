#pragma once

#include "../../../JObject.hpp"

namespace android::media
{
	class AudioAttributes;
}

namespace android::media::session
{
	class MediaController_PlaybackInfo : public JObject
	{
	public:
		// Fields
		static jint PLAYBACK_TYPE_LOCAL();
		static jint PLAYBACK_TYPE_REMOTE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaController_PlaybackInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaController_PlaybackInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::media::AudioAttributes getAudioAttributes() const;
		jint getCurrentVolume() const;
		jint getMaxVolume() const;
		jint getPlaybackType() const;
		jint getVolumeControl() const;
	};
} // namespace android::media::session

