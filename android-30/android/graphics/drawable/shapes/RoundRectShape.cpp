#include "../../../../JFloatArray.hpp"
#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "../../RectF.hpp"
#include "./RectShape.hpp"
#include "./Shape.hpp"
#include "../../../../JObject.hpp"
#include "./RoundRectShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	RoundRectShape::RoundRectShape(JFloatArray arg0, android::graphics::RectF arg1, JFloatArray arg2)
		: android::graphics::drawable::shapes::RectShape(
			"android.graphics.drawable.shapes.RoundRectShape",
			"([FLandroid/graphics/RectF;[F)V",
			arg0.object<jfloatArray>(),
			arg1.object(),
			arg2.object<jfloatArray>()
		) {}
	
	// Methods
	android::graphics::drawable::shapes::RoundRectShape RoundRectShape::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/RoundRectShape;"
		);
	}
	void RoundRectShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean RoundRectShape::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void RoundRectShape::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jint RoundRectShape::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics::drawable::shapes

