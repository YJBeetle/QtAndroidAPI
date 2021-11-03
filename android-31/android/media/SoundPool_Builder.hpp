#pragma once

#include "../../JObject.hpp"

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
	class SoundPool_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SoundPool_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SoundPool_Builder(QAndroidJniObject obj);
		
		// Constructors
		SoundPool_Builder();
		
		// Methods
		android::media::SoundPool build() const;
		android::media::SoundPool_Builder setAudioAttributes(android::media::AudioAttributes arg0) const;
		android::media::SoundPool_Builder setMaxStreams(jint arg0) const;
	};
} // namespace android::media

