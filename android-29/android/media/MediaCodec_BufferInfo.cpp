#include "./MediaCodec_BufferInfo.hpp"

namespace android::media
{
	// Fields
	jint MediaCodec_BufferInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jint MediaCodec_BufferInfo::offset()
	{
		return __thiz.getField<jint>(
			"offset"
		);
	}
	jlong MediaCodec_BufferInfo::presentationTimeUs()
	{
		return __thiz.getField<jlong>(
			"presentationTimeUs"
		);
	}
	jint MediaCodec_BufferInfo::size()
	{
		return __thiz.getField<jint>(
			"size"
		);
	}
	
	MediaCodec_BufferInfo::MediaCodec_BufferInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaCodec_BufferInfo::MediaCodec_BufferInfo()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$BufferInfo",
			"()V"
		);
	}
	
	// Methods
	void MediaCodec_BufferInfo::set(jint arg0, jint arg1, jlong arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIJI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

