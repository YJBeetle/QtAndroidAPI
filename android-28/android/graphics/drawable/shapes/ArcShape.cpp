#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./RectShape.hpp"
#include "./Shape.hpp"
#include "../../../../JObject.hpp"
#include "./ArcShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	ArcShape::ArcShape(jfloat arg0, jfloat arg1)
		: android::graphics::drawable::shapes::RectShape(
			"android.graphics.drawable.shapes.ArcShape",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::graphics::drawable::shapes::ArcShape ArcShape::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/ArcShape;"
		);
	}
	void ArcShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ArcShape::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jfloat ArcShape::getStartAngle() const
	{
		return callMethod<jfloat>(
			"getStartAngle",
			"()F"
		);
	}
	jfloat ArcShape::getSweepAngle() const
	{
		return callMethod<jfloat>(
			"getSweepAngle",
			"()F"
		);
	}
} // namespace android::graphics::drawable::shapes

