#pragma once

#include "../../../JFloatArray.hpp"
#include "../../content/res/Resources.def.hpp"
#include "../../../JString.hpp"
#include "./PaintDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline PaintDrawable::PaintDrawable()
		: android::graphics::drawable::ShapeDrawable(
			"android.graphics.drawable.PaintDrawable",
			"()V"
		) {}
	inline PaintDrawable::PaintDrawable(jint arg0)
		: android::graphics::drawable::ShapeDrawable(
			"android.graphics.drawable.PaintDrawable",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void PaintDrawable::setCornerRadii(JFloatArray arg0) const
	{
		callMethod<void>(
			"setCornerRadii",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void PaintDrawable::setCornerRadius(jfloat arg0) const
	{
		callMethod<void>(
			"setCornerRadius",
			"(F)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"
#include "./ShapeDrawable.hpp"

