#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"
#include "./Camera_Face.hpp"

namespace android::hardware
{
	// Fields
	jint Camera_Face::id()
	{
		return __thiz.getField<jint>(
			"id"
		);
	}
	QAndroidJniObject Camera_Face::leftEye()
	{
		return __thiz.getObjectField(
			"leftEye",
			"Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Camera_Face::mouth()
	{
		return __thiz.getObjectField(
			"mouth",
			"Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Camera_Face::rect()
	{
		return __thiz.getObjectField(
			"rect",
			"Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject Camera_Face::rightEye()
	{
		return __thiz.getObjectField(
			"rightEye",
			"Landroid/graphics/Point;"
		);
	}
	jint Camera_Face::score()
	{
		return __thiz.getField<jint>(
			"score"
		);
	}
	
	Camera_Face::Camera_Face(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Camera_Face::Camera_Face()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.Camera$Face",
			"()V"
		);
	}
	
	// Methods
} // namespace android::hardware

