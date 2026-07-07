#pragma once

#include "../../JArray.hpp"
#include "./MediaCodecInfo_CodecCapabilities.def.hpp"
#include "../../JString.hpp"
#include "./MediaCodecInfo.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaCodecInfo::SECURITY_MODEL_MEMORY_SAFE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo",
			"SECURITY_MODEL_MEMORY_SAFE"
		);
	}
	inline jint MediaCodecInfo::SECURITY_MODEL_SANDBOXED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo",
			"SECURITY_MODEL_SANDBOXED"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString MediaCodecInfo::getCanonicalName() const
	{
		return callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;"
		);
	}
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
	inline jint MediaCodecInfo::getSecurityModel() const
	{
		return callMethod<jint>(
			"getSecurityModel",
			"()I"
		);
	}
	inline JArray MediaCodecInfo::getSupportedTypes() const
	{
		return callObjectMethod(
			"getSupportedTypes",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean MediaCodecInfo::isAlias() const
	{
		return callMethod<jboolean>(
			"isAlias",
			"()Z"
		);
	}
	inline jboolean MediaCodecInfo::isEncoder() const
	{
		return callMethod<jboolean>(
			"isEncoder",
			"()Z"
		);
	}
	inline jboolean MediaCodecInfo::isHardwareAccelerated() const
	{
		return callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	inline jboolean MediaCodecInfo::isSoftwareOnly() const
	{
		return callMethod<jboolean>(
			"isSoftwareOnly",
			"()Z"
		);
	}
	inline jboolean MediaCodecInfo::isVendor() const
	{
		return callMethod<jboolean>(
			"isVendor",
			"()Z"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
