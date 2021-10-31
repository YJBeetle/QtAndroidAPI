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
	QAndroidJniObject Camera_Face::leftEye()
	{
		return getObjectField(
			"leftEye",
			"Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Camera_Face::mouth()
	{
		return getObjectField(
			"mouth",
			"Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Camera_Face::rect()
	{
		return getObjectField(
			"rect",
			"Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject Camera_Face::rightEye()
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
	
	// QAndroidJniObject forward
	Camera_Face::Camera_Face(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Camera_Face::Camera_Face()
		: __JniBaseClass(
			"android.hardware.Camera$Face",
			"()V"
		) {}
	
	// Methods
} // namespace android::hardware

