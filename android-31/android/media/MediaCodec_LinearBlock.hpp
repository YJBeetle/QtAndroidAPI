#pragma once

#include "../../JArray.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./MediaCodec_LinearBlock.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MediaCodec_LinearBlock::isCodecCopyFreeCompatible(JArray arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaCodec$LinearBlock",
			"isCodecCopyFreeCompatible",
			"([Ljava/lang/String;)Z",
			arg0.object<jarray>()
		);
	}
	inline android::media::MediaCodec_LinearBlock MediaCodec_LinearBlock::obtain(jint arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodec$LinearBlock",
			"obtain",
			"(I[Ljava/lang/String;)Landroid/media/MediaCodec$LinearBlock;",
			arg0,
			arg1.object<jarray>()
		);
	}
	inline jboolean MediaCodec_LinearBlock::isMappable() const
	{
		return callMethod<jboolean>(
			"isMappable",
			"()Z"
		);
	}
	inline java::nio::ByteBuffer MediaCodec_LinearBlock::map() const
	{
		return callObjectMethod(
			"map",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline void MediaCodec_LinearBlock::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace android::media

// Base class headers

