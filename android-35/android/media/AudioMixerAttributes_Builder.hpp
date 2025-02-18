#pragma once

#include "./AudioFormat.def.hpp"
#include "./AudioMixerAttributes.def.hpp"
#include "./AudioMixerAttributes_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AudioMixerAttributes_Builder::AudioMixerAttributes_Builder(android::media::AudioFormat arg0)
		: JObject(
			"android.media.AudioMixerAttributes$Builder",
			"(Landroid/media/AudioFormat;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::AudioMixerAttributes AudioMixerAttributes_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioMixerAttributes;"
		);
	}
	inline android::media::AudioMixerAttributes_Builder AudioMixerAttributes_Builder::setMixerBehavior(jint arg0) const
	{
		return callObjectMethod(
			"setMixerBehavior",
			"(I)Landroid/media/AudioMixerAttributes$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
