#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class AudioFormat;
}
namespace android::media
{
	class AudioTrack;
}

namespace android::media
{
	class AudioTrack_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioTrack_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioTrack_Builder(QAndroidJniObject obj);
		
		// Constructors
		AudioTrack_Builder();
		
		// Methods
		android::media::AudioTrack build();
		android::media::AudioTrack_Builder setAudioAttributes(android::media::AudioAttributes arg0);
		android::media::AudioTrack_Builder setAudioFormat(android::media::AudioFormat arg0);
		android::media::AudioTrack_Builder setBufferSizeInBytes(jint arg0);
		android::media::AudioTrack_Builder setOffloadedPlayback(jboolean arg0);
		android::media::AudioTrack_Builder setPerformanceMode(jint arg0);
		android::media::AudioTrack_Builder setSessionId(jint arg0);
		android::media::AudioTrack_Builder setTransferMode(jint arg0);
	};
} // namespace android::media

