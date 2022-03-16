#pragma once

#include "../../Canvas.def.hpp"
#include "../../Outline.def.hpp"
#include "../../Paint.def.hpp"
#include "./RectShape.def.hpp"
#include "./Shape.def.hpp"
#include "../../../../JObject.hpp"
#include "./ArcShape.def.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	inline ArcShape::ArcShape(jfloat arg0, jfloat arg1)
		: android::graphics::drawable::shapes::RectShape(
			"android.graphics.drawable.shapes.ArcShape",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::graphics::drawable::shapes::ArcShape ArcShape::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/ArcShape;"
		);
	}
	inline void ArcShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ArcShape::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline jfloat ArcShape::getStartAngle() const
	{
		return callMethod<jfloat>(
			"getStartAngle",
			"()F"
		);
	}
	inline jfloat ArcShape::getSweepAngle() const
	{
		return callMethod<jfloat>(
			"getSweepAngle",
			"()F"
		);
	}
} // namespace android::graphics::drawable::shapes

// Base class headers
#include "./Shape.hpp"
#include "./RectShape.hpp"

