#pragma once

#include "../util/Range.def.hpp"
#include "./MediaCodecInfo_EncoderCapabilities.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaCodecInfo_EncoderCapabilities::BITRATE_MODE_CBR()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"BITRATE_MODE_CBR"
		);
	}
	inline jint MediaCodecInfo_EncoderCapabilities::BITRATE_MODE_CQ()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"BITRATE_MODE_CQ"
		);
	}
	inline jint MediaCodecInfo_EncoderCapabilities::BITRATE_MODE_VBR()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"BITRATE_MODE_VBR"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::util::Range MediaCodecInfo_EncoderCapabilities::getComplexityRange() const
	{
		return callObjectMethod(
			"getComplexityRange",
			"()Landroid/util/Range;"
		);
	}
	inline android::util::Range MediaCodecInfo_EncoderCapabilities::getQualityRange() const
	{
		return callObjectMethod(
			"getQualityRange",
			"()Landroid/util/Range;"
		);
	}
	inline jboolean MediaCodecInfo_EncoderCapabilities::isBitrateModeSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isBitrateModeSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
