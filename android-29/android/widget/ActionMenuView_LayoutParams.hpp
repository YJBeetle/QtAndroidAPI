#pragma once

#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./ActionMenuView_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(android::widget::ActionMenuView_LayoutParams &arg0)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/widget/ActionMenuView$LayoutParams;)V",
			arg0.object()
		) {}
	inline ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(jint arg0, jint arg1)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.ActionMenuView$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"

