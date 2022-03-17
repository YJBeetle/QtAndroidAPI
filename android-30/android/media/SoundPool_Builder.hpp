#pragma once

#include "./AudioAttributes.def.hpp"
#include "./SoundPool.def.hpp"
#include "./SoundPool_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline SoundPool_Builder::SoundPool_Builder()
		: JObject(
			"android.media.SoundPool$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::SoundPool SoundPool_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/SoundPool;"
		);
	}
	inline android::media::SoundPool_Builder SoundPool_Builder::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		return callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/SoundPool$Builder;",
			arg0.object()
		);
	}
	inline android::media::SoundPool_Builder SoundPool_Builder::setMaxStreams(jint arg0) const
	{
		return callObjectMethod(
			"setMaxStreams",
			"(I)Landroid/media/SoundPool$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

