#pragma once

#include "../../Canvas.def.hpp"
#include "../../Outline.def.hpp"
#include "../../Paint.def.hpp"
#include "../../RectF.def.hpp"
#include "./Shape.def.hpp"
#include "../../../../JObject.hpp"
#include "./RectShape.def.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	inline RectShape::RectShape()
		: android::graphics::drawable::shapes::Shape(
			"android.graphics.drawable.shapes.RectShape",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::drawable::shapes::RectShape RectShape::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/RectShape;"
		);
	}
	inline void RectShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RectShape::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable::shapes

// Base class headers
#include "./Shape.hpp"

