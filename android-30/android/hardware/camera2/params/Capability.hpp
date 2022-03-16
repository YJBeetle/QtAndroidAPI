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

