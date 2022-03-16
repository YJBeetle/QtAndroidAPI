#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./MediaCodecInfo_CodecCapabilities.hpp"
#include "../../JString.hpp"
#include "./MediaCodecInfo.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	JString MediaCodecInfo::getCanonicalName() const
	{
		return callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;"
		);
	}
	android::media::MediaCodecInfo_CodecCapabilities MediaCodecInfo::getCapabilitiesForType(JString arg0) const
	{
		return callObjectMethod(
			"getCapabilitiesForType",
			"(Ljava/lang/String;)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			arg0.object<jstring>()
		);
	}
	JString MediaCodecInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JArray MediaCodecInfo::getSupportedTypes() const
	{
		return callObjectMethod(
			"getSupportedTypes",
			"()[Ljava/lang/String;"
		);
	}
	jboolean MediaCodecInfo::isAlias() const
	{
		return callMethod<jboolean>(
			"isAlias",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isEncoder() const
	{
		return callMethod<jboolean>(
			"isEncoder",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isHardwareAccelerated() const
	{
		return callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isSoftwareOnly() const
	{
		return callMethod<jboolean>(
			"isSoftwareOnly",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isVendor() const
	{
		return callMethod<jboolean>(
			"isVendor",
			"()Z"
		);
	}
} // namespace android::media

