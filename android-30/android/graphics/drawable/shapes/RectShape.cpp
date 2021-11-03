#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "../../RectF.hpp"
#include "./Shape.hpp"
#include "../../../../JObject.hpp"
#include "./RectShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// QAndroidJniObject forward
	RectShape::RectShape(QAndroidJniObject obj) : android::graphics::drawable::shapes::Shape(obj) {}
	
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
	jboolean RectShape::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	jint RectShape::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics::drawable::shapes

