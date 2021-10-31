#include "./Camera_CameraInfo.hpp"

namespace android::hardware
{
	// Fields
	jint Camera_CameraInfo::CAMERA_FACING_BACK()
	{
		return getStaticField<jint>(
			"android.hardware.Camera$CameraInfo",
			"CAMERA_FACING_BACK"
		);
	}
	jint Camera_CameraInfo::CAMERA_FACING_FRONT()
	{
		return getStaticField<jint>(
			"android.hardware.Camera$CameraInfo",
			"CAMERA_FACING_FRONT"
		);
	}
	jboolean Camera_CameraInfo::canDisableShutterSound()
	{
		return getField<jboolean>(
			"canDisableShutterSound"
		);
	}
	jint Camera_CameraInfo::facing()
	{
		return getField<jint>(
			"facing"
		);
	}
	jint Camera_CameraInfo::orientation()
	{
		return getField<jint>(
			"orientation"
		);
	}
	
	// QJniObject forward
	Camera_CameraInfo::Camera_CameraInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Camera_CameraInfo::Camera_CameraInfo()
		: __JniBaseClass(
			"android.hardware.Camera$CameraInfo",
			"()V"
		) {}
	
	// Methods
} // namespace android::hardware

