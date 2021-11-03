#include "../../JArray.hpp"
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
	jboolean MediaCodecInfo::isEncoder()
	{
		return callMethod<jboolean>(
			"isEncoder",
			"()Z"
		);
	}
} // namespace android::media

