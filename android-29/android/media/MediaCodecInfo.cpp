#include "./MediaCodecInfo_CodecCapabilities.hpp"
#include "./MediaCodecInfo.hpp"

namespace android::media
{
	// Fields
	
	MediaCodecInfo::MediaCodecInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MediaCodecInfo::getCanonicalName()
	{
		return __thiz.callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaCodecInfo::getCapabilitiesForType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCapabilitiesForType",
			"(Ljava/lang/String;)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			arg0
		);
	}
	jstring MediaCodecInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray MediaCodecInfo::getSupportedTypes()
	{
		return __thiz.callObjectMethod(
			"getSupportedTypes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean MediaCodecInfo::isAlias()
	{
		return __thiz.callMethod<jboolean>(
			"isAlias",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isEncoder()
	{
		return __thiz.callMethod<jboolean>(
			"isEncoder",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isHardwareAccelerated()
	{
		return __thiz.callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isSoftwareOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isSoftwareOnly",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isVendor()
	{
		return __thiz.callMethod<jboolean>(
			"isVendor",
			"()Z"
		);
	}
} // namespace android::media

