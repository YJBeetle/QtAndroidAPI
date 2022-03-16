#include "./MediaCodec_CryptoInfo_Pattern.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	MediaCodec_CryptoInfo_Pattern::MediaCodec_CryptoInfo_Pattern(jint arg0, jint arg1)
		: JObject(
			"android.media.MediaCodec$CryptoInfo$Pattern",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint MediaCodec_CryptoInfo_Pattern::getEncryptBlocks() const
	{
		return callMethod<jint>(
			"getEncryptBlocks",
			"()I"
		);
	}
	jint MediaCodec_CryptoInfo_Pattern::getSkipBlocks() const
	{
		return callMethod<jint>(
			"getSkipBlocks",
			"()I"
		);
	}
	void MediaCodec_CryptoInfo_Pattern::set(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::media

