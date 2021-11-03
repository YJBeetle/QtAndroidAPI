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
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackParams(QJniObject obj);
		
		// Constructors
		PlaybackParams();
		
		// Methods
		android::media::PlaybackParams allowDefaults() const;
		jint describeContents() const;
		jint getAudioFallbackMode() const;
		jfloat getPitch() const;
		jfloat getSpeed() const;
		android::media::PlaybackParams setAudioFallbackMode(jint arg0) const;
		android::media::PlaybackParams setPitch(jfloat arg0) const;
		android::media::PlaybackParams setSpeed(jfloat arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

