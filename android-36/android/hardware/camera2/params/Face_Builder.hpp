#pragma once

#include "../../../graphics/Point.def.hpp"
#include "../../../graphics/Rect.def.hpp"
#include "./Face.def.hpp"
#include "./Face_Builder.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	inline Face_Builder::Face_Builder()
		: JObject(
			"android.hardware.camera2.params.Face$Builder",
			"()V"
		) {}
	inline Face_Builder::Face_Builder(android::hardware::camera2::params::Face arg0)
		: JObject(
			"android.hardware.camera2.params.Face$Builder",
			"(Landroid/hardware/camera2/params/Face;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::hardware::camera2::params::Face Face_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/camera2/params/Face;"
		);
	}
	inline android::hardware::camera2::params::Face_Builder Face_Builder::setBounds(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setBounds",
			"(Landroid/graphics/Rect;)Landroid/hardware/camera2/params/Face$Builder;",
			arg0.object()
		);
	}
	inline android::hardware::camera2::params::Face_Builder Face_Builder::setId(jint arg0) const
	{
		return callObjectMethod(
			"setId",
			"(I)Landroid/hardware/camera2/params/Face$Builder;",
			arg0
		);
	}
	inline android::hardware::camera2::params::Face_Builder Face_Builder::setLeftEyePosition(android::graphics::Point arg0) const
	{
		return callObjectMethod(
			"setLeftEyePosition",
			"(Landroid/graphics/Point;)Landroid/hardware/camera2/params/Face$Builder;",
			arg0.object()
		);
	}
	inline android::hardware::camera2::params::Face_Builder Face_Builder::setMouthPosition(android::graphics::Point arg0) const
	{
		return callObjectMethod(
			"setMouthPosition",
			"(Landroid/graphics/Point;)Landroid/hardware/camera2/params/Face$Builder;",
			arg0.object()
		);
	}
	inline android::hardware::camera2::params::Face_Builder Face_Builder::setRightEyePosition(android::graphics::Point arg0) const
	{
		return callObjectMethod(
			"setRightEyePosition",
			"(Landroid/graphics/Point;)Landroid/hardware/camera2/params/Face$Builder;",
			arg0.object()
		);
	}
	inline android::hardware::camera2::params::Face_Builder Face_Builder::setScore(jint arg0) const
	{
		return callObjectMethod(
			"setScore",
			"(I)Landroid/hardware/camera2/params/Face$Builder;",
			arg0
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
