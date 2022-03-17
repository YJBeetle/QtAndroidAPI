#pragma once

#include "./Camera_CameraInfo.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint Camera_CameraInfo::CAMERA_FACING_BACK()
	{
		return getStaticField<jint>(
			"android.hardware.Camera$CameraInfo",
			"CAMERA_FACING_BACK"
		);
	}
	inline jint Camera_CameraInfo::CAMERA_FACING_FRONT()
	{
		return getStaticField<jint>(
			"android.hardware.Camera$CameraInfo",
			"CAMERA_FACING_FRONT"
		);
	}
	inline jboolean Camera_CameraInfo::canDisableShutterSound()
	{
		return getField<jboolean>(
			"canDisableShutterSound"
		);
	}
	inline jint Camera_CameraInfo::facing()
	{
		return getField<jint>(
			"facing"
		);
	}
	inline jint Camera_CameraInfo::orientation()
	{
		return getField<jint>(
			"orientation"
		);
	}
	
	// Constructors
	inline Camera_CameraInfo::Camera_CameraInfo()
		: JObject(
			"android.hardware.Camera$CameraInfo",
			"()V"
		) {}
	
	// Methods
} // namespace android::hardware

// Base class headers

