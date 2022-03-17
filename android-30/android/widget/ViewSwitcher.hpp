#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./ViewSwitcher.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ViewSwitcher::ViewSwitcher(android::content::Context arg0)
		: android::widget::ViewAnimator(
			"android.widget.ViewSwitcher",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ViewSwitcher::ViewSwitcher(android::content::Context arg0, JObject arg1)
		: android::widget::ViewAnimator(
			"android.widget.ViewSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void ViewSwitcher::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JString ViewSwitcher::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::View ViewSwitcher::getNextView() const
	{
		return callObjectMethod(
			"getNextView",
			"()Landroid/view/View;"
		);
	}
	inline void ViewSwitcher::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void ViewSwitcher::setFactory(JObject arg0) const
	{
		callMethod<void>(
			"setFactory",
			"(Landroid/widget/ViewSwitcher$ViewFactory;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"
#include "./ViewAnimator.hpp"

