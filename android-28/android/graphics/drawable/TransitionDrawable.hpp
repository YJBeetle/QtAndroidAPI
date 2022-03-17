#pragma once

#include "../../../JArray.hpp"
#include "../Canvas.def.hpp"
#include "./TransitionDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline TransitionDrawable::TransitionDrawable(JArray arg0)
		: android::graphics::drawable::LayerDrawable(
			"android.graphics.drawable.TransitionDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	inline void TransitionDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jboolean TransitionDrawable::isCrossFadeEnabled() const
	{
		return callMethod<jboolean>(
			"isCrossFadeEnabled",
			"()Z"
		);
	}
	inline void TransitionDrawable::resetTransition() const
	{
		callMethod<void>(
			"resetTransition",
			"()V"
		);
	}
	inline void TransitionDrawable::reverseTransition(jint arg0) const
	{
		callMethod<void>(
			"reverseTransition",
			"(I)V",
			arg0
		);
	}
	inline void TransitionDrawable::setCrossFadeEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setCrossFadeEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void TransitionDrawable::startTransition(jint arg0) const
	{
		callMethod<void>(
			"startTransition",
			"(I)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"
#include "./LayerDrawable.hpp"

