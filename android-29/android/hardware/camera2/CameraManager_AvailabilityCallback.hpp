#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2
{
	class CameraManager_AvailabilityCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCameraAccessPrioritiesChanged();
		void onCameraAvailable(jstring arg0);
		void onCameraAvailable(const QString &arg0);
		void onCameraUnavailable(jstring arg0);
		void onCameraUnavailable(const QString &arg0);
	};
} // namespace __jni_impl::android::hardware::camera2


namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CameraManager_AvailabilityCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraManager$AvailabilityCallback",
			"()V"
		);
	}
	
	// Methods
	void CameraManager_AvailabilityCallback::onCameraAccessPrioritiesChanged()
	{
		__thiz.callMethod<void>(
			"onCameraAccessPrioritiesChanged",
			"()V"
		);
	}
	void CameraManager_AvailabilityCallback::onCameraAvailable(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onCameraAvailable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CameraManager_AvailabilityCallback::onCameraAvailable(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onCameraAvailable",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CameraManager_AvailabilityCallback::onCameraUnavailable(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onCameraUnavailable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CameraManager_AvailabilityCallback::onCameraUnavailable(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onCameraUnavailable",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraManager_AvailabilityCallback : public __jni_impl::android::hardware::camera2::CameraManager_AvailabilityCallback
	{
	public:
		CameraManager_AvailabilityCallback(QAndroidJniObject obj) { __thiz = obj; }
		CameraManager_AvailabilityCallback()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

