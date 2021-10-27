#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AudioTrack_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		AudioTrack_Builder(QAndroidJniObject obj);
		// Constructors
		AudioTrack_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAudioAttributes(android::media::AudioAttributes arg0);
		QAndroidJniObject setAudioFormat(android::media::AudioFormat arg0);
		QAndroidJniObject setBufferSizeInBytes(jint arg0);
		QAndroidJniObject setOffloadedPlayback(jboolean arg0);
		QAndroidJniObject setPerformanceMode(jint arg0);
		QAndroidJniObject setSessionId(jint arg0);
		QAndroidJniObject setTransferMode(jint arg0);
	};
} // namespace android::media

