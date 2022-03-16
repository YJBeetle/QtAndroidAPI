#include "./MediaCodec_BufferInfo.hpp"

namespace android::media
{
	// Fields
	jint MediaCodec_BufferInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jint MediaCodec_BufferInfo::offset()
	{
		return getField<jint>(
			"offset"
		);
	}
	jlong MediaCodec_BufferInfo::presentationTimeUs()
	{
		return getField<jlong>(
			"presentationTimeUs"
		);
	}
	jint MediaCodec_BufferInfo::size()
	{
		return getField<jint>(
			"size"
		);
	}
	
	// Constructors
	MediaCodec_BufferInfo::MediaCodec_BufferInfo()
		: JObject(
			"android.media.MediaCodec$BufferInfo",
			"()V"
		) {}
	
	// Methods
	void MediaCodec_BufferInfo::set(jint arg0, jint arg1, jlong arg2, jint arg3) const
	{
		callMethod<void>(
			"set",
			"(IIJI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

