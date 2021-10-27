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
	
	ScrollView::ScrollView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScrollView::ScrollView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ScrollView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ScrollView::ScrollView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ScrollView::ScrollView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ScrollView::ScrollView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void ScrollView::addView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ScrollView::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScrollView::addView(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ScrollView::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean ScrollView::arrowScroll(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"arrowScroll",
			"(I)Z",
			arg0
		);
	}
	void ScrollView::computeScroll()
	{
		__thiz.callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	jboolean ScrollView::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ScrollView::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ScrollView::executeKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"executeKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ScrollView::fling(jint arg0)
	{
		__thiz.callMethod<void>(
			"fling",
			"(I)V",
			arg0
		);
	}
	jboolean ScrollView::fullScroll(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"fullScroll",
			"(I)Z",
			arg0
		);
	}
	jstring ScrollView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ScrollView::getBottomEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getBottomEdgeEffectColor",
			"()I"
		);
	}
	jint ScrollView::getMaxScrollAmount()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollAmount",
			"()I"
		);
	}
	jint ScrollView::getTopEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getTopEdgeEffectColor",
			"()I"
		);
	}
	jboolean ScrollView::isFillViewport()
	{
		return __thiz.callMethod<jboolean>(
			"isFillViewport",
			"()Z"
		);
	}
	jboolean ScrollView::isSmoothScrollingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSmoothScrollingEnabled",
			"()Z"
		);
	}
	jboolean ScrollView::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ScrollView::onInterceptTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ScrollView::onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onNestedFling",
			"(Landroid/view/View;FFZ)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void ScrollView::onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"onNestedScroll",
			"(Landroid/view/View;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void ScrollView::onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean ScrollView::onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ScrollView::onStopNestedScroll(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onStopNestedScroll",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ScrollView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ScrollView::pageScroll(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"pageScroll",
			"(I)Z",
			arg0
		);
	}
	void ScrollView::requestChildFocus(android::view::View arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ScrollView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ScrollView::requestDisallowInterceptTouchEvent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	void ScrollView::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void ScrollView::scrollTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"scrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScrollView::scrollToDescendant(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"scrollToDescendant",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ScrollView::setBottomEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBottomEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	void ScrollView::setEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	void ScrollView::setFillViewport(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillViewport",
			"(Z)V",
			arg0
		);
	}
	void ScrollView::setSmoothScrollingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSmoothScrollingEnabled",
			"(Z)V",
			arg0
		);
	}
	void ScrollView::setTopEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTopEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	jboolean ScrollView::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	void ScrollView::smoothScrollBy(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScrollView::smoothScrollTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::widget

