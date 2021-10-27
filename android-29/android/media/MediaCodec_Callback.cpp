#include "./MediaCodec.hpp"
#include "./MediaCodec_BufferInfo.hpp"
#include "./MediaCodec_CodecException.hpp"
#include "./MediaFormat.hpp"
#include "./MediaCodec_Callback.hpp"

namespace android::media
{
	// Fields
	
	MediaCodec_Callback::MediaCodec_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaCodec_Callback::MediaCodec_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$Callback",
			"()V"
		);
	}
	
	// Methods
	void MediaCodec_Callback::onError(android::media::MediaCodec arg0, android::media::MediaCodec_CodecException arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Landroid/media/MediaCodec;Landroid/media/MediaCodec$CodecException;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaCodec_Callback::onInputBufferAvailable(android::media::MediaCodec arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onInputBufferAvailable",
			"(Landroid/media/MediaCodec;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MediaCodec_Callback::onOutputBufferAvailable(android::media::MediaCodec arg0, jint arg1, android::media::MediaCodec_BufferInfo arg2)
	{
		__thiz.callMethod<void>(
			"onOutputBufferAvailable",
			"(Landroid/media/MediaCodec;ILandroid/media/MediaCodec$BufferInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void MediaCodec_Callback::onOutputFormatChanged(android::media::MediaCodec arg0, android::media::MediaFormat arg1)
	{
		__thiz.callMethod<void>(
			"onOutputFormatChanged",
			"(Landroid/media/MediaCodec;Landroid/media/MediaFormat;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::media

