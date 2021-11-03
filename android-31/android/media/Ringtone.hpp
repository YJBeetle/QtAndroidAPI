#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class AudioAttributes;
}
class JString;

namespace android::media
{
	class Ringtone : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Ringtone(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Ringtone(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::AudioAttributes getAudioAttributes() const;
		jint getStreamType() const;
		JString getTitle(android::content::Context arg0) const;
		jfloat getVolume() const;
		jboolean isHapticGeneratorEnabled() const;
		jboolean isLooping() const;
		jboolean isPlaying() const;
		void play() const;
		void setAudioAttributes(android::media::AudioAttributes arg0) const;
		jboolean setHapticGeneratorEnabled(jboolean arg0) const;
		void setLooping(jboolean arg0) const;
		void setStreamType(jint arg0) const;
		void setVolume(jfloat arg0) const;
		void stop() const;
	};
} // namespace android::media

