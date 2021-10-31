#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "../../RectF.hpp"
#include "./RectShape.hpp"
#include "./Shape.hpp"
#include "./RoundRectShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// QAndroidJniObject forward
	RoundRectShape::RoundRectShape(QAndroidJniObject obj) : android::graphics::drawable::shapes::RectShape(obj) {}
	
	// Constructors
	RoundRectShape::RoundRectShape(jfloatArray arg0, android::graphics::RectF arg1, jfloatArray arg2)
		: android::graphics::drawable::shapes::RectShape(
			"android.graphics.drawable.shapes.RoundRectShape",
			"([FLandroid/graphics/RectF;[F)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
	android::graphics::drawable::shapes::RoundRectShape RoundRectShape::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/RoundRectShape;"
		);
	}
	void RoundRectShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RoundRectShape::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable::shapes

