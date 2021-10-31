#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./HorizontalScrollView.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	HorizontalScrollView::HorizontalScrollView(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	HorizontalScrollView::HorizontalScrollView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.HorizontalScrollView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	HorizontalScrollView::HorizontalScrollView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::FrameLayout(
			"android.widget.HorizontalScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	HorizontalScrollView::HorizontalScrollView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.HorizontalScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	HorizontalScrollView::HorizontalScrollView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.HorizontalScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void HorizontalScrollView::addView(android::view::View arg0)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void HorizontalScrollView::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void HorizontalScrollView::addView(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void HorizontalScrollView::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean HorizontalScrollView::arrowScroll(jint arg0)
	{
		return callMethod<jboolean>(
			"arrowScroll",
			"(I)Z",
			arg0
		);
	}
	void HorizontalScrollView::computeScroll()
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	jboolean HorizontalScrollView::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void HorizontalScrollView::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean HorizontalScrollView::executeKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"executeKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void HorizontalScrollView::fling(jint arg0)
	{
		callMethod<void>(
			"fling",
			"(I)V",
			arg0
		);
	}
	jboolean HorizontalScrollView::fullScroll(jint arg0)
	{
		return callMethod<jboolean>(
			"fullScroll",
			"(I)Z",
			arg0
		);
	}
	jstring HorizontalScrollView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint HorizontalScrollView::getMaxScrollAmount()
	{
		return callMethod<jint>(
			"getMaxScrollAmount",
			"()I"
		);
	}
	jboolean HorizontalScrollView::isFillViewport()
	{
		return callMethod<jboolean>(
			"isFillViewport",
			"()Z"
		);
	}
	jboolean HorizontalScrollView::isSmoothScrollingEnabled()
	{
		return callMethod<jboolean>(
			"isSmoothScrollingEnabled",
			"()Z"
		);
	}
	jboolean HorizontalScrollView::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean HorizontalScrollView::onInterceptTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean HorizontalScrollView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean HorizontalScrollView::pageScroll(jint arg0)
	{
		return callMethod<jboolean>(
			"pageScroll",
			"(I)Z",
			arg0
		);
	}
	void HorizontalScrollView::requestChildFocus(android::view::View arg0, android::view::View arg1)
	{
		callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean HorizontalScrollView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void HorizontalScrollView::requestDisallowInterceptTouchEvent(jboolean arg0)
	{
		callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	void HorizontalScrollView::requestLayout()
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void HorizontalScrollView::scrollTo(jint arg0, jint arg1)
	{
		callMethod<void>(
			"scrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void HorizontalScrollView::setFillViewport(jboolean arg0)
	{
		callMethod<void>(
			"setFillViewport",
			"(Z)V",
			arg0
		);
	}
	void HorizontalScrollView::setOverScrollMode(jint arg0)
	{
		callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	void HorizontalScrollView::setSmoothScrollingEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setSmoothScrollingEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean HorizontalScrollView::shouldDelayChildPressedState()
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	void HorizontalScrollView::smoothScrollBy(jint arg0, jint arg1)
	{
		callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	void HorizontalScrollView::smoothScrollTo(jint arg0, jint arg1)
	{
		callMethod<void>(
			"smoothScrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::widget

