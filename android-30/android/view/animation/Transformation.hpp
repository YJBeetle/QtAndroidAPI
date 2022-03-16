#pragma once

#include "../../graphics/Matrix.def.hpp"
#include "../../../JString.hpp"
#include "./Transformation.def.hpp"

namespace android::view::animation
{
	// Fields
	inline jint Transformation::TYPE_ALPHA()
	{
		return getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_ALPHA"
		);
	}
	inline jint Transformation::TYPE_BOTH()
	{
		return getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_BOTH"
		);
	}
	inline jint Transformation::TYPE_IDENTITY()
	{
		return getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_IDENTITY"
		);
	}
	inline jint Transformation::TYPE_MATRIX()
	{
		return getStaticField<jint>(
			"android.view.animation.Transformation",
			"TYPE_MATRIX"
		);
	}
	
	// Constructors
	inline Transformation::Transformation()
		: JObject(
			"android.view.animation.Transformation",
			"()V"
		) {}
	
	// Methods
	inline void Transformation::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void Transformation::compose(android::view::animation::Transformation arg0) const
	{
		callMethod<void>(
			"compose",
			"(Landroid/view/animation/Transformation;)V",
			arg0.object()
		);
	}
	inline jfloat Transformation::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	inline android::graphics::Matrix Transformation::getMatrix() const
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	inline jint Transformation::getTransformationType() const
	{
		return callMethod<jint>(
			"getTransformationType",
			"()I"
		);
	}
	inline void Transformation::set(android::view::animation::Transformation arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/view/animation/Transformation;)V",
			arg0.object()
		);
	}
	inline void Transformation::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	inline void Transformation::setTransformationType(jint arg0) const
	{
		callMethod<void>(
			"setTransformationType",
			"(I)V",
			arg0
		);
	}
	inline JString Transformation::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	inline JString Transformation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view::animation

// Base class headers

