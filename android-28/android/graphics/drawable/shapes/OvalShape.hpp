#pragma once

#include "../../Canvas.def.hpp"
#include "../../Outline.def.hpp"
#include "../../Paint.def.hpp"
#include "./RectShape.def.hpp"
#include "./Shape.def.hpp"
#include "../../../../JObject.hpp"
#include "./OvalShape.def.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	inline OvalShape::OvalShape()
		: android::graphics::drawable::shapes::RectShape(
			"android.graphics.drawable.shapes.OvalShape",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::drawable::shapes::OvalShape OvalShape::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/OvalShape;"
		);
	}
	inline void OvalShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void OvalShape::getOutline(android::graphics::Outline arg0) const
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
#include "./RectShape.hpp"

