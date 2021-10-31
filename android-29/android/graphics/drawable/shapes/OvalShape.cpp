#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./RectShape.hpp"
#include "./Shape.hpp"
#include "./OvalShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// QAndroidJniObject forward
	OvalShape::OvalShape(QAndroidJniObject obj) : android::graphics::drawable::shapes::RectShape(obj) {}
	
	// Constructors
	OvalShape::OvalShape()
		: android::graphics::drawable::shapes::RectShape(
			"android.graphics.drawable.shapes.OvalShape",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject OvalShape::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/OvalShape;"
		);
	}
	void OvalShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void OvalShape::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable::shapes

