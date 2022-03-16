#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/animation/Animation.def.hpp"
#include "../../JString.hpp"
#include "./ViewAnimator.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ViewAnimator::ViewAnimator(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.ViewAnimator",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ViewAnimator::ViewAnimator(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.ViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void ViewAnimator::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JString ViewAnimator::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean ViewAnimator::getAnimateFirstView() const
	{
		return callMethod<jboolean>(
			"getAnimateFirstView",
			"()Z"
		);
	}
	inline jint ViewAnimator::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	inline android::view::View ViewAnimator::getCurrentView() const
	{
		return callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	inline jint ViewAnimator::getDisplayedChild() const
	{
		return callMethod<jint>(
			"getDisplayedChild",
			"()I"
		);
	}
	inline android::view::animation::Animation ViewAnimator::getInAnimation() const
	{
		return callObjectMethod(
			"getInAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	inline android::view::animation::Animation ViewAnimator::getOutAnimation() const
	{
		return callObjectMethod(
			"getOutAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	inline void ViewAnimator::removeAllViews() const
	{
		callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	inline void ViewAnimator::removeView(android::view::View arg0) const
	{
		callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewAnimator::removeViewAt(jint arg0) const
	{
		callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	inline void ViewAnimator::removeViewInLayout(android::view::View arg0) const
	{
		callMethod<void>(
			"removeViewInLayout",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewAnimator::removeViews(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeViews",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ViewAnimator::removeViewsInLayout(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeViewsInLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ViewAnimator::setAnimateFirstView(jboolean arg0) const
	{
		callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0
		);
	}
	inline void ViewAnimator::setDisplayedChild(jint arg0) const
	{
		callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0
		);
	}
	inline void ViewAnimator::setInAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	inline void ViewAnimator::setInAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ViewAnimator::setOutAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	inline void ViewAnimator::setOutAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ViewAnimator::showNext() const
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	inline void ViewAnimator::showPrevious() const
	{
		callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

