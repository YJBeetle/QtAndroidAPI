#include "../util/Range.hpp"
#include "./MediaCodecInfo_AudioCapabilities.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCodecInfo_AudioCapabilities::MediaCodecInfo_AudioCapabilities(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::util::Range MediaCodecInfo_AudioCapabilities::getBitrateRange()
	{
		return callObjectMethod(
			"getBitrateRange",
			"()Landroid/util/Range;"
		);
	}
	jint MediaCodecInfo_AudioCapabilities::getMaxInputChannelCount()
	{
		return callMethod<jint>(
			"getMaxInputChannelCount",
			"()I"
		);
	}
	jarray MediaCodecInfo_AudioCapabilities::getSupportedSampleRateRanges()
	{
		return callObjectMethod(
			"getSupportedSampleRateRanges",
			"()[Landroid/util/Range;"
		).object<jarray>();
	}
	jintArray MediaCodecInfo_AudioCapabilities::getSupportedSampleRates()
	{
		return callObjectMethod(
			"getSupportedSampleRates",
			"()[I"
		).object<jintArray>();
	}
	jboolean MediaCodecInfo_AudioCapabilities::isSampleRateSupported(jint arg0)
	{
		return callMethod<jboolean>(
			"isSampleRateSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

