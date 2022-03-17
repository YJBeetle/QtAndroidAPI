#pragma once

#include "./AudioTrack.def.hpp"
#include "./AudioTrack_StreamEventCallback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AudioTrack_StreamEventCallback::AudioTrack_StreamEventCallback()
		: JObject(
			"android.media.AudioTrack$StreamEventCallback",
			"()V"
		) {}
	
	// Methods
	inline void AudioTrack_StreamEventCallback::onDataRequest(android::media::AudioTrack arg0, jint arg1) const
	{
		callMethod<void>(
			"onDataRequest",
			"(Landroid/media/AudioTrack;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AudioTrack_StreamEventCallback::onPresentationEnded(android::media::AudioTrack arg0) const
	{
		callMethod<void>(
			"onPresentationEnded",
			"(Landroid/media/AudioTrack;)V",
			arg0.object()
		);
	}
	inline void AudioTrack_StreamEventCallback::onTearDown(android::media::AudioTrack arg0) const
	{
		callMethod<void>(
			"onTearDown",
			"(Landroid/media/AudioTrack;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

