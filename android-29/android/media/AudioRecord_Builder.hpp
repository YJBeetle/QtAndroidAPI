#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AudioRecord_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioRecord_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioRecord_Builder(QAndroidJniObject obj);
		
		// Constructors
		AudioRecord_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAudioFormat(android::media::AudioFormat arg0);
		QAndroidJniObject setAudioPlaybackCaptureConfig(android::media::AudioPlaybackCaptureConfiguration arg0);
		QAndroidJniObject setAudioSource(jint arg0);
		QAndroidJniObject setBufferSizeInBytes(jint arg0);
	};
} // namespace android::media

