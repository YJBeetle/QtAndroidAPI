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
		static QAndroidJniObject CREATOR();
		static jint PLAYBACK_TYPE_LOCAL();
		static jint PLAYBACK_TYPE_REMOTE();
		
		MediaController_PlaybackInfo(QAndroidJniObject obj);
		// Constructors
		MediaController_PlaybackInfo() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getAudioAttributes();
		jint getCurrentVolume();
		jint getMaxVolume();
		jint getPlaybackType();
		jint getVolumeControl();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::session

