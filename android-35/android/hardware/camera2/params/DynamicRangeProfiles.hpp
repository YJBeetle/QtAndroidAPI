#pragma once

#include "../../../../JLongArray.hpp"
#include "./DynamicRangeProfiles.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline jlong DynamicRangeProfiles::DOLBY_VISION_10B_HDR_OEM()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"DOLBY_VISION_10B_HDR_OEM"
		);
	}
	inline jlong DynamicRangeProfiles::DOLBY_VISION_10B_HDR_OEM_PO()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"DOLBY_VISION_10B_HDR_OEM_PO"
		);
	}
	inline jlong DynamicRangeProfiles::DOLBY_VISION_10B_HDR_REF()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"DOLBY_VISION_10B_HDR_REF"
		);
	}
	inline jlong DynamicRangeProfiles::DOLBY_VISION_10B_HDR_REF_PO()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"DOLBY_VISION_10B_HDR_REF_PO"
		);
	}
	inline jlong DynamicRangeProfiles::DOLBY_VISION_8B_HDR_OEM()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"DOLBY_VISION_8B_HDR_OEM"
		);
	}
	inline jlong DynamicRangeProfiles::DOLBY_VISION_8B_HDR_OEM_PO()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"DOLBY_VISION_8B_HDR_OEM_PO"
		);
	}
	inline jlong DynamicRangeProfiles::DOLBY_VISION_8B_HDR_REF()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"DOLBY_VISION_8B_HDR_REF"
		);
	}
	inline jlong DynamicRangeProfiles::DOLBY_VISION_8B_HDR_REF_PO()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"DOLBY_VISION_8B_HDR_REF_PO"
		);
	}
	inline jlong DynamicRangeProfiles::HDR10()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"HDR10"
		);
	}
	inline jlong DynamicRangeProfiles::HDR10_PLUS()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"HDR10_PLUS"
		);
	}
	inline jlong DynamicRangeProfiles::HLG10()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"HLG10"
		);
	}
	inline jlong DynamicRangeProfiles::PUBLIC_MAX()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"PUBLIC_MAX"
		);
	}
	inline jlong DynamicRangeProfiles::STANDARD()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"STANDARD"
		);
	}
	
	// Constructors
	inline DynamicRangeProfiles::DynamicRangeProfiles(JLongArray arg0)
		: JObject(
			"android.hardware.camera2.params.DynamicRangeProfiles",
			"([J)V",
			arg0.object<jlongArray>()
		) {}
	
	// Methods
	inline JObject DynamicRangeProfiles::getProfileCaptureRequestConstraints(jlong arg0) const
	{
		return callObjectMethod(
			"getProfileCaptureRequestConstraints",
			"(J)Ljava/util/Set;",
			arg0
		);
	}
	inline JObject DynamicRangeProfiles::getSupportedProfiles() const
	{
		return callObjectMethod(
			"getSupportedProfiles",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean DynamicRangeProfiles::isExtraLatencyPresent(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isExtraLatencyPresent",
			"(J)Z",
			arg0
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
