#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./RectShape.hpp"
#include "./Shape.hpp"
#include "../../../../JObject.hpp"
#include "./OvalShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	OvalShape::OvalShape()
		: android::graphics::drawable::shapes::RectShape(
			"android.graphics.drawable.shapes.OvalShape",
			"()V"
		) {}
	
	// Methods
	android::graphics::drawable::shapes::OvalShape OvalShape::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/OvalShape;"
		);
	}
	void OvalShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void OvalShape::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable::shapes

