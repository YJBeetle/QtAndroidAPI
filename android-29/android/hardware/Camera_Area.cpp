#include "../graphics/Rect.hpp"
#include "./Camera_Area.hpp"

namespace android::hardware
{
	// Fields
	QAndroidJniObject Camera_Area::rect()
	{
		return __thiz.getObjectField(
			"rect",
			"Landroid/graphics/Rect;"
		);
	}
	jint Camera_Area::weight()
	{
		return __thiz.getField<jint>(
			"weight"
		);
	}
	
	Camera_Area::Camera_Area(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Camera_Area::Camera_Area(android::graphics::Rect &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.Camera$Area",
			"(Landroid/graphics/Rect;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jboolean Camera_Area::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::hardware

