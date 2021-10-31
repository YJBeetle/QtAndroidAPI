#pragma once

#include "../../__JniBaseClass.hpp"

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
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaCodec : public __JniBaseClass
	{
	public:
		// Fields
		static jint BUFFER_FLAG_CODEC_CONFIG();
		static jint BUFFER_FLAG_END_OF_STREAM();
		static jint BUFFER_FLAG_KEY_FRAME();
		static jint BUFFER_FLAG_PARTIAL_FRAME();
		static jint BUFFER_FLAG_SYNC_FRAME();
		static jint CONFIGURE_FLAG_ENCODE();
		static jint CONFIGURE_FLAG_USE_BLOCK_MODEL();
		static jint CRYPTO_MODE_AES_CBC();
		static jint CRYPTO_MODE_AES_CTR();
		static jint CRYPTO_MODE_UNENCRYPTED();
		static jint INFO_OUTPUT_BUFFERS_CHANGED();
		static jint INFO_OUTPUT_FORMAT_CHANGED();
		static jint INFO_TRY_AGAIN_LATER();
		static jstring PARAMETER_KEY_HDR10_PLUS_INFO();
		static jstring PARAMETER_KEY_LOW_LATENCY();
		static jstring PARAMETER_KEY_OFFSET_TIME();
		static jstring PARAMETER_KEY_REQUEST_SYNC_FRAME();
		static jstring PARAMETER_KEY_SUSPEND();
		static jstring PARAMETER_KEY_SUSPEND_TIME();
		static jstring PARAMETER_KEY_VIDEO_BITRATE();
		static jint VIDEO_SCALING_MODE_SCALE_TO_FIT();
		static jint VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::MediaCodec createByCodecName(jstring arg0);
		static android::media::MediaCodec createDecoderByType(jstring arg0);
		static android::media::MediaCodec createEncoderByType(jstring arg0);
		static android::view::Surface createPersistentInputSurface();
		static android::media::Image mapHardwareBuffer(android::hardware::HardwareBuffer arg0);
		void configure(android::media::MediaFormat arg0, android::view::Surface arg1, android::media::MediaCrypto arg2, jint arg3);
		void configure(android::media::MediaFormat arg0, android::view::Surface arg1, jint arg2, android::media::MediaDescrambler arg3);
		android::view::Surface createInputSurface();
		jint dequeueInputBuffer(jlong arg0);
		jint dequeueOutputBuffer(android::media::MediaCodec_BufferInfo arg0, jlong arg1);
		void flush();
		jstring getCanonicalName();
		android::media::MediaCodecInfo getCodecInfo();
		java::nio::ByteBuffer getInputBuffer(jint arg0);
		jarray getInputBuffers();
		android::media::MediaFormat getInputFormat();
		android::media::Image getInputImage(jint arg0);
		android::os::PersistableBundle getMetrics();
		jstring getName();
		java::nio::ByteBuffer getOutputBuffer(jint arg0);
		jarray getOutputBuffers();
		android::media::MediaFormat getOutputFormat();
		android::media::MediaFormat getOutputFormat(jint arg0);
		android::media::MediaCodec_OutputFrame getOutputFrame(jint arg0);
		android::media::Image getOutputImage(jint arg0);
		android::media::MediaCodec_QueueRequest getQueueRequest(jint arg0);
		void queueInputBuffer(jint arg0, jint arg1, jint arg2, jlong arg3, jint arg4);
		void queueSecureInputBuffer(jint arg0, jint arg1, android::media::MediaCodec_CryptoInfo arg2, jlong arg3, jint arg4);
		void release();
		void releaseOutputBuffer(jint arg0, jboolean arg1);
		void releaseOutputBuffer(jint arg0, jlong arg1);
		void reset();
		void setAudioPresentation(android::media::AudioPresentation arg0);
		void setCallback(android::media::MediaCodec_Callback arg0);
		void setCallback(android::media::MediaCodec_Callback arg0, android::os::Handler arg1);
		void setInputSurface(android::view::Surface arg0);
		void setOnFrameRenderedListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setOutputSurface(android::view::Surface arg0);
		void setParameters(android::os::Bundle arg0);
		void setVideoScalingMode(jint arg0);
		void signalEndOfInputStream();
		void start();
		void stop();
	};
} // namespace android::media

