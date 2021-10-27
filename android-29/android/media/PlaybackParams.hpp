#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class PlaybackParams : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUDIO_FALLBACK_MODE_DEFAULT();
		static jint AUDIO_FALLBACK_MODE_FAIL();
		static jint AUDIO_FALLBACK_MODE_MUTE();
		static QAndroidJniObject CREATOR();
		
		PlaybackParams(QAndroidJniObject obj);
		// Constructors
		PlaybackParams();
		
		// Methods
		QAndroidJniObject allowDefaults();
		jint describeContents();
		jint getAudioFallbackMode();
		jfloat getPitch();
		jfloat getSpeed();
		QAndroidJniObject setAudioFallbackMode(jint arg0);
		QAndroidJniObject setPitch(jfloat arg0);
		QAndroidJniObject setSpeed(jfloat arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

