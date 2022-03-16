#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"
#include "./Camera_Face.hpp"

namespace android::hardware
{
	// Fields
	jint Camera_Face::id()
	{
		return getField<jint>(
			"id"
		);
	}
	android::graphics::Point Camera_Face::leftEye()
	{
		return getObjectField(
			"leftEye",
			"Landroid/graphics/Point;"
		);
	}
	android::graphics::Point Camera_Face::mouth()
	{
		return getObjectField(
			"mouth",
			"Landroid/graphics/Point;"
		);
	}
	android::graphics::Rect Camera_Face::rect()
	{
		return getObjectField(
			"rect",
			"Landroid/graphics/Rect;"
		);
	}
	android::graphics::Point Camera_Face::rightEye()
	{
		return getObjectField(
			"rightEye",
			"Landroid/graphics/Point;"
		);
	}
	jint Camera_Face::score()
	{
		return getField<jint>(
			"score"
		);
	}
	
	// Constructors
	Camera_Face::Camera_Face()
		: JObject(
			"android.hardware.Camera$Face",
			"()V"
		) {}
	
	// Methods
} // namespace android::hardware

