#pragma once

#ifndef ANDROID_WIDGET_SCROLLVIEW
#define ANDROID_WIDGET_SCROLLVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "FrameLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::widget
{
	class ScrollView : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jint getMaxScrollAmount();
		void fling(jint arg0);
		void smoothScrollBy(jint arg0, jint arg1);
		void setEdgeEffectColor(jint arg0);
		void setBottomEdgeEffectColor(jint arg0);
		void setTopEdgeEffectColor(jint arg0);
		jint getTopEdgeEffectColor();
		jint getBottomEdgeEffectColor();
		void scrollToDescendant(__jni_impl::android::view::View arg0);
		jboolean isFillViewport();
		void setFillViewport(jboolean arg0);
		jboolean isSmoothScrollingEnabled();
		void setSmoothScrollingEnabled(jboolean arg0);
		jboolean executeKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean pageScroll(jint arg0);
		jboolean fullScroll(jint arg0);
		jboolean arrowScroll(jint arg0);
		void smoothScrollTo(jint arg0, jint arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		void requestChildFocus(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		jboolean requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2);
		void requestDisallowInterceptTouchEvent(jboolean arg0);
		jboolean onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jstring getAccessibilityClassName();
		void addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2);
		void addView(__jni_impl::android::view::View arg0);
		void addView(__jni_impl::android::view::View arg0, jint arg1);
		jboolean shouldDelayChildPressedState();
		jboolean onStartNestedScroll(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
		void onNestedScrollAccepted(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
		void onStopNestedScroll(__jni_impl::android::view::View arg0);
		void onNestedScroll(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		jboolean onNestedFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3);
		void requestLayout();
		void scrollTo(jint arg0, jint arg1);
		void computeScroll();
		void draw(__jni_impl::android::graphics::Canvas arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/KeyEvent.hpp"
#include "../graphics/Rect.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../graphics/Canvas.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ScrollView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void ScrollView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ScrollView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ScrollView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ScrollView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint ScrollView::getMaxScrollAmount()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollAmount",
			"()I"
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
	void ScrollView::smoothScrollBy(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1
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
	void ScrollView::setBottomEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBottomEdgeEffectColor",
			"(I)V",
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
	jint ScrollView::getTopEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getTopEdgeEffectColor",
			"()I"
		);
	}
	jint ScrollView::getBottomEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getBottomEdgeEffectColor",
			"()I"
		);
	}
	void ScrollView::scrollToDescendant(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"scrollToDescendant",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ScrollView::isFillViewport()
	{
		return __thiz.callMethod<jboolean>(
			"isFillViewport",
			"()Z"
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
	jboolean ScrollView::isSmoothScrollingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSmoothScrollingEnabled",
			"()Z"
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
	jboolean ScrollView::executeKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"executeKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
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
	jboolean ScrollView::fullScroll(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"fullScroll",
			"(I)Z",
			arg0
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
	void ScrollView::smoothScrollTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean ScrollView::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ScrollView::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ScrollView::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ScrollView::requestChildFocus(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ScrollView::requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2)
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
	jboolean ScrollView::onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring ScrollView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ScrollView::addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScrollView::addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ScrollView::addView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ScrollView::addView(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean ScrollView::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	jboolean ScrollView::onStartNestedScroll(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ScrollView::onNestedScrollAccepted(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ScrollView::onStopNestedScroll(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onStopNestedScroll",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ScrollView::onNestedScroll(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	jboolean ScrollView::onNestedFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3)
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
	void ScrollView::computeScroll()
	{
		__thiz.callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	void ScrollView::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ScrollView : public __jni_impl::android::widget::ScrollView
	{
	public:
		ScrollView(QAndroidJniObject obj) { __thiz = obj; }
		ScrollView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ScrollView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ScrollView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ScrollView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SCROLLVIEW

