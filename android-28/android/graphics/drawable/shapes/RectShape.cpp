#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "../../RectF.hpp"
#include "./Shape.hpp"
#include "./RectShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// QJniObject forward
	RectShape::RectShape(QJniObject obj) : android::graphics::drawable::shapes::Shape(obj) {}
	
	// Constructors
	RectShape::RectShape()
		: android::graphics::drawable::shapes::Shape(
			"android.graphics.drawable.shapes.RectShape",
			"()V"
		) {}
	
	// Methods
	android::graphics::drawable::shapes::RectShape RectShape::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/RectShape;"
		);
	}
	void RectShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RectShape::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable::shapes

