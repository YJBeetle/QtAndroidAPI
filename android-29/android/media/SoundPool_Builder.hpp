#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class SoundPool;
}

namespace android::media
{
	class SoundPool_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		SoundPool_Builder(QAndroidJniObject obj);
		// Constructors
		SoundPool_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAudioAttributes(android::media::AudioAttributes arg0);
		QAndroidJniObject setMaxStreams(jint arg0);
	};
} // namespace android::media

