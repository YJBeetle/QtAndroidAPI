#pragma once

#include "./Camera.def.hpp"
#include "../../JObject.hpp"
#include "./Camera_Size.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint Camera_Size::height()
	{
		return getField<jint>(
			"height"
		);
	}
	inline jint Camera_Size::width()
	{
		return getField<jint>(
			"width"
		);
	}
	
	// Constructors
	inline Camera_Size::Camera_Size(android::hardware::Camera arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.Camera$Size",
			"(Landroid/hardware/Camera;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jboolean Camera_Size::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Camera_Size::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
