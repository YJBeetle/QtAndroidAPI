#pragma once

#ifndef ANDROID_HARDWARE_CAMERA_CAMERAINFO
#define ANDROID_HARDWARE_CAMERA_CAMERAINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware
{
	class Camera_CameraInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAMERA_FACING_BACK();
		static jint CAMERA_FACING_FRONT();
		jboolean canDisableShutterSound();
		jint facing();
		jint orientation();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::hardware


namespace __jni_impl::android::hardware
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
	
	// Constructors
	void Camera_CameraInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.Camera$CameraInfo",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class Camera_CameraInfo : public __jni_impl::android::hardware::Camera_CameraInfo
	{
	public:
		Camera_CameraInfo(QAndroidJniObject obj) { __thiz = obj; }
		Camera_CameraInfo()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_CAMERA_CAMERAINFO

