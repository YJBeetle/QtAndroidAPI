#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::hardware
{
	class HardwareBuffer;
}
namespace android::media
{
	class AudioPresentation;
}
namespace android::media
{
	class Image;
}
namespace android::media
{
	class MediaCodec_BufferInfo;
}
namespace android::media
{
	class MediaCodec_Callback;
}
namespace android::media
{
	class MediaCodec_CryptoInfo;
}
namespace android::media
{
	class MediaCodec_OutputFrame;
}
namespace android::media
{
	class MediaCodec_ParameterDescriptor;
}
namespace android::media
{
	class MediaCodec_QueueRequest;
}
namespace android::media
{
	class MediaCodecInfo;
}
namespace android::media
{
	class MediaCrypto;
}
namespace android::media
{
	class MediaDescrambler;
}
namespace android::media
{
	class MediaFormat;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::view
{
	class Surface;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaCodec : public JObject
	{
	public:
		// Fields
		static jint BUFFER_FLAG_CODEC_CONFIG();
		static jint BUFFER_FLAG_DECODE_ONLY();
		static jint BUFFER_FLAG_END_OF_STREAM();
		static jint BUFFER_FLAG_KEY_FRAME();
		static jint BUFFER_FLAG_PARTIAL_FRAME();
		static jint BUFFER_FLAG_SYNC_FRAME();
		static jint CONFIGURE_FLAG_ENCODE();
		static jint CONFIGURE_FLAG_USE_BLOCK_MODEL();
		static jint CONFIGURE_FLAG_USE_CRYPTO_ASYNC();
		static jint CRYPTO_MODE_AES_CBC();
		static jint CRYPTO_MODE_AES_CTR();
		static jint CRYPTO_MODE_UNENCRYPTED();
		static jint INFO_OUTPUT_BUFFERS_CHANGED();
		static jint INFO_OUTPUT_FORMAT_CHANGED();
		static jint INFO_TRY_AGAIN_LATER();
		static JString PARAMETER_KEY_HDR10_PLUS_INFO();
		static JString PARAMETER_KEY_LOW_LATENCY();
		static JString PARAMETER_KEY_OFFSET_TIME();
		static JString PARAMETER_KEY_REQUEST_SYNC_FRAME();
		static JString PARAMETER_KEY_SUSPEND();
		static JString PARAMETER_KEY_SUSPEND_TIME();
		static JString PARAMETER_KEY_TUNNEL_PEEK();
		static JString PARAMETER_KEY_VIDEO_BITRATE();
		static jint VIDEO_SCALING_MODE_SCALE_TO_FIT();
		static jint VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::MediaCodec createByCodecName(JString arg0);
		static android::media::MediaCodec createDecoderByType(JString arg0);
		static android::media::MediaCodec createEncoderByType(JString arg0);
		static android::view::Surface createPersistentInputSurface();
		static android::media::Image mapHardwareBuffer(android::hardware::HardwareBuffer arg0);
		void configure(android::media::MediaFormat arg0, android::view::Surface arg1, android::media::MediaCrypto arg2, jint arg3) const;
		void configure(android::media::MediaFormat arg0, android::view::Surface arg1, jint arg2, android::media::MediaDescrambler arg3) const;
		android::view::Surface createInputSurface() const;
		jint dequeueInputBuffer(jlong arg0) const;
		jint dequeueOutputBuffer(android::media::MediaCodec_BufferInfo arg0, jlong arg1) const;
		void flush() const;
		JString getCanonicalName() const;
		android::media::MediaCodecInfo getCodecInfo() const;
		java::nio::ByteBuffer getInputBuffer(jint arg0) const;
		JArray getInputBuffers() const;
		android::media::MediaFormat getInputFormat() const;
		android::media::Image getInputImage(jint arg0) const;
		android::os::PersistableBundle getMetrics() const;
		JString getName() const;
		java::nio::ByteBuffer getOutputBuffer(jint arg0) const;
		JArray getOutputBuffers() const;
		android::media::MediaFormat getOutputFormat() const;
		android::media::MediaFormat getOutputFormat(jint arg0) const;
		android::media::MediaCodec_OutputFrame getOutputFrame(jint arg0) const;
		android::media::Image getOutputImage(jint arg0) const;
		android::media::MediaCodec_ParameterDescriptor getParameterDescriptor(JString arg0) const;
		android::media::MediaCodec_QueueRequest getQueueRequest(jint arg0) const;
		JObject getSupportedVendorParameters() const;
		void queueInputBuffer(jint arg0, jint arg1, jint arg2, jlong arg3, jint arg4) const;
		void queueSecureInputBuffer(jint arg0, jint arg1, android::media::MediaCodec_CryptoInfo arg2, jlong arg3, jint arg4) const;
		void release() const;
		void releaseOutputBuffer(jint arg0, jboolean arg1) const;
		void releaseOutputBuffer(jint arg0, jlong arg1) const;
		void reset() const;
		void setAudioPresentation(android::media::AudioPresentation arg0) const;
		void setCallback(android::media::MediaCodec_Callback arg0) const;
		void setCallback(android::media::MediaCodec_Callback arg0, android::os::Handler arg1) const;
		void setInputSurface(android::view::Surface arg0) const;
		void setOnFirstTunnelFrameReadyListener(android::os::Handler arg0, JObject arg1) const;
		void setOnFrameRenderedListener(JObject arg0, android::os::Handler arg1) const;
		void setOutputSurface(android::view::Surface arg0) const;
		void setParameters(android::os::Bundle arg0) const;
		void setVideoScalingMode(jint arg0) const;
		void signalEndOfInputStream() const;
		void start() const;
		void stop() const;
		void subscribeToVendorParameters(JObject arg0) const;
		void unsubscribeFromVendorParameters(JObject arg0) const;
	};
} // namespace android::media

