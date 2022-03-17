#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../../JString.hpp"
#include "./StackView.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline StackView::StackView(android::content::Context arg0)
		: android::widget::AdapterViewAnimator(
			"android.widget.StackView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline StackView::StackView(android::content::Context arg0, JObject arg1)
		: android::widget::AdapterViewAnimator(
			"android.widget.StackView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline StackView::StackView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AdapterViewAnimator(
			"android.widget.StackView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline StackView::StackView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AdapterViewAnimator(
			"android.widget.StackView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void StackView::advance() const
	{
		callMethod<void>(
			"advance",
			"()V"
		);
	}
	inline JString StackView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean StackView::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean StackView::onInterceptTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean StackView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void StackView::showNext() const
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	inline void StackView::showPrevious() const
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
#include "./AdapterView.hpp"
#include "./AdapterViewAnimator.hpp"

