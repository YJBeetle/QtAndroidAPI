#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioAttributes;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::session
{
	class MediaController_PlaybackInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint PLAYBACK_TYPE_LOCAL();
		static jint PLAYBACK_TYPE_REMOTE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaController_PlaybackInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaController_PlaybackInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::media::AudioAttributes getAudioAttributes();
		jint getCurrentVolume();
		jint getMaxVolume();
		jint getPlaybackType();
		jint getVolumeControl();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::session

