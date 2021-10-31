#include "./MediaCodecInfo_CodecCapabilities.hpp"
#include "./MediaCodecInfo.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCodecInfo::MediaCodecInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring MediaCodecInfo::getCanonicalName()
	{
		return callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::media::MediaCodecInfo_CodecCapabilities MediaCodecInfo::getCapabilitiesForType(jstring arg0)
	{
		return callObjectMethod(
			"getCapabilitiesForType",
			"(Ljava/lang/String;)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			arg0
		);
	}
	jstring MediaCodecInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray MediaCodecInfo::getSupportedTypes()
	{
		return callObjectMethod(
			"getSupportedTypes",
			"()[Ljava/lang/String;"
		).object<jarray>();
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

