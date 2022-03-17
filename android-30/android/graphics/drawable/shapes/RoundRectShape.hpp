#pragma once

#include "../../../../JFloatArray.hpp"
#include "../../Canvas.def.hpp"
#include "../../Outline.def.hpp"
#include "../../Paint.def.hpp"
#include "../../RectF.def.hpp"
#include "./RectShape.def.hpp"
#include "./Shape.def.hpp"
#include "../../../../JObject.hpp"
#include "./RoundRectShape.def.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	inline RoundRectShape::RoundRectShape(JFloatArray arg0, android::graphics::RectF arg1, JFloatArray arg2)
		: android::graphics::drawable::shapes::RectShape(
			"android.graphics.drawable.shapes.RoundRectShape",
			"([FLandroid/graphics/RectF;[F)V",
			arg0.object<jfloatArray>(),
			arg1.object(),
			arg2.object<jfloatArray>()
		) {}
	
	// Methods
	inline android::graphics::drawable::shapes::RoundRectShape RoundRectShape::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/RoundRectShape;"
		);
	}
	inline void RoundRectShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean RoundRectShape::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void RoundRectShape::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline jint RoundRectShape::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics::drawable::shapes

// Base class headers
#include "./Shape.hpp"
#include "./RectShape.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable::shapes;
#endif
