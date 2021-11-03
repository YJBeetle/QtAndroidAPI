#include "./MediaCodec.hpp"
#include "./MediaCodec_BufferInfo.hpp"
#include "./MediaCodec_CodecException.hpp"
#include "./MediaFormat.hpp"
#include "./MediaCodec_Callback.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCodec_Callback::MediaCodec_Callback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaCodec_Callback::MediaCodec_Callback()
		: JObject(
			"android.media.MediaCodec$Callback",
			"()V"
		) {}
	
	// Methods
	void MediaCodec_Callback::onError(android::media::MediaCodec arg0, android::media::MediaCodec_CodecException arg1)
	{
		callMethod<void>(
			"onError",
			"(Landroid/media/MediaCodec;Landroid/media/MediaCodec$CodecException;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaCodec_Callback::onInputBufferAvailable(android::media::MediaCodec arg0, jint arg1)
	{
		callMethod<void>(
			"onInputBufferAvailable",
			"(Landroid/media/MediaCodec;I)V",
			arg0.object(),
			arg1
		);
	}
	void MediaCodec_Callback::onOutputBufferAvailable(android::media::MediaCodec arg0, jint arg1, android::media::MediaCodec_BufferInfo arg2)
	{
		callMethod<void>(
			"onOutputBufferAvailable",
			"(Landroid/media/MediaCodec;ILandroid/media/MediaCodec$BufferInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void MediaCodec_Callback::onOutputFormatChanged(android::media::MediaCodec arg0, android::media::MediaFormat arg1)
	{
		callMethod<void>(
			"onOutputFormatChanged",
			"(Landroid/media/MediaCodec;Landroid/media/MediaFormat;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

