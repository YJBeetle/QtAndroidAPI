#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./RectShape.hpp"
#include "./Shape.hpp"
#include "./ArcShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	ArcShape::ArcShape(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ArcShape::ArcShape(jfloat &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.ArcShape",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject ArcShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/ArcShape;"
		);
	}
	void ArcShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ArcShape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ArcShape::getOutline(android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat ArcShape::getStartAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getStartAngle",
			"()F"
		);
	}
	jfloat ArcShape::getSweepAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getSweepAngle",
			"()F"
		);
	}
	jint ArcShape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics::drawable::shapes

