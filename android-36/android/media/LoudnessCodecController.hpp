#pragma once

#include "./MediaCodec.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./LoudnessCodecController.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::LoudnessCodecController LoudnessCodecController::create(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.LoudnessCodecController",
			"create",
			"(I)Landroid/media/LoudnessCodecController;",
			arg0
		);
	}
	inline android::media::LoudnessCodecController LoudnessCodecController::create(jint arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.media.LoudnessCodecController",
			"create",
			"(ILjava/util/concurrent/Executor;Landroid/media/LoudnessCodecController$OnLoudnessCodecUpdateListener;)Landroid/media/LoudnessCodecController;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean LoudnessCodecController::addMediaCodec(android::media::MediaCodec arg0) const
	{
		return callMethod<jboolean>(
			"addMediaCodec",
			"(Landroid/media/MediaCodec;)Z",
			arg0.object()
		);
	}
	inline void LoudnessCodecController::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::os::Bundle LoudnessCodecController::getLoudnessCodecParams(android::media::MediaCodec arg0) const
	{
		return callObjectMethod(
			"getLoudnessCodecParams",
			"(Landroid/media/MediaCodec;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	inline void LoudnessCodecController::removeMediaCodec(android::media::MediaCodec arg0) const
	{
		callMethod<void>(
			"removeMediaCodec",
			"(Landroid/media/MediaCodec;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
