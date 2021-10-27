#include "../../Canvas.hpp"
#include "../../Paint.hpp"
#include "../../Path.hpp"
#include "./Shape.hpp"
#include "./PathShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	PathShape::PathShape(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PathShape::PathShape(android::graphics::Path &arg0, jfloat &arg1, jfloat &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.PathShape",
			"(Landroid/graphics/Path;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject PathShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/PathShape;"
		);
	}
	void PathShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean PathShape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PathShape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics::drawable::shapes

