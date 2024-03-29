#pragma once

#include "./MediaCodec_CryptoInfo_Pattern.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaCodec_CryptoInfo_Pattern::MediaCodec_CryptoInfo_Pattern(jint arg0, jint arg1)
		: JObject(
			"android.media.MediaCodec$CryptoInfo$Pattern",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint MediaCodec_CryptoInfo_Pattern::getEncryptBlocks() const
	{
		return callMethod<jint>(
			"getEncryptBlocks",
			"()I"
		);
	}
	inline jint MediaCodec_CryptoInfo_Pattern::getSkipBlocks() const
	{
		return callMethod<jint>(
			"getSkipBlocks",
			"()I"
		);
	}
	inline void MediaCodec_CryptoInfo_Pattern::set(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
