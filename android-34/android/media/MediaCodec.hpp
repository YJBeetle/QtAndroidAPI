#pragma once

#include "../../JArray.hpp"
#include "../hardware/HardwareBuffer.def.hpp"
#include "./AudioPresentation.def.hpp"
#include "./Image.def.hpp"
#include "./MediaCodec_BufferInfo.def.hpp"
#include "./MediaCodec_Callback.def.hpp"
#include "./MediaCodec_CryptoInfo.def.hpp"
#include "./MediaCodec_OutputFrame.def.hpp"
#include "./MediaCodec_ParameterDescriptor.def.hpp"
#include "./MediaCodec_QueueRequest.def.hpp"
#include "./MediaCodecInfo.def.hpp"
#include "./MediaCrypto.def.hpp"
#include "./MediaDescrambler.def.hpp"
#include "./MediaFormat.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../view/Surface.def.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./MediaCodec.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaCodec::BUFFER_FLAG_CODEC_CONFIG()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_CODEC_CONFIG"
		);
	}
	inline jint MediaCodec::BUFFER_FLAG_DECODE_ONLY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_DECODE_ONLY"
		);
	}
	inline jint MediaCodec::BUFFER_FLAG_END_OF_STREAM()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_END_OF_STREAM"
		);
	}
	inline jint MediaCodec::BUFFER_FLAG_KEY_FRAME()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_KEY_FRAME"
		);
	}
	inline jint MediaCodec::BUFFER_FLAG_PARTIAL_FRAME()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_PARTIAL_FRAME"
		);
	}
	inline jint MediaCodec::BUFFER_FLAG_SYNC_FRAME()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_SYNC_FRAME"
		);
	}
	inline jint MediaCodec::CONFIGURE_FLAG_ENCODE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CONFIGURE_FLAG_ENCODE"
		);
	}
	inline jint MediaCodec::CONFIGURE_FLAG_USE_BLOCK_MODEL()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CONFIGURE_FLAG_USE_BLOCK_MODEL"
		);
	}
	inline jint MediaCodec::CONFIGURE_FLAG_USE_CRYPTO_ASYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CONFIGURE_FLAG_USE_CRYPTO_ASYNC"
		);
	}
	inline jint MediaCodec::CRYPTO_MODE_AES_CBC()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CRYPTO_MODE_AES_CBC"
		);
	}
	inline jint MediaCodec::CRYPTO_MODE_AES_CTR()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CRYPTO_MODE_AES_CTR"
		);
	}
	inline jint MediaCodec::CRYPTO_MODE_UNENCRYPTED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CRYPTO_MODE_UNENCRYPTED"
		);
	}
	inline jint MediaCodec::INFO_OUTPUT_BUFFERS_CHANGED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"INFO_OUTPUT_BUFFERS_CHANGED"
		);
	}
	inline jint MediaCodec::INFO_OUTPUT_FORMAT_CHANGED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"INFO_OUTPUT_FORMAT_CHANGED"
		);
	}
	inline jint MediaCodec::INFO_TRY_AGAIN_LATER()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"INFO_TRY_AGAIN_LATER"
		);
	}
	inline JString MediaCodec::PARAMETER_KEY_HDR10_PLUS_INFO()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_HDR10_PLUS_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec::PARAMETER_KEY_LOW_LATENCY()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_LOW_LATENCY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec::PARAMETER_KEY_OFFSET_TIME()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_OFFSET_TIME",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec::PARAMETER_KEY_REQUEST_SYNC_FRAME()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_REQUEST_SYNC_FRAME",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec::PARAMETER_KEY_SUSPEND()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_SUSPEND",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec::PARAMETER_KEY_SUSPEND_TIME()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_SUSPEND_TIME",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec::PARAMETER_KEY_TUNNEL_PEEK()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_TUNNEL_PEEK",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodec::PARAMETER_KEY_VIDEO_BITRATE()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_VIDEO_BITRATE",
			"Ljava/lang/String;"
		);
	}
	inline jint MediaCodec::VIDEO_SCALING_MODE_SCALE_TO_FIT()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT"
		);
	}
	inline jint MediaCodec::VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::media::MediaCodec MediaCodec::createByCodecName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"createByCodecName",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaCodec MediaCodec::createDecoderByType(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"createDecoderByType",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaCodec MediaCodec::createEncoderByType(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"createEncoderByType",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			arg0.object<jstring>()
		);
	}
	inline android::view::Surface MediaCodec::createPersistentInputSurface()
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"createPersistentInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline android::media::Image MediaCodec::mapHardwareBuffer(android::hardware::HardwareBuffer arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"mapHardwareBuffer",
			"(Landroid/hardware/HardwareBuffer;)Landroid/media/Image;",
			arg0.object()
		);
	}
	inline void MediaCodec::configure(android::media::MediaFormat arg0, android::view::Surface arg1, android::media::MediaCrypto arg2, jint arg3) const
	{
		callMethod<void>(
			"configure",
			"(Landroid/media/MediaFormat;Landroid/view/Surface;Landroid/media/MediaCrypto;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline void MediaCodec::configure(android::media::MediaFormat arg0, android::view::Surface arg1, jint arg2, android::media::MediaDescrambler arg3) const
	{
		callMethod<void>(
			"configure",
			"(Landroid/media/MediaFormat;Landroid/view/Surface;ILandroid/media/MediaDescrambler;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline android::view::Surface MediaCodec::createInputSurface() const
	{
		return callObjectMethod(
			"createInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline jint MediaCodec::dequeueInputBuffer(jlong arg0) const
	{
		return callMethod<jint>(
			"dequeueInputBuffer",
			"(J)I",
			arg0
		);
	}
	inline jint MediaCodec::dequeueOutputBuffer(android::media::MediaCodec_BufferInfo arg0, jlong arg1) const
	{
		return callMethod<jint>(
			"dequeueOutputBuffer",
			"(Landroid/media/MediaCodec$BufferInfo;J)I",
			arg0.object(),
			arg1
		);
	}
	inline void MediaCodec::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline JString MediaCodec::getCanonicalName() const
	{
		return callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;"
		);
	}
	inline android::media::MediaCodecInfo MediaCodec::getCodecInfo() const
	{
		return callObjectMethod(
			"getCodecInfo",
			"()Landroid/media/MediaCodecInfo;"
		);
	}
	inline java::nio::ByteBuffer MediaCodec::getInputBuffer(jint arg0) const
	{
		return callObjectMethod(
			"getInputBuffer",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline JArray MediaCodec::getInputBuffers() const
	{
		return callObjectMethod(
			"getInputBuffers",
			"()[Ljava/nio/ByteBuffer;"
		);
	}
	inline android::media::MediaFormat MediaCodec::getInputFormat() const
	{
		return callObjectMethod(
			"getInputFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	inline android::media::Image MediaCodec::getInputImage(jint arg0) const
	{
		return callObjectMethod(
			"getInputImage",
			"(I)Landroid/media/Image;",
			arg0
		);
	}
	inline android::os::PersistableBundle MediaCodec::getMetrics() const
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JString MediaCodec::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline java::nio::ByteBuffer MediaCodec::getOutputBuffer(jint arg0) const
	{
		return callObjectMethod(
			"getOutputBuffer",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline JArray MediaCodec::getOutputBuffers() const
	{
		return callObjectMethod(
			"getOutputBuffers",
			"()[Ljava/nio/ByteBuffer;"
		);
	}
	inline android::media::MediaFormat MediaCodec::getOutputFormat() const
	{
		return callObjectMethod(
			"getOutputFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	inline android::media::MediaFormat MediaCodec::getOutputFormat(jint arg0) const
	{
		return callObjectMethod(
			"getOutputFormat",
			"(I)Landroid/media/MediaFormat;",
			arg0
		);
	}
	inline android::media::MediaCodec_OutputFrame MediaCodec::getOutputFrame(jint arg0) const
	{
		return callObjectMethod(
			"getOutputFrame",
			"(I)Landroid/media/MediaCodec$OutputFrame;",
			arg0
		);
	}
	inline android::media::Image MediaCodec::getOutputImage(jint arg0) const
	{
		return callObjectMethod(
			"getOutputImage",
			"(I)Landroid/media/Image;",
			arg0
		);
	}
	inline android::media::MediaCodec_ParameterDescriptor MediaCodec::getParameterDescriptor(JString arg0) const
	{
		return callObjectMethod(
			"getParameterDescriptor",
			"(Ljava/lang/String;)Landroid/media/MediaCodec$ParameterDescriptor;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaCodec_QueueRequest MediaCodec::getQueueRequest(jint arg0) const
	{
		return callObjectMethod(
			"getQueueRequest",
			"(I)Landroid/media/MediaCodec$QueueRequest;",
			arg0
		);
	}
	inline JObject MediaCodec::getSupportedVendorParameters() const
	{
		return callObjectMethod(
			"getSupportedVendorParameters",
			"()Ljava/util/List;"
		);
	}
	inline void MediaCodec::queueInputBuffer(jint arg0, jint arg1, jint arg2, jlong arg3, jint arg4) const
	{
		callMethod<void>(
			"queueInputBuffer",
			"(IIIJI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void MediaCodec::queueSecureInputBuffer(jint arg0, jint arg1, android::media::MediaCodec_CryptoInfo arg2, jlong arg3, jint arg4) const
	{
		callMethod<void>(
			"queueSecureInputBuffer",
			"(IILandroid/media/MediaCodec$CryptoInfo;JI)V",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4
		);
	}
	inline void MediaCodec::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaCodec::releaseOutputBuffer(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"releaseOutputBuffer",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void MediaCodec::releaseOutputBuffer(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"releaseOutputBuffer",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void MediaCodec::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void MediaCodec::setAudioPresentation(android::media::AudioPresentation arg0) const
	{
		callMethod<void>(
			"setAudioPresentation",
			"(Landroid/media/AudioPresentation;)V",
			arg0.object()
		);
	}
	inline void MediaCodec::setCallback(android::media::MediaCodec_Callback arg0) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaCodec$Callback;)V",
			arg0.object()
		);
	}
	inline void MediaCodec::setCallback(android::media::MediaCodec_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaCodec$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaCodec::setInputSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setInputSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void MediaCodec::setOnFirstTunnelFrameReadyListener(android::os::Handler arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOnFirstTunnelFrameReadyListener",
			"(Landroid/os/Handler;Landroid/media/MediaCodec$OnFirstTunnelFrameReadyListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaCodec::setOnFrameRenderedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnFrameRenderedListener",
			"(Landroid/media/MediaCodec$OnFrameRenderedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaCodec::setOutputSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setOutputSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void MediaCodec::setParameters(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setParameters",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void MediaCodec::setVideoScalingMode(jint arg0) const
	{
		callMethod<void>(
			"setVideoScalingMode",
			"(I)V",
			arg0
		);
	}
	inline void MediaCodec::signalEndOfInputStream() const
	{
		callMethod<void>(
			"signalEndOfInputStream",
			"()V"
		);
	}
	inline void MediaCodec::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void MediaCodec::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline void MediaCodec::subscribeToVendorParameters(JObject arg0) const
	{
		callMethod<void>(
			"subscribeToVendorParameters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void MediaCodec::unsubscribeFromVendorParameters(JObject arg0) const
	{
		callMethod<void>(
			"unsubscribeFromVendorParameters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
