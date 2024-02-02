#pragma once

#include "../graphics/Rect.def.hpp"
#include "../../JObject.hpp"
#include "./Camera_Area.def.hpp"

namespace android::hardware
{
	// Fields
	inline android::graphics::Rect Camera_Area::rect()
	{
		return getObjectField(
			"rect",
			"Landroid/graphics/Rect;"
		);
	}
	inline jint Camera_Area::weight()
	{
		return getField<jint>(
			"weight"
		);
	}
	
	// Constructors
	inline Camera_Area::Camera_Area(android::graphics::Rect arg0, jint arg1)
		: JObject(
			"android.hardware.Camera$Area",
			"(Landroid/graphics/Rect;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jboolean Camera_Area::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
