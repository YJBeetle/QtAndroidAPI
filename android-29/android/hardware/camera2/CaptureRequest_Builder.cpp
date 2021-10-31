#include "./CaptureRequest.hpp"
#include "./CaptureRequest_Key.hpp"
#include "../../view/Surface.hpp"
#include "./CaptureRequest_Builder.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	CaptureRequest_Builder::CaptureRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void CaptureRequest_Builder::addTarget(android::view::Surface arg0)
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
	jobject CaptureRequest_Builder::get(android::hardware::camera2::CaptureRequest_Key arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureRequest$Key;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject CaptureRequest_Builder::getPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1
		).object<jobject>();
	}
	void CaptureRequest_Builder::removeTarget(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"removeTarget",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void CaptureRequest_Builder::set(android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject CaptureRequest_Builder::setPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, jobject arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"setPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;Ljava/lang/String;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2
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
} // namespace android::hardware::camera2

