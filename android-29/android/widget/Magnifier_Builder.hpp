#pragma once

#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/View.def.hpp"
#include "./Magnifier.def.hpp"
#include "./Magnifier_Builder.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Magnifier_Builder::Magnifier_Builder(android::view::View arg0)
		: JObject(
			"android.widget.Magnifier$Builder",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::widget::Magnifier Magnifier_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/widget/Magnifier;"
		);
	}
	inline android::widget::Magnifier_Builder Magnifier_Builder::setClippingEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setClippingEnabled",
			"(Z)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	inline android::widget::Magnifier_Builder Magnifier_Builder::setCornerRadius(jfloat arg0) const
	{
		return callObjectMethod(
			"setCornerRadius",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	inline android::widget::Magnifier_Builder Magnifier_Builder::setDefaultSourceToMagnifierOffset(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setDefaultSourceToMagnifierOffset",
			"(II)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1
		);
	}
	inline android::widget::Magnifier_Builder Magnifier_Builder::setElevation(jfloat arg0) const
	{
		return callObjectMethod(
			"setElevation",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	inline android::widget::Magnifier_Builder Magnifier_Builder::setInitialZoom(jfloat arg0) const
	{
		return callObjectMethod(
			"setInitialZoom",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	inline android::widget::Magnifier_Builder Magnifier_Builder::setOverlay(android::graphics::drawable::Drawable arg0) const
	{
		return callObjectMethod(
			"setOverlay",
			"(Landroid/graphics/drawable/Drawable;)Landroid/widget/Magnifier$Builder;",
			arg0.object()
		);
	}
	inline android::widget::Magnifier_Builder Magnifier_Builder::setSize(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setSize",
			"(II)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1
		);
	}
	inline android::widget::Magnifier_Builder Magnifier_Builder::setSourceBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"setSourceBounds",
			"(IIII)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::widget

// Base class headers

