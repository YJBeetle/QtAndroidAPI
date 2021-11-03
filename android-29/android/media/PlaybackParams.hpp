#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class PlaybackParams : public JObject
	{
	public:
		// Fields
		static jint AUDIO_FALLBACK_MODE_DEFAULT();
		static jint AUDIO_FALLBACK_MODE_FAIL();
		static jint AUDIO_FALLBACK_MODE_MUTE();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PlaybackParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackParams(QAndroidJniObject obj);
		
		// Constructors
		PlaybackParams();
		
		// Methods
		android::media::PlaybackParams allowDefaults();
		jint describeContents();
		jint getAudioFallbackMode();
		jfloat getPitch();
		jfloat getSpeed();
		android::media::PlaybackParams setAudioFallbackMode(jint arg0);
		android::media::PlaybackParams setPitch(jfloat arg0);
		android::media::PlaybackParams setSpeed(jfloat arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

