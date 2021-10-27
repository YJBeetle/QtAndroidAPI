#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CameraCaptureSession;
}
namespace __jni_impl::android::view
{
	class Surface;
}

namespace __jni_impl::android::hardware::camera2
{
	class CameraCaptureSession_StateCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onActive(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0);
		void onCaptureQueueEmpty(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0);
		void onClosed(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0);
		void onConfigureFailed(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0);
		void onConfigured(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0);
		void onReady(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0);
		void onSurfacePrepared(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::view::Surface arg1);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "./CameraCaptureSession.hpp"
#include "../../view/Surface.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CameraCaptureSession_StateCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraCaptureSession$StateCallback",
			"()V"
		);
	}
	
	// Methods
	void CameraCaptureSession_StateCallback::onActive(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onActive",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onCaptureQueueEmpty(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onCaptureQueueEmpty",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onClosed(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onClosed",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onConfigureFailed(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onConfigureFailed",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onConfigured(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onConfigured",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onReady(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onReady",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onSurfacePrepared(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::view::Surface arg1)
	{
		__thiz.callMethod<void>(
			"onSurfacePrepared",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/view/Surface;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraCaptureSession_StateCallback : public __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback
	{
	public:
		CameraCaptureSession_StateCallback(QAndroidJniObject obj) { __thiz = obj; }
		CameraCaptureSession_StateCallback()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

