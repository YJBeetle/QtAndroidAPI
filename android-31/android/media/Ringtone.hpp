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
		
		// QJniObject forward
		template<typename ...Ts> explicit Ringtone(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Ringtone(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::AudioAttributes getAudioAttributes();
		jint getStreamType();
		jstring getTitle(android::content::Context arg0);
		jfloat getVolume();
		jboolean isHapticGeneratorEnabled();
		jboolean isLooping();
		jboolean isPlaying();
		void play();
		void setAudioAttributes(android::media::AudioAttributes arg0);
		jboolean setHapticGeneratorEnabled(jboolean arg0);
		void setLooping(jboolean arg0);
		void setStreamType(jint arg0);
		void setVolume(jfloat arg0);
		void stop();
	};
} // namespace android::media

