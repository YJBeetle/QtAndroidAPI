#pragma once

#include "../../../util/Range.def.hpp"
#include "../../../util/Size.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./Capability.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	inline Capability::Capability(jint arg0, android::util::Size arg1, android::util::Range arg2)
		: JObject(
			"android.hardware.camera2.params.Capability",
			"(ILandroid/util/Size;Landroid/util/Range;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jboolean Capability::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::util::Size Capability::getMaxStreamingSize() const
	{
		return callObjectMethod(
			"getMaxStreamingSize",
			"()Landroid/util/Size;"
		);
	}
	inline jint Capability::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline android::util::Range Capability::getZoomRatioRange() const
	{
		return callObjectMethod(
			"getZoomRatioRange",
			"()Landroid/util/Range;"
		);
	}
	inline jint Capability::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Capability::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
