#include "../../Canvas.hpp"
#include "../../Paint.hpp"
#include "../../Path.hpp"
#include "./Shape.hpp"
#include "../../../../JObject.hpp"
#include "./PathShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// QAndroidJniObject forward
	PathShape::PathShape(QAndroidJniObject obj) : android::graphics::drawable::shapes::Shape(obj) {}
	
	// Constructors
	PathShape::PathShape(android::graphics::Path arg0, jfloat arg1, jfloat arg2)
		: android::graphics::drawable::shapes::Shape(
			"android.graphics.drawable.shapes.PathShape",
			"(Landroid/graphics/Path;FF)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	android::graphics::drawable::shapes::PathShape PathShape::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/PathShape;"
		);
	}
	void PathShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable::shapes

