#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./Shape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	Shape::Shape(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Shape::Shape()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.Shape",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Shape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/Shape;"
		);
	}
	void Shape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Shape::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Shape::getHeight()
	{
		return __thiz.callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	void Shape::getOutline(android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat Shape::getWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	jboolean Shape::hasAlpha()
	{
		return __thiz.callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	jint Shape::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Shape::resize(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"resize",
			"(FF)V",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable::shapes

