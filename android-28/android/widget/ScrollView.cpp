#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./ScrollView.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ScrollView::ScrollView(QJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	ScrollView::ScrollView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.ScrollView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ScrollView::ScrollView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::FrameLayout(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ScrollView::ScrollView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ScrollView::ScrollView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void ScrollView::addView(android::view::View arg0)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ScrollView::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScrollView::addView(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void ScrollView::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean ScrollView::arrowScroll(jint arg0)
	{
		return callMethod<jboolean>(
			"arrowScroll",
			"(I)Z",
			arg0
		);
	}
	void ScrollView::computeScroll()
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	jboolean ScrollView::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void ScrollView::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean ScrollView::executeKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"executeKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void ScrollView::fling(jint arg0)
	{
		callMethod<void>(
			"fling",
			"(I)V",
			arg0
		);
	}
	jboolean ScrollView::fullScroll(jint arg0)
	{
		return callMethod<jboolean>(
			"fullScroll",
			"(I)Z",
			arg0
		);
	}
	jstring ScrollView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ScrollView::getMaxScrollAmount()
	{
		return callMethod<jint>(
			"getMaxScrollAmount",
			"()I"
		);
	}
	jboolean ScrollView::isFillViewport()
	{
		return callMethod<jboolean>(
			"isFillViewport",
			"()Z"
		);
	}
	jboolean ScrollView::isSmoothScrollingEnabled()
	{
		return callMethod<jboolean>(
			"isSmoothScrollingEnabled",
			"()Z"
		);
	}
	jboolean ScrollView::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean ScrollView::onInterceptTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean ScrollView::onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3)
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
	void ScrollView::onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void ScrollView::onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean ScrollView::onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ScrollView::onStopNestedScroll(android::view::View arg0)
	{
		callMethod<void>(
			"onStopNestedScroll",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	jboolean ScrollView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean ScrollView::pageScroll(jint arg0)
	{
		return callMethod<jboolean>(
			"pageScroll",
			"(I)Z",
			arg0
		);
	}
	void ScrollView::requestChildFocus(android::view::View arg0, android::view::View arg1)
	{
		callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ScrollView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ScrollView::requestDisallowInterceptTouchEvent(jboolean arg0)
	{
		callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	void ScrollView::requestLayout()
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void ScrollView::scrollTo(jint arg0, jint arg1)
	{
		callMethod<void>(
			"scrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScrollView::setFillViewport(jboolean arg0)
	{
		callMethod<void>(
			"setFillViewport",
			"(Z)V",
			arg0
		);
	}
	void ScrollView::setOverScrollMode(jint arg0)
	{
		callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	void ScrollView::setSmoothScrollingEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setSmoothScrollingEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean ScrollView::shouldDelayChildPressedState()
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	void ScrollView::smoothScrollBy(jint arg0, jint arg1)
	{
		callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScrollView::smoothScrollTo(jint arg0, jint arg1)
	{
		callMethod<void>(
			"smoothScrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::widget

