#include "../../JArray.hpp"
#include "../hardware/HardwareBuffer.hpp"
#include "./AudioPresentation.hpp"
#include "./Image.hpp"
#include "./MediaCodec_BufferInfo.hpp"
#include "./MediaCodec_Callback.hpp"
#include "./MediaCodec_CryptoInfo.hpp"
#include "./MediaCodec_OutputFrame.hpp"
#include "./MediaCodec_ParameterDescriptor.hpp"
#include "./MediaCodec_QueueRequest.hpp"
#include "./MediaCodecInfo.hpp"
#include "./MediaCrypto.hpp"
#include "./MediaDescrambler.hpp"
#include "./MediaFormat.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../view/Surface.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaCodec.hpp"

namespace android::media
{
	// Fields
	jint MediaCodec::BUFFER_FLAG_CODEC_CONFIG()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_CODEC_CONFIG"
		);
	}
	jint MediaCodec::BUFFER_FLAG_END_OF_STREAM()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_END_OF_STREAM"
		);
	}
	jint MediaCodec::BUFFER_FLAG_KEY_FRAME()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_KEY_FRAME"
		);
	}
	jint MediaCodec::BUFFER_FLAG_PARTIAL_FRAME()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_PARTIAL_FRAME"
		);
	}
	jint MediaCodec::BUFFER_FLAG_SYNC_FRAME()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_SYNC_FRAME"
		);
	}
	jint MediaCodec::CONFIGURE_FLAG_ENCODE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CONFIGURE_FLAG_ENCODE"
		);
	}
	jint MediaCodec::CONFIGURE_FLAG_USE_BLOCK_MODEL()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CONFIGURE_FLAG_USE_BLOCK_MODEL"
		);
	}
	jint MediaCodec::CRYPTO_MODE_AES_CBC()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CRYPTO_MODE_AES_CBC"
		);
	}
	jint MediaCodec::CRYPTO_MODE_AES_CTR()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CRYPTO_MODE_AES_CTR"
		);
	}
	jint MediaCodec::CRYPTO_MODE_UNENCRYPTED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"CRYPTO_MODE_UNENCRYPTED"
		);
	}
	jint MediaCodec::INFO_OUTPUT_BUFFERS_CHANGED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"INFO_OUTPUT_BUFFERS_CHANGED"
		);
	}
	jint MediaCodec::INFO_OUTPUT_FORMAT_CHANGED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"INFO_OUTPUT_FORMAT_CHANGED"
		);
	}
	jint MediaCodec::INFO_TRY_AGAIN_LATER()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"INFO_TRY_AGAIN_LATER"
		);
	}
	JString MediaCodec::PARAMETER_KEY_HDR10_PLUS_INFO()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_HDR10_PLUS_INFO",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodec::PARAMETER_KEY_LOW_LATENCY()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_LOW_LATENCY",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodec::PARAMETER_KEY_OFFSET_TIME()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_OFFSET_TIME",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodec::PARAMETER_KEY_REQUEST_SYNC_FRAME()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_REQUEST_SYNC_FRAME",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodec::PARAMETER_KEY_SUSPEND()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_SUSPEND",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodec::PARAMETER_KEY_SUSPEND_TIME()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_SUSPEND_TIME",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodec::PARAMETER_KEY_TUNNEL_PEEK()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_TUNNEL_PEEK",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodec::PARAMETER_KEY_VIDEO_BITRATE()
	{
		return getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_VIDEO_BITRATE",
			"Ljava/lang/String;"
		);
	}
	jint MediaCodec::VIDEO_SCALING_MODE_SCALE_TO_FIT()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT"
		);
	}
	jint MediaCodec::VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING"
		);
	}
	
	// QJniObject forward
	MediaCodec::MediaCodec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::MediaCodec MediaCodec::createByCodecName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"createByCodecName",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaCodec MediaCodec::createDecoderByType(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"createDecoderByType",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaCodec MediaCodec::createEncoderByType(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"createEncoderByType",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			arg0.object<jstring>()
		);
	}
	android::view::Surface MediaCodec::createPersistentInputSurface()
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"createPersistentInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	android::media::Image MediaCodec::mapHardwareBuffer(android::hardware::HardwareBuffer arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec",
			"mapHardwareBuffer",
			"(Landroid/hardware/HardwareBuffer;)Landroid/media/Image;",
			arg0.object()
		);
	}
	void MediaCodec::configure(android::media::MediaFormat arg0, android::view::Surface arg1, android::media::MediaCrypto arg2, jint arg3) const
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
	void MediaCodec::configure(android::media::MediaFormat arg0, android::view::Surface arg1, jint arg2, android::media::MediaDescrambler arg3) const
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
	android::view::Surface MediaCodec::createInputSurface() const
	{
		return callObjectMethod(
			"createInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	jint MediaCodec::dequeueInputBuffer(jlong arg0) const
	{
		return callMethod<jint>(
			"dequeueInputBuffer",
			"(J)I",
			arg0
		);
	}
	jint MediaCodec::dequeueOutputBuffer(android::media::MediaCodec_BufferInfo arg0, jlong arg1) const
	{
		return callMethod<jint>(
			"dequeueOutputBuffer",
			"(Landroid/media/MediaCodec$BufferInfo;J)I",
			arg0.object(),
			arg1
		);
	}
	void MediaCodec::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	JString MediaCodec::getCanonicalName() const
	{
		return callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;"
		);
	}
	android::media::MediaCodecInfo MediaCodec::getCodecInfo() const
	{
		return callObjectMethod(
			"getCodecInfo",
			"()Landroid/media/MediaCodecInfo;"
		);
	}
	java::nio::ByteBuffer MediaCodec::getInputBuffer(jint arg0) const
	{
		return callObjectMethod(
			"getInputBuffer",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	JArray MediaCodec::getInputBuffers() const
	{
		return callObjectMethod(
			"getInputBuffers",
			"()[Ljava/nio/ByteBuffer;"
		);
	}
	android::media::MediaFormat MediaCodec::getInputFormat() const
	{
		return callObjectMethod(
			"getInputFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	android::media::Image MediaCodec::getInputImage(jint arg0) const
	{
		return callObjectMethod(
			"getInputImage",
			"(I)Landroid/media/Image;",
			arg0
		);
	}
	android::os::PersistableBundle MediaCodec::getMetrics() const
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	JString MediaCodec::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	java::nio::ByteBuffer MediaCodec::getOutputBuffer(jint arg0) const
	{
		return callObjectMethod(
			"getOutputBuffer",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	JArray MediaCodec::getOutputBuffers() const
	{
		return callObjectMethod(
			"getOutputBuffers",
			"()[Ljava/nio/ByteBuffer;"
		);
	}
	android::media::MediaFormat MediaCodec::getOutputFormat() const
	{
		return callObjectMethod(
			"getOutputFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	android::media::MediaFormat MediaCodec::getOutputFormat(jint arg0) const
	{
		return callObjectMethod(
			"getOutputFormat",
			"(I)Landroid/media/MediaFormat;",
			arg0
		);
	}
	android::media::MediaCodec_OutputFrame MediaCodec::getOutputFrame(jint arg0) const
	{
		return callObjectMethod(
			"getOutputFrame",
			"(I)Landroid/media/MediaCodec$OutputFrame;",
			arg0
		);
	}
	android::media::Image MediaCodec::getOutputImage(jint arg0) const
	{
		return callObjectMethod(
			"getOutputImage",
			"(I)Landroid/media/Image;",
			arg0
		);
	}
	android::media::MediaCodec_ParameterDescriptor MediaCodec::getParameterDescriptor(JString arg0) const
	{
		return callObjectMethod(
			"getParameterDescriptor",
			"(Ljava/lang/String;)Landroid/media/MediaCodec$ParameterDescriptor;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec::getQueueRequest(jint arg0) const
	{
		return callObjectMethod(
			"getQueueRequest",
			"(I)Landroid/media/MediaCodec$QueueRequest;",
			arg0
		);
	}
	JObject MediaCodec::getSupportedVendorParameters() const
	{
		return callObjectMethod(
			"getSupportedVendorParameters",
			"()Ljava/util/List;"
		);
	}
	void MediaCodec::queueInputBuffer(jint arg0, jint arg1, jint arg2, jlong arg3, jint arg4) const
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
	void MediaCodec::queueSecureInputBuffer(jint arg0, jint arg1, android::media::MediaCodec_CryptoInfo arg2, jlong arg3, jint arg4) const
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
	void MediaCodec::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaCodec::releaseOutputBuffer(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"releaseOutputBuffer",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void MediaCodec::releaseOutputBuffer(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"releaseOutputBuffer",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void MediaCodec::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void MediaCodec::setAudioPresentation(android::media::AudioPresentation arg0) const
	{
		callMethod<void>(
			"setAudioPresentation",
			"(Landroid/media/AudioPresentation;)V",
			arg0.object()
		);
	}
	void MediaCodec::setCallback(android::media::MediaCodec_Callback arg0) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaCodec$Callback;)V",
			arg0.object()
		);
	}
	void MediaCodec::setCallback(android::media::MediaCodec_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaCodec$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaCodec::setInputSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setInputSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void MediaCodec::setOnFirstTunnelFrameReadyListener(android::os::Handler arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOnFirstTunnelFrameReadyListener",
			"(Landroid/os/Handler;Landroid/media/MediaCodec$OnFirstTunnelFrameReadyListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaCodec::setOnFrameRenderedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnFrameRenderedListener",
			"(Landroid/media/MediaCodec$OnFrameRenderedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaCodec::setOutputSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setOutputSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void MediaCodec::setParameters(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setParameters",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void MediaCodec::setVideoScalingMode(jint arg0) const
	{
		callMethod<void>(
			"setVideoScalingMode",
			"(I)V",
			arg0
		);
	}
	void MediaCodec::signalEndOfInputStream() const
	{
		callMethod<void>(
			"signalEndOfInputStream",
			"()V"
		);
	}
	void MediaCodec::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void MediaCodec::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	void MediaCodec::subscribeToVendorParameters(JObject arg0) const
	{
		callMethod<void>(
			"subscribeToVendorParameters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MediaCodec::unsubscribeFromVendorParameters(JObject arg0) const
	{
		callMethod<void>(
			"unsubscribeFromVendorParameters",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

