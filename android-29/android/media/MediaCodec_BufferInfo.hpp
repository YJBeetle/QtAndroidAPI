#pragma once

#include "./MediaCodec_BufferInfo.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaCodec_BufferInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline jint MediaCodec_BufferInfo::offset()
	{
		return getField<jint>(
			"offset"
		);
	}
	inline jlong MediaCodec_BufferInfo::presentationTimeUs()
	{
		return getField<jlong>(
			"presentationTimeUs"
		);
	}
	inline jint MediaCodec_BufferInfo::size()
	{
		return getField<jint>(
			"size"
		);
	}
	
	// Constructors
	inline MediaCodec_BufferInfo::MediaCodec_BufferInfo()
		: JObject(
			"android.media.MediaCodec$BufferInfo",
			"()V"
		) {}
	
	// Methods
	inline void MediaCodec_BufferInfo::set(jint arg0, jint arg1, jlong arg2, jint arg3) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
