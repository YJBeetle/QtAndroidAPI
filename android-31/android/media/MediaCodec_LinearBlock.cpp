#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaCodec_LinearBlock.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCodec_LinearBlock::MediaCodec_LinearBlock(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaCodec_LinearBlock::isCodecCopyFreeCompatible(jarray arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaCodec$LinearBlock",
			"isCodecCopyFreeCompatible",
			"([Ljava/lang/String;)Z",
			arg0
		);
	}
	android::media::MediaCodec_LinearBlock MediaCodec_LinearBlock::obtain(jint arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec$LinearBlock",
			"obtain",
			"(I[Ljava/lang/String;)Landroid/media/MediaCodec$LinearBlock;",
			arg0,
			arg1
		);
	}
	jboolean MediaCodec_LinearBlock::isMappable()
	{
		return callMethod<jboolean>(
			"isMappable",
			"()Z"
		);
	}
	java::nio::ByteBuffer MediaCodec_LinearBlock::map()
	{
		return callObjectMethod(
			"map",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	void MediaCodec_LinearBlock::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace android::media

