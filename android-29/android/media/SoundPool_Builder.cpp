#include "./AudioAttributes.hpp"
#include "./SoundPool.hpp"
#include "./SoundPool_Builder.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	SoundPool_Builder::SoundPool_Builder()
		: JObject(
			"android.media.SoundPool$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::SoundPool SoundPool_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/SoundPool;"
		);
	}
	android::media::SoundPool_Builder SoundPool_Builder::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		return callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/SoundPool$Builder;",
			arg0.object()
		);
	}
	android::media::SoundPool_Builder SoundPool_Builder::setMaxStreams(jint arg0) const
	{
		return callObjectMethod(
			"setMaxStreams",
			"(I)Landroid/media/SoundPool$Builder;",
			arg0
		);
	}
} // namespace android::media

