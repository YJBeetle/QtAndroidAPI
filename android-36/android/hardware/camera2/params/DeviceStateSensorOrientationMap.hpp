#pragma once

#include "../../../../JObject.hpp"
#include "./DeviceStateSensorOrientationMap.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline jlong DeviceStateSensorOrientationMap::FOLDED()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DeviceStateSensorOrientationMap",
			"FOLDED"
		);
	}
	inline jlong DeviceStateSensorOrientationMap::NORMAL()
	{
		return getStaticField<jlong>(
			"android.hardware.camera2.params.DeviceStateSensorOrientationMap",
			"NORMAL"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean DeviceStateSensorOrientationMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint DeviceStateSensorOrientationMap::getSensorOrientation(jlong arg0) const
	{
		return callMethod<jint>(
			"getSensorOrientation",
			"(J)I",
			arg0
		);
	}
	inline jint DeviceStateSensorOrientationMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
