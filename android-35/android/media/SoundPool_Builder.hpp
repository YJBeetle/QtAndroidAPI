#pragma once

#include "../content/Context.def.hpp"
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
	inline android::media::SoundPool_Builder SoundPool_Builder::setAudioSessionId(jint arg0) const
	{
		return callObjectMethod(
			"setAudioSessionId",
			"(I)Landroid/media/SoundPool$Builder;",
			arg0
		);
	}
	inline android::media::SoundPool_Builder SoundPool_Builder::setContext(android::content::Context arg0) const
	{
		return callObjectMethod(
			"setContext",
			"(Landroid/content/Context;)Landroid/media/SoundPool$Builder;",
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
