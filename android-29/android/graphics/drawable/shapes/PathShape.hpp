#pragma once

#include "../../Canvas.def.hpp"
#include "../../Paint.def.hpp"
#include "../../Path.def.hpp"
#include "./Shape.def.hpp"
#include "../../../../JObject.hpp"
#include "./PathShape.def.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	inline PathShape::PathShape(android::graphics::Path arg0, jfloat arg1, jfloat arg2)
		: android::graphics::drawable::shapes::Shape(
			"android.graphics.drawable.shapes.PathShape",
			"(Landroid/graphics/Path;FF)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::graphics::drawable::shapes::PathShape PathShape::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/PathShape;"
		);
	}
	inline void PathShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean PathShape::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PathShape::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics::drawable::shapes

// Base class headers
#include "./Shape.hpp"

