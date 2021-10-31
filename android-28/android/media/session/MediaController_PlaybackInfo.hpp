#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioAttributes;
}

namespace android::media::session
{
	class MediaController_PlaybackInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint PLAYBACK_TYPE_LOCAL();
		static jint PLAYBACK_TYPE_REMOTE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaController_PlaybackInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaController_PlaybackInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::AudioAttributes getAudioAttributes();
		jint getCurrentVolume();
		jint getMaxVolume();
		jint getPlaybackType();
		jint getVolumeControl();
	};
} // namespace android::media::session

