#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./ScrollView.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ScrollView::ScrollView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.ScrollView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ScrollView::ScrollView(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ScrollView::ScrollView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ScrollView::ScrollView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void ScrollView::addView(android::view::View arg0) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ScrollView::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ScrollView::addView(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ScrollView::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean ScrollView::arrowScroll(jint arg0) const
	{
		return callMethod<jboolean>(
			"arrowScroll",
			"(I)Z",
			arg0
		);
	}
	inline void ScrollView::computeScroll() const
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	inline jboolean ScrollView::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline void ScrollView::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jboolean ScrollView::executeKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"executeKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline void ScrollView::fling(jint arg0) const
	{
		callMethod<void>(
			"fling",
			"(I)V",
			arg0
		);
	}
	inline jboolean ScrollView::fullScroll(jint arg0) const
	{
		return callMethod<jboolean>(
			"fullScroll",
			"(I)Z",
			arg0
		);
	}
	inline JString ScrollView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint ScrollView::getMaxScrollAmount() const
	{
		return callMethod<jint>(
			"getMaxScrollAmount",
			"()I"
		);
	}
	inline jboolean ScrollView::isFillViewport() const
	{
		return callMethod<jboolean>(
			"isFillViewport",
			"()Z"
		);
	}
	inline jboolean ScrollView::isSmoothScrollingEnabled() const
	{
		return callMethod<jboolean>(
			"isSmoothScrollingEnabled",
			"()Z"
		);
	}
	inline jboolean ScrollView::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean ScrollView::onInterceptTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean ScrollView::onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3) const
	{
		return callMethod<jboolean>(
			"onNestedFling",
			"(Landroid/view/View;FFZ)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void ScrollView::onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"onNestedScroll",
			"(Landroid/view/View;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void ScrollView::onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean ScrollView::onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ScrollView::onStopNestedScroll(android::view::View arg0) const
	{
		callMethod<void>(
			"onStopNestedScroll",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline jboolean ScrollView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean ScrollView::pageScroll(jint arg0) const
	{
		return callMethod<jboolean>(
			"pageScroll",
			"(I)Z",
			arg0
		);
	}
	inline void ScrollView::requestChildFocus(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean ScrollView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ScrollView::requestDisallowInterceptTouchEvent(jboolean arg0) const
	{
		callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	inline void ScrollView::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	inline void ScrollView::scrollTo(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"scrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ScrollView::setFillViewport(jboolean arg0) const
	{
		callMethod<void>(
			"setFillViewport",
			"(Z)V",
			arg0
		);
	}
	inline void ScrollView::setOverScrollMode(jint arg0) const
	{
		callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	inline void ScrollView::setSmoothScrollingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSmoothScrollingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline jboolean ScrollView::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	inline void ScrollView::smoothScrollBy(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ScrollView::smoothScrollTo(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"smoothScrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
