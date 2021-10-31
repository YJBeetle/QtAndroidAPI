#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./Shape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// QJniObject forward
	Shape::Shape(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Shape::Shape()
		: __JniBaseClass(
			"android.graphics.drawable.shapes.Shape",
			"()V"
		) {}
	
	// Methods
	android::graphics::drawable::shapes::Shape Shape::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/Shape;"
		);
	}
	void Shape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Shape::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Shape::getHeight()
	{
		return callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	void Shape::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jfloat Shape::getWidth()
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	jboolean Shape::hasAlpha()
	{
		return callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	jint Shape::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Shape::resize(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"resize",
			"(FF)V",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable::shapes

