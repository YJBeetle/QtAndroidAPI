#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./MediaCodecInfo_CodecCapabilities.def.hpp"
#include "../../JString.hpp"
#include "./MediaCodecInfo.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::MediaCodecInfo_CodecCapabilities MediaCodecInfo::getCapabilitiesForType(JString arg0) const
	{
		return callObjectMethod(
			"getCapabilitiesForType",
			"(Ljava/lang/String;)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			arg0.object<jstring>()
		);
	}
	inline JString MediaCodecInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JArray MediaCodecInfo::getSupportedTypes() const
	{
		return callObjectMethod(
			"getSupportedTypes",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean MediaCodecInfo::isEncoder() const
	{
		return callMethod<jboolean>(
			"isEncoder",
			"()Z"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
