#include "../../JArray.hpp"
#include "./MediaCodecInfo_CodecCapabilities.hpp"
#include "../../JString.hpp"
#include "./MediaCodecInfo.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCodecInfo::MediaCodecInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString MediaCodecInfo::getCanonicalName()
	{
		return callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;"
		);
	}
	android::media::MediaCodecInfo_CodecCapabilities MediaCodecInfo::getCapabilitiesForType(JString arg0)
	{
		return callObjectMethod(
			"getCapabilitiesForType",
			"(Ljava/lang/String;)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			arg0.object<jstring>()
		);
	}
	JString MediaCodecInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JArray MediaCodecInfo::getSupportedTypes()
	{
		return callObjectMethod(
			"getSupportedTypes",
			"()[Ljava/lang/String;"
		);
	}
	jboolean MediaCodecInfo::isAlias()
	{
		return callMethod<jboolean>(
			"isAlias",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isEncoder()
	{
		return callMethod<jboolean>(
			"isEncoder",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isHardwareAccelerated()
	{
		return callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isSoftwareOnly()
	{
		return callMethod<jboolean>(
			"isSoftwareOnly",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isVendor()
	{
		return callMethod<jboolean>(
			"isVendor",
			"()Z"
		);
	}
} // namespace android::media

