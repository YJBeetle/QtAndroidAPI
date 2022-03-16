#pragma once

#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./AbsoluteLayout.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AbsoluteLayout::AbsoluteLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.AbsoluteLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AbsoluteLayout::AbsoluteLayout(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.AbsoluteLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AbsoluteLayout::AbsoluteLayout(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.AbsoluteLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AbsoluteLayout::AbsoluteLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.AbsoluteLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::view::ViewGroup_LayoutParams AbsoluteLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.object()
		);
	}
	inline jboolean AbsoluteLayout::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

