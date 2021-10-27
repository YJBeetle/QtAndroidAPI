#include "./Camera_CameraInfo.hpp"

namespace android::hardware
{
	// Fields
	jint Camera_CameraInfo::CAMERA_FACING_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera$CameraInfo",
			"CAMERA_FACING_BACK"
		);
	}
	jint Camera_CameraInfo::CAMERA_FACING_FRONT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera$CameraInfo",
			"CAMERA_FACING_FRONT"
		);
	}
	jboolean Camera_CameraInfo::canDisableShutterSound()
	{
		return __thiz.getField<jboolean>(
			"canDisableShutterSound"
		);
	}
	jint Camera_CameraInfo::facing()
	{
		return __thiz.getField<jint>(
			"facing"
		);
	}
	jint Camera_CameraInfo::orientation()
	{
		return __thiz.getField<jint>(
			"orientation"
		);
	}
	
	Camera_CameraInfo::Camera_CameraInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Camera_CameraInfo::Camera_CameraInfo()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.Camera$CameraInfo",
			"()V"
		);
	}
	
	// Methods
} // namespace android::hardware

