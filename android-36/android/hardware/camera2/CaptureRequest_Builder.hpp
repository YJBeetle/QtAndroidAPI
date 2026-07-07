#pragma once

#include "./CaptureRequest.def.hpp"
#include "./CaptureRequest_Key.def.hpp"
#include "../../view/Surface.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CaptureRequest_Builder.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void CaptureRequest_Builder::addTarget(android::view::Surface arg0) const
	{
		callMethod<void>(
			"addTarget",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline android::hardware::camera2::CaptureRequest CaptureRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	inline JObject CaptureRequest_Builder::get(android::hardware::camera2::CaptureRequest_Key arg0) const
	{
		return callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureRequest$Key;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject CaptureRequest_Builder::getPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, JString arg1) const
	{
		return callObjectMethod(
			"getPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void CaptureRequest_Builder::removeTarget(android::view::Surface arg0) const
	{
		callMethod<void>(
			"removeTarget",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void CaptureRequest_Builder::set(android::hardware::camera2::CaptureRequest_Key arg0, JObject arg1) const
	{
		callMethod<void>(
			"set",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline android::hardware::camera2::CaptureRequest_Builder CaptureRequest_Builder::setPhysicalCameraKey(android::hardware::camera2::CaptureRequest_Key arg0, JObject arg1, JString arg2) const
	{
		return callObjectMethod(
			"setPhysicalCameraKey",
			"(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;Ljava/lang/String;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.object(),
			arg1.object<jobject>(),
			arg2.object<jstring>()
		);
	}
	inline void CaptureRequest_Builder::setTag(JObject arg0) const
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
