#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK
#define ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CameraDevice;
}

namespace __jni_impl::android::hardware::camera2
{
	class CameraDevice_StateCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_CAMERA_DEVICE();
		static jint ERROR_CAMERA_DISABLED();
		static jint ERROR_CAMERA_IN_USE();
		static jint ERROR_CAMERA_SERVICE();
		static jint ERROR_MAX_CAMERAS_IN_USE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onError(__jni_impl::android::hardware::camera2::CameraDevice arg0, jint arg1);
		void onDisconnected(__jni_impl::android::hardware::camera2::CameraDevice arg0);
		void onOpened(__jni_impl::android::hardware::camera2::CameraDevice arg0);
		void onClosed(__jni_impl::android::hardware::camera2::CameraDevice arg0);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "CameraDevice.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	jint CameraDevice_StateCallback::ERROR_CAMERA_DEVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_DEVICE");
	}
	jint CameraDevice_StateCallback::ERROR_CAMERA_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_DISABLED");
	}
	jint CameraDevice_StateCallback::ERROR_CAMERA_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_IN_USE");
	}
	jint CameraDevice_StateCallback::ERROR_CAMERA_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_SERVICE");
	}
	jint CameraDevice_StateCallback::ERROR_MAX_CAMERAS_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_MAX_CAMERAS_IN_USE");
	}
	
	// Constructors
	void CameraDevice_StateCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"()V");
	}
	
	// Methods
	void CameraDevice_StateCallback::onError(__jni_impl::android::hardware::camera2::CameraDevice arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Landroid/hardware/camera2/CameraDevice;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void CameraDevice_StateCallback::onDisconnected(__jni_impl::android::hardware::camera2::CameraDevice arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Landroid/hardware/camera2/CameraDevice;)V",
			arg0.__jniObject().object());
	}
	void CameraDevice_StateCallback::onOpened(__jni_impl::android::hardware::camera2::CameraDevice arg0)
	{
		__thiz.callMethod<void>(
			"onOpened",
			"(Landroid/hardware/camera2/CameraDevice;)V",
			arg0.__jniObject().object());
	}
	void CameraDevice_StateCallback::onClosed(__jni_impl::android::hardware::camera2::CameraDevice arg0)
	{
		__thiz.callMethod<void>(
			"onClosed",
			"(Landroid/hardware/camera2/CameraDevice;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraDevice_StateCallback : public __jni_impl::android::hardware::camera2::CameraDevice_StateCallback
	{
	public:
		CameraDevice_StateCallback(QAndroidJniObject obj) { __thiz = obj; }
		CameraDevice_StateCallback()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK

