#include "./CaptureRequest.hpp"
#include "./CaptureRequest_Key.hpp"
#include "../../view/Surface.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CaptureRequest_Builder.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	CaptureRequest_Builder::CaptureRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void CaptureRequest_Builder::addTarget(android::view::Surface arg0)
	{
		callMethod<void>(
			"addTarget",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	android::hardware::camera2::CaptureRequest CaptureRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	JObject CaptureRequest_Builder::get(android::hardware::camera2::CaptureRequest_Key arg0)
	{
		return callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureRequest$Key;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject CaptureRequest_Builder::getPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, JString arg1)
	{
		return callObjectMethod(
			"getPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void CaptureRequest_Builder::removeTarget(android::view::Surface arg0)
	{
		callMethod<void>(
			"removeTarget",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void CaptureRequest_Builder::set(android::hardware::camera2::CaptureRequest_Key arg0, JObject arg1)
	{
		callMethod<void>(
			"set",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	android::hardware::camera2::CaptureRequest_Builder CaptureRequest_Builder::setPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, JObject arg1, JString arg2)
	{
		return callObjectMethod(
			"setPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;Ljava/lang/String;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.object(),
			arg1.object<jobject>(),
			arg2.object<jstring>()
		);
	}
	void CaptureRequest_Builder::setTag(JObject arg0)
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::hardware::camera2

