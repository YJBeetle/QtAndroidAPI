#include "./MediaCodecInfo_CodecCapabilities.hpp"
#include "./MediaCodecInfo.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCodecInfo::MediaCodecInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
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
	jboolean MediaCodecInfo::isEncoder()
	{
		return callMethod<jboolean>(
			"isEncoder",
			"()Z"
		);
	}
} // namespace android::media

