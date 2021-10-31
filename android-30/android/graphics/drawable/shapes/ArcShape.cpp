#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./RectShape.hpp"
#include "./Shape.hpp"
#include "./ArcShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// QJniObject forward
	ArcShape::ArcShape(QJniObject obj) : android::graphics::drawable::shapes::RectShape(obj) {}
	
	// Constructors
	ArcShape::ArcShape(jfloat arg0, jfloat arg1)
		: android::graphics::drawable::shapes::RectShape(
			"android.graphics.drawable.shapes.ArcShape",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::graphics::drawable::shapes::ArcShape ArcShape::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/ArcShape;"
		);
	}
	void ArcShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ArcShape::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ArcShape::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jfloat ArcShape::getStartAngle()
	{
		return callMethod<jfloat>(
			"getStartAngle",
			"()F"
		);
	}
	jfloat ArcShape::getSweepAngle()
	{
		return callMethod<jfloat>(
			"getSweepAngle",
			"()F"
		);
	}
	jint ArcShape::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics::drawable::shapes

