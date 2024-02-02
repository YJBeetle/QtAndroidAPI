#pragma once

#include "../../../../JLongArray.hpp"
#include "../../../graphics/ColorSpace_Named.def.hpp"
#include "./ColorSpaceProfiles.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline jint ColorSpaceProfiles::UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.ColorSpaceProfiles",
			"UNSPECIFIED"
		);
	}
	
	// Constructors
	inline ColorSpaceProfiles::ColorSpaceProfiles(JLongArray arg0)
		: JObject(
			"android.hardware.camera2.params.ColorSpaceProfiles",
			"([J)V",
			arg0.object<jlongArray>()
		) {}
	
	// Methods
	inline JObject ColorSpaceProfiles::getSupportedColorSpaces(jint arg0) const
	{
		return callObjectMethod(
			"getSupportedColorSpaces",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	inline JObject ColorSpaceProfiles::getSupportedColorSpacesForDynamicRange(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"getSupportedColorSpacesForDynamicRange",
			"(IJ)Ljava/util/Set;",
			arg0,
			arg1
		);
	}
	inline JObject ColorSpaceProfiles::getSupportedDynamicRangeProfiles(android::graphics::ColorSpace_Named arg0, jint arg1) const
	{
		return callObjectMethod(
			"getSupportedDynamicRangeProfiles",
			"(Landroid/graphics/ColorSpace$Named;I)Ljava/util/Set;",
			arg0.object(),
			arg1
		);
	}
	inline JObject ColorSpaceProfiles::getSupportedImageFormatsForColorSpace(android::graphics::ColorSpace_Named arg0) const
	{
		return callObjectMethod(
			"getSupportedImageFormatsForColorSpace",
			"(Landroid/graphics/ColorSpace$Named;)Ljava/util/Set;",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
