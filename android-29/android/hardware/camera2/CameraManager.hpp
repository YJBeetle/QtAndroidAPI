#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER
#define ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::hardware::camera2
{
	class CameraCharacteristics;
}
namespace __jni_impl::android::hardware::camera2
{
	class CameraDevice_StateCallback;
}
namespace __jni_impl::android::hardware::camera2
{
	class CameraManager_AvailabilityCallback;
}
namespace __jni_impl::android::hardware::camera2
{
	class CameraManager_TorchCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::hardware::camera2
{
	class CameraManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getCameraCharacteristics(jstring arg0);
		QAndroidJniObject getCameraCharacteristics(const QString &arg0);
		jarray getCameraIdList();
		void openCamera(jstring arg0, __jni_impl::android::hardware::camera2::CameraDevice_StateCallback arg1, __jni_impl::android::os::Handler arg2);
		void openCamera(const QString &arg0, __jni_impl::android::hardware::camera2::CameraDevice_StateCallback arg1, __jni_impl::android::os::Handler arg2);
		void openCamera(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraDevice_StateCallback arg2);
		void openCamera(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraDevice_StateCallback arg2);
		void registerAvailabilityCallback(__jni_impl::android::hardware::camera2::CameraManager_AvailabilityCallback arg0, __jni_impl::android::os::Handler arg1);
		void registerAvailabilityCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraManager_AvailabilityCallback arg1);
		void registerTorchCallback(__jni_impl::android::hardware::camera2::CameraManager_TorchCallback arg0, __jni_impl::android::os::Handler arg1);
		void registerTorchCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraManager_TorchCallback arg1);
		void setTorchMode(jstring arg0, jboolean arg1);
		void setTorchMode(const QString &arg0, jboolean arg1);
		void unregisterAvailabilityCallback(__jni_impl::android::hardware::camera2::CameraManager_AvailabilityCallback arg0);
		void unregisterTorchCallback(__jni_impl::android::hardware::camera2::CameraManager_TorchCallback arg0);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "../../content/Context.hpp"
#include "CameraCharacteristics.hpp"
#include "CameraDevice_StateCallback.hpp"
#include "CameraManager_AvailabilityCallback.hpp"
#include "CameraManager_TorchCallback.hpp"
#include "../../os/Handler.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CameraManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CameraManager::getCameraCharacteristics(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCameraCharacteristics",
			"(Ljava/lang/String;)Landroid/hardware/camera2/CameraCharacteristics;",
			arg0
		);
	}
	QAndroidJniObject CameraManager::getCameraCharacteristics(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCameraCharacteristics",
			"(Ljava/lang/String;)Landroid/hardware/camera2/CameraCharacteristics;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray CameraManager::getCameraIdList()
	{
		return __thiz.callObjectMethod(
			"getCameraIdList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void CameraManager::openCamera(jstring arg0, __jni_impl::android::hardware::camera2::CameraDevice_StateCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Landroid/hardware/camera2/CameraDevice$StateCallback;Landroid/os/Handler;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraManager::openCamera(const QString &arg0, __jni_impl::android::hardware::camera2::CameraDevice_StateCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Landroid/hardware/camera2/CameraDevice$StateCallback;Landroid/os/Handler;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraManager::openCamera(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraDevice_StateCallback arg2)
	{
		__thiz.callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraDevice$StateCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraManager::openCamera(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::hardware::camera2::CameraDevice_StateCallback arg2)
	{
		__thiz.callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraDevice$StateCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraManager::registerAvailabilityCallback(__jni_impl::android::hardware::camera2::CameraManager_AvailabilityCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerAvailabilityCallback",
			"(Landroid/hardware/camera2/CameraManager$AvailabilityCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CameraManager::registerAvailabilityCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraManager_AvailabilityCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerAvailabilityCallback",
			"(Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraManager$AvailabilityCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CameraManager::registerTorchCallback(__jni_impl::android::hardware::camera2::CameraManager_TorchCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerTorchCallback",
			"(Landroid/hardware/camera2/CameraManager$TorchCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CameraManager::registerTorchCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::camera2::CameraManager_TorchCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerTorchCallback",
			"(Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraManager$TorchCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CameraManager::setTorchMode(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setTorchMode",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void CameraManager::setTorchMode(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setTorchMode",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void CameraManager::unregisterAvailabilityCallback(__jni_impl::android::hardware::camera2::CameraManager_AvailabilityCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAvailabilityCallback",
			"(Landroid/hardware/camera2/CameraManager$AvailabilityCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraManager::unregisterTorchCallback(__jni_impl::android::hardware::camera2::CameraManager_TorchCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterTorchCallback",
			"(Landroid/hardware/camera2/CameraManager$TorchCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraManager : public __jni_impl::android::hardware::camera2::CameraManager
	{
	public:
		CameraManager(QAndroidJniObject obj) { __thiz = obj; }
		CameraManager()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER

