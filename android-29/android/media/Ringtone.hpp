#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class AudioAttributes;
}

namespace android::media
{
	class Ringtone : public __JniBaseClass
	{
	public:
		// Fields
		
		Ringtone(QAndroidJniObject obj);
		// Constructors
		Ringtone() = default;
		
		// Methods
		QAndroidJniObject getAudioAttributes();
		jint getStreamType();
		jstring getTitle(android::content::Context arg0);
		jfloat getVolume();
		jboolean isLooping();
		jboolean isPlaying();
		void play();
		void setAudioAttributes(android::media::AudioAttributes arg0);
		void setLooping(jboolean arg0);
		void setStreamType(jint arg0);
		void setVolume(jfloat arg0);
		void stop();
	};
} // namespace android::media

