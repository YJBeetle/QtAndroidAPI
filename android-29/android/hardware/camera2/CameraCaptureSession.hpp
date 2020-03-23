#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAMERACAPTURESESSION
#define ANDROID_HARDWARE_CAMERA2_CAMERACAPTURESESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest;
}
namespace __jni_impl::android::hardware::camera2
{
	class CameraCaptureSession_CaptureCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::hardware::camera2::params
{
	class OutputConfiguration;
}
namespace __jni_impl::android::hardware::camera2
{
	class CameraDevice;
}

namespace __jni_impl::android::hardware::camera2
{
	class CameraCaptureSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void prepare(__jni_impl::android::view::Surface arg0);
		jint captureSingleRequest(__jni_impl::android::hardware::camera2::CaptureRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2);
		void finalizeOutputConfigurations(__jni_impl::__JniBaseClass arg0);
		jint capture(__jni_impl::android::hardware::camera2::CaptureRequest arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, __jni_impl::android::os::Handler arg2);
		jint captureBurst(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, __jni_impl::android::os::Handler arg2);
		jint captureBurstRequests(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2);
		jint setRepeatingRequest(__jni_impl::android::hardware::camera2::CaptureRequest arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, __jni_impl::android::os::Handler arg2);
		jint setSingleRepeatingRequest(__jni_impl::android::hardware::camera2::CaptureRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2);
		jint setRepeatingBurst(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, __jni_impl::android::os::Handler arg2);
		jint setRepeatingBurstRequests(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2);
		void stopRepeating();
		void abortCaptures();
		jboolean isReprocessable();
		QAndroidJniObject getInputSurface();
		void updateOutputConfiguration(__jni_impl::android::hardware::camera2::params::OutputConfiguration arg0);
		QAndroidJniObject getDevice();
	};
} // namespace __jni_impl::android::hardware::camera2

#include "../../view/Surface.hpp"
#include "CaptureRequest.hpp"
#include "CameraCaptureSession_CaptureCallback.hpp"
#include "../../os/Handler.hpp"
#include "params/OutputConfiguration.hpp"
#include "CameraDevice.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CameraCaptureSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraCaptureSession",
			"()V");
	}
	
	// Methods
	void CameraCaptureSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void CameraCaptureSession::prepare(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"prepare",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	jint CameraCaptureSession::captureSingleRequest(__jni_impl::android::hardware::camera2::CaptureRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return __thiz.callMethod<jint>(
			"captureSingleRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void CameraCaptureSession::finalizeOutputConfigurations(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"finalizeOutputConfigurations",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	jint CameraCaptureSession::capture(__jni_impl::android::hardware::camera2::CaptureRequest arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		return __thiz.callMethod<jint>(
			"capture",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jint CameraCaptureSession::captureBurst(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		return __thiz.callMethod<jint>(
			"captureBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jint CameraCaptureSession::captureBurstRequests(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return __thiz.callMethod<jint>(
			"captureBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jint CameraCaptureSession::setRepeatingRequest(__jni_impl::android::hardware::camera2::CaptureRequest arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		return __thiz.callMethod<jint>(
			"setRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jint CameraCaptureSession::setSingleRepeatingRequest(__jni_impl::android::hardware::camera2::CaptureRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return __thiz.callMethod<jint>(
			"setSingleRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jint CameraCaptureSession::setRepeatingBurst(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		return __thiz.callMethod<jint>(
			"setRepeatingBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jint CameraCaptureSession::setRepeatingBurstRequests(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return __thiz.callMethod<jint>(
			"setRepeatingBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void CameraCaptureSession::stopRepeating()
	{
		__thiz.callMethod<void>(
			"stopRepeating",
			"()V");
	}
	void CameraCaptureSession::abortCaptures()
	{
		__thiz.callMethod<void>(
			"abortCaptures",
			"()V");
	}
	jboolean CameraCaptureSession::isReprocessable()
	{
		return __thiz.callMethod<jboolean>(
			"isReprocessable",
			"()Z");
	}
	QAndroidJniObject CameraCaptureSession::getInputSurface()
	{
		return __thiz.callObjectMethod(
			"getInputSurface",
			"()Landroid/view/Surface;");
	}
	void CameraCaptureSession::updateOutputConfiguration(__jni_impl::android::hardware::camera2::params::OutputConfiguration arg0)
	{
		__thiz.callMethod<void>(
			"updateOutputConfiguration",
			"(Landroid/hardware/camera2/params/OutputConfiguration;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CameraCaptureSession::getDevice()
	{
		return __thiz.callObjectMethod(
			"getDevice",
			"()Landroid/hardware/camera2/CameraDevice;");
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraCaptureSession : public __jni_impl::android::hardware::camera2::CameraCaptureSession
	{
	public:
		CameraCaptureSession(QAndroidJniObject obj) { __thiz = obj; }
		CameraCaptureSession()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAMERACAPTURESESSION

