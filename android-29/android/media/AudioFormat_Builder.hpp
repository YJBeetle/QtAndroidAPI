#pragma once

#include "./AudioFormat.def.hpp"
#include "./AudioFormat_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AudioFormat_Builder::AudioFormat_Builder()
		: JObject(
			"android.media.AudioFormat$Builder",
			"()V"
		) {}
	inline AudioFormat_Builder::AudioFormat_Builder(android::media::AudioFormat arg0)
		: JObject(
			"android.media.AudioFormat$Builder",
			"(Landroid/media/AudioFormat;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::AudioFormat AudioFormat_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioFormat;"
		);
	}
	inline android::media::AudioFormat_Builder AudioFormat_Builder::setChannelIndexMask(jint arg0) const
	{
		return callObjectMethod(
			"setChannelIndexMask",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
	inline android::media::AudioFormat_Builder AudioFormat_Builder::setChannelMask(jint arg0) const
	{
		return callObjectMethod(
			"setChannelMask",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
	inline android::media::AudioFormat_Builder AudioFormat_Builder::setEncoding(jint arg0) const
	{
		return callObjectMethod(
			"setEncoding",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
	inline android::media::AudioFormat_Builder AudioFormat_Builder::setSampleRate(jint arg0) const
	{
		return callObjectMethod(
			"setSampleRate",
			"(I)Landroid/media/AudioFormat$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

