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
	MediaCodecInfo_EncoderCapabilities::MediaCodecInfo_EncoderCapabilities(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::util::Range MediaCodecInfo_EncoderCapabilities::getComplexityRange()
	{
		return callObjectMethod(
			"getComplexityRange",
			"()Landroid/util/Range;"
		);
	}
	android::util::Range MediaCodecInfo_EncoderCapabilities::getQualityRange()
	{
		return callObjectMethod(
			"getQualityRange",
			"()Landroid/util/Range;"
		);
	}
	jboolean MediaCodecInfo_EncoderCapabilities::isBitrateModeSupported(jint arg0)
	{
		return callMethod<jboolean>(
			"isBitrateModeSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

