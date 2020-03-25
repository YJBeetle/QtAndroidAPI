#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST_BUILDER
#define ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest_Key;
}
namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest;
}
namespace __jni_impl::android::view
{
	class Surface;
}

namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0);
		void set(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1);
		QAndroidJniObject build();
		void setTag(jobject arg0);
		void addTarget(__jni_impl::android::view::Surface arg0);
		void removeTarget(__jni_impl::android::view::Surface arg0);
		QAndroidJniObject setPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, jstring arg2);
		QAndroidJniObject getPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jstring arg1);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "CaptureRequest_Key.hpp"
#include "CaptureRequest.hpp"
#include "../../view/Surface.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CaptureRequest_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CaptureRequest$Builder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CaptureRequest_Builder::get(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureRequest$Key;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	void CaptureRequest_Builder::set(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject CaptureRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/hardware/camera2/CaptureRequest;");
	}
	void CaptureRequest_Builder::setTag(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void CaptureRequest_Builder::addTarget(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"addTarget",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	void CaptureRequest_Builder::removeTarget(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"removeTarget",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CaptureRequest_Builder::setPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"setPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;Ljava/lang/String;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject CaptureRequest_Builder::getPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CaptureRequest_Builder : public __jni_impl::android::hardware::camera2::CaptureRequest_Builder
	{
	public:
		CaptureRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
		CaptureRequest_Builder()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST_BUILDER

