#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest;
}
namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest_Key;
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
		void addTarget(__jni_impl::android::view::Surface arg0);
		QAndroidJniObject build();
		jobject get(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0);
		jobject getPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jstring arg1);
		jobject getPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, const QString &arg1);
		void removeTarget(__jni_impl::android::view::Surface arg0);
		void set(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1);
		QAndroidJniObject setPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, jstring arg2);
		QAndroidJniObject setPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, const QString &arg2);
		void setTag(jobject arg0);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "./CaptureRequest.hpp"
#include "./CaptureRequest_Key.hpp"
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
	void CaptureRequest_Builder::addTarget(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"addTarget",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CaptureRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	jobject CaptureRequest_Builder::get(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureRequest$Key;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject CaptureRequest_Builder::getPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1
		).object<jobject>();
	}
	jobject CaptureRequest_Builder::getPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jobject>();
	}
	void CaptureRequest_Builder::removeTarget(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"removeTarget",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void CaptureRequest_Builder::set(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject CaptureRequest_Builder::setPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"setPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;Ljava/lang/String;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject CaptureRequest_Builder::setPhysicalCameraKey(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"setPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;Ljava/lang/String;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void CaptureRequest_Builder::setTag(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0
		);
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

