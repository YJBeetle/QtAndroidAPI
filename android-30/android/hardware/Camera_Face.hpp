#pragma once

#include "../graphics/Point.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./Camera_Face.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint Camera_Face::id()
	{
		return getField<jint>(
			"id"
		);
	}
	inline android::graphics::Point Camera_Face::leftEye()
	{
		return getObjectField(
			"leftEye",
			"Landroid/graphics/Point;"
		);
	}
	inline android::graphics::Point Camera_Face::mouth()
	{
		return getObjectField(
			"mouth",
			"Landroid/graphics/Point;"
		);
	}
	inline android::graphics::Rect Camera_Face::rect()
	{
		return getObjectField(
			"rect",
			"Landroid/graphics/Rect;"
		);
	}
	inline android::graphics::Point Camera_Face::rightEye()
	{
		return getObjectField(
			"rightEye",
			"Landroid/graphics/Point;"
		);
	}
	inline jint Camera_Face::score()
	{
		return getField<jint>(
			"score"
		);
	}
	
	// Constructors
	inline Camera_Face::Camera_Face()
		: JObject(
			"android.hardware.Camera$Face",
			"()V"
		) {}
	
	// Methods
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
