#include "../util/Range.hpp"
#include "./MediaCodecInfo_EncoderCapabilities.hpp"

namespace android::media
{
	// Fields
	jint MediaCodecInfo_EncoderCapabilities::BITRATE_MODE_CBR()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"BITRATE_MODE_CBR"
		);
	}
	jint MediaCodecInfo_EncoderCapabilities::BITRATE_MODE_CQ()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"BITRATE_MODE_CQ"
		);
	}
	jint MediaCodecInfo_EncoderCapabilities::BITRATE_MODE_VBR()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"BITRATE_MODE_VBR"
		);
	}
	
	// QAndroidJniObject forward
	MediaCodecInfo_EncoderCapabilities::MediaCodecInfo_EncoderCapabilities(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::util::Range MediaCodecInfo_EncoderCapabilities::getComplexityRange() const
	{
		return callObjectMethod(
			"getComplexityRange",
			"()Landroid/util/Range;"
		);
	}
	android::util::Range MediaCodecInfo_EncoderCapabilities::getQualityRange() const
	{
		return callObjectMethod(
			"getQualityRange",
			"()Landroid/util/Range;"
		);
	}
	jboolean MediaCodecInfo_EncoderCapabilities::isBitrateModeSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isBitrateModeSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

