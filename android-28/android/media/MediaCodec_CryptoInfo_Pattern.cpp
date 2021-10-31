#include "./MediaCodec_CryptoInfo_Pattern.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCodec_CryptoInfo_Pattern::MediaCodec_CryptoInfo_Pattern(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaCodec_CryptoInfo_Pattern::MediaCodec_CryptoInfo_Pattern(jint arg0, jint arg1)
		: __JniBaseClass(
			"android.media.MediaCodec$CryptoInfo$Pattern",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint MediaCodec_CryptoInfo_Pattern::getEncryptBlocks()
	{
		return callMethod<jint>(
			"getEncryptBlocks",
			"()I"
		);
	}
	jint MediaCodec_CryptoInfo_Pattern::getSkipBlocks()
	{
		return callMethod<jint>(
			"getSkipBlocks",
			"()I"
		);
	}
	void MediaCodec_CryptoInfo_Pattern::set(jint arg0, jint arg1)
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::media

