#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioFormat;
}
namespace android::media
{
	class AudioPlaybackCaptureConfiguration;
}
namespace android::media
{
	class AudioRecord;
}

namespace android::media
{
	class AudioRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioRecord_Builder(QJniObject obj);
		
		// Constructors
		AudioRecord_Builder();
		
		// Methods
		android::media::AudioRecord build();
		android::media::AudioRecord_Builder setAudioFormat(android::media::AudioFormat arg0);
		android::media::AudioRecord_Builder setAudioPlaybackCaptureConfig(android::media::AudioPlaybackCaptureConfiguration arg0);
		android::media::AudioRecord_Builder setAudioSource(jint arg0);
		android::media::AudioRecord_Builder setBufferSizeInBytes(jint arg0);
	};
} // namespace android::media

