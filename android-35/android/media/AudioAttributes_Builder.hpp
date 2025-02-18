#pragma once

#include "./AudioAttributes.def.hpp"
#include "./AudioAttributes_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AudioAttributes_Builder::AudioAttributes_Builder()
		: JObject(
			"android.media.AudioAttributes$Builder",
			"()V"
		) {}
	inline AudioAttributes_Builder::AudioAttributes_Builder(android::media::AudioAttributes arg0)
		: JObject(
			"android.media.AudioAttributes$Builder",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::AudioAttributes AudioAttributes_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioAttributes;"
		);
	}
	inline android::media::AudioAttributes_Builder AudioAttributes_Builder::setAllowedCapturePolicy(jint arg0) const
	{
		return callObjectMethod(
			"setAllowedCapturePolicy",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	inline android::media::AudioAttributes_Builder AudioAttributes_Builder::setContentType(jint arg0) const
	{
		return callObjectMethod(
			"setContentType",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	inline android::media::AudioAttributes_Builder AudioAttributes_Builder::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	inline android::media::AudioAttributes_Builder AudioAttributes_Builder::setHapticChannelsMuted(jboolean arg0) const
	{
		return callObjectMethod(
			"setHapticChannelsMuted",
			"(Z)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	inline android::media::AudioAttributes_Builder AudioAttributes_Builder::setIsContentSpatialized(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsContentSpatialized",
			"(Z)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	inline android::media::AudioAttributes_Builder AudioAttributes_Builder::setLegacyStreamType(jint arg0) const
	{
		return callObjectMethod(
			"setLegacyStreamType",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	inline android::media::AudioAttributes_Builder AudioAttributes_Builder::setSpatializationBehavior(jint arg0) const
	{
		return callObjectMethod(
			"setSpatializationBehavior",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
	inline android::media::AudioAttributes_Builder AudioAttributes_Builder::setUsage(jint arg0) const
	{
		return callObjectMethod(
			"setUsage",
			"(I)Landroid/media/AudioAttributes$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
