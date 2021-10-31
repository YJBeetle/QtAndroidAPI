#include "./MediaCodec_CryptoInfo_Pattern.hpp"

namespace android::media
{
	// Fields
	
	MediaCodec_CryptoInfo_Pattern::MediaCodec_CryptoInfo_Pattern(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaCodec_CryptoInfo_Pattern::MediaCodec_CryptoInfo_Pattern(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$CryptoInfo$Pattern",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint MediaCodec_CryptoInfo_Pattern::getEncryptBlocks()
	{
		return __thiz.callMethod<jint>(
			"getEncryptBlocks",
			"()I"
		);
	}
	jint MediaCodec_CryptoInfo_Pattern::getSkipBlocks()
	{
		return __thiz.callMethod<jint>(
			"getSkipBlocks",
			"()I"
		);
	}
	void MediaCodec_CryptoInfo_Pattern::set(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::media

