#include "../../JArray.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaCodec_LinearBlock.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCodec_LinearBlock::MediaCodec_LinearBlock(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaCodec_LinearBlock::isCodecCopyFreeCompatible(JArray arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaCodec$LinearBlock",
			"isCodecCopyFreeCompatible",
			"([Ljava/lang/String;)Z",
			arg0.object<jarray>()
		);
	}
	android::media::MediaCodec_LinearBlock MediaCodec_LinearBlock::obtain(jint arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec$LinearBlock",
			"obtain",
			"(I[Ljava/lang/String;)Landroid/media/MediaCodec$LinearBlock;",
			arg0,
			arg1.object<jarray>()
		);
	}
	jboolean MediaCodec_LinearBlock::isMappable() const
	{
		return callMethod<jboolean>(
			"isMappable",
			"()Z"
		);
	}
	java::nio::ByteBuffer MediaCodec_LinearBlock::map() const
	{
		return callObjectMethod(
			"map",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	void MediaCodec_LinearBlock::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace android::media

