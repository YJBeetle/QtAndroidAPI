#pragma once

#include "../../Canvas.def.hpp"
#include "../../Outline.def.hpp"
#include "../../Paint.def.hpp"
#include "../../../../JObject.hpp"
#include "./Shape.def.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// Constructors
	inline Shape::Shape()
		: JObject(
			"android.graphics.drawable.shapes.Shape",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::drawable::shapes::Shape Shape::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/Shape;"
		);
	}
	inline void Shape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Shape::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Shape::getHeight() const
	{
		return callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	inline void Shape::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline jfloat Shape::getWidth() const
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	inline jboolean Shape::hasAlpha() const
	{
		return callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	inline jint Shape::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Shape::resize(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"resize",
			"(FF)V",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable::shapes

// Base class headers

