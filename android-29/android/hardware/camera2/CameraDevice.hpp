#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAMERADEVICE
#define ANDROID_HARDWARE_CAMERA2_CAMERADEVICE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CameraCaptureSession_StateCallback;
}
namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest_Builder;
}
namespace __jni_impl::android::hardware::camera2
{
	class TotalCaptureResult;
}
namespace __jni_impl::android::hardware::camera2::params
{
	class InputConfiguration;
}
namespace __jni_impl::android::hardware::camera2::params
{
	class SessionConfiguration;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::hardware::camera2
{
	class CameraDevice : public __JniBaseClass
	{
	public:
		// Fields
		static jint TEMPLATE_MANUAL();
		static jint TEMPLATE_PREVIEW();
		static jint TEMPLATE_RECORD();
		static jint TEMPLATE_STILL_CAPTURE();
		static jint TEMPLATE_VIDEO_SNAPSHOT();
		static jint TEMPLATE_ZERO_SHUTTER_LAG();
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		QAndroidJniObject createCaptureRequest(jint arg0);
		QAndroidJniObject createCaptureRequest(jint arg0, __jni_impl::__JniBaseClass arg1);
		void createCaptureSession(__jni_impl::android::hardware::camera2::params::SessionConfiguration arg0);
		void createCaptureSession(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg1, __jni_impl::android::os::Handler arg2);
		void createCaptureSessionByOutputConfigurations(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg1, __jni_impl::android::os::Handler arg2);
		void createConstrainedHighSpeedCaptureSession(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg1, __jni_impl::android::os::Handler arg2);
		QAndroidJniObject createReprocessCaptureRequest(__jni_impl::android::hardware::camera2::TotalCaptureResult arg0);
		void createReprocessableCaptureSession(__jni_impl::android::hardware::camera2::params::InputConfiguration arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg2, __jni_impl::android::os::Handler arg3);
		void createReprocessableCaptureSessionByConfigurations(__jni_impl::android::hardware::camera2::params::InputConfiguration arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg2, __jni_impl::android::os::Handler arg3);
		jstring getId();
		jboolean isSessionConfigurationSupported(__jni_impl::android::hardware::camera2::params::SessionConfiguration arg0);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "CameraCaptureSession_StateCallback.hpp"
#include "CaptureRequest_Builder.hpp"
#include "TotalCaptureResult.hpp"
#include "params/InputConfiguration.hpp"
#include "params/SessionConfiguration.hpp"
#include "../../os/Handler.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	jint CameraDevice::TEMPLATE_MANUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_MANUAL"
		);
	}
	jint CameraDevice::TEMPLATE_PREVIEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_PREVIEW"
		);
	}
	jint CameraDevice::TEMPLATE_RECORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_RECORD"
		);
	}
	jint CameraDevice::TEMPLATE_STILL_CAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_STILL_CAPTURE"
		);
	}
	jint CameraDevice::TEMPLATE_VIDEO_SNAPSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_VIDEO_SNAPSHOT"
		);
	}
	jint CameraDevice::TEMPLATE_ZERO_SHUTTER_LAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_ZERO_SHUTTER_LAG"
		);
	}
	
	// Constructors
	void CameraDevice::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraDevice",
			"(V)V");
	}
	
	// Methods
	void CameraDevice::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject CameraDevice::createCaptureRequest(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createCaptureRequest",
			"(I)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject CameraDevice::createCaptureRequest(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"createCaptureRequest",
			"(ILjava/util/Set;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void CameraDevice::createCaptureSession(__jni_impl::android::hardware::camera2::params::SessionConfiguration arg0)
	{
		__thiz.callMethod<void>(
			"createCaptureSession",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraDevice::createCaptureSession(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"createCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraDevice::createCaptureSessionByOutputConfigurations(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"createCaptureSessionByOutputConfigurations",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraDevice::createConstrainedHighSpeedCaptureSession(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"createConstrainedHighSpeedCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CameraDevice::createReprocessCaptureRequest(__jni_impl::android::hardware::camera2::TotalCaptureResult arg0)
	{
		return __thiz.callObjectMethod(
			"createReprocessCaptureRequest",
			"(Landroid/hardware/camera2/TotalCaptureResult;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	void CameraDevice::createReprocessableCaptureSession(__jni_impl::android::hardware::camera2::params::InputConfiguration arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg2, __jni_impl::android::os::Handler arg3)
	{
		__thiz.callMethod<void>(
			"createReprocessableCaptureSession",
			"(Landroid/hardware/camera2/params/InputConfiguration;Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void CameraDevice::createReprocessableCaptureSessionByConfigurations(__jni_impl::android::hardware::camera2::params::InputConfiguration arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg2, __jni_impl::android::os::Handler arg3)
	{
		__thiz.callMethod<void>(
			"createReprocessableCaptureSessionByConfigurations",
			"(Landroid/hardware/camera2/params/InputConfiguration;Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jstring CameraDevice::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean CameraDevice::isSessionConfigurationSupported(__jni_impl::android::hardware::camera2::params::SessionConfiguration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSessionConfigurationSupported",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraDevice : public __jni_impl::android::hardware::camera2::CameraDevice
	{
	public:
		CameraDevice(QAndroidJniObject obj) { __thiz = obj; }
		CameraDevice()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAMERADEVICE

