#pragma once

#include "./MediaCodec.def.hpp"
#include "./MediaCodec_BufferInfo.def.hpp"
#include "./MediaCodec_CodecException.def.hpp"
#include "./MediaFormat.def.hpp"
#include "./MediaCodec_Callback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaCodec_Callback::MediaCodec_Callback()
		: JObject(
			"android.media.MediaCodec$Callback",
			"()V"
		) {}
	
	// Methods
	inline void MediaCodec_Callback::onError(android::media::MediaCodec arg0, android::media::MediaCodec_CodecException arg1) const
	{
		callMethod<void>(
			"onError",
			"(Landroid/media/MediaCodec;Landroid/media/MediaCodec$CodecException;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaCodec_Callback::onInputBufferAvailable(android::media::MediaCodec arg0, jint arg1) const
	{
		callMethod<void>(
			"onInputBufferAvailable",
			"(Landroid/media/MediaCodec;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void MediaCodec_Callback::onOutputBufferAvailable(android::media::MediaCodec arg0, jint arg1, android::media::MediaCodec_BufferInfo arg2) const
	{
		callMethod<void>(
			"onOutputBufferAvailable",
			"(Landroid/media/MediaCodec;ILandroid/media/MediaCodec$BufferInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void MediaCodec_Callback::onOutputFormatChanged(android::media::MediaCodec arg0, android::media::MediaFormat arg1) const
	{
		callMethod<void>(
			"onOutputFormatChanged",
			"(Landroid/media/MediaCodec;Landroid/media/MediaFormat;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
