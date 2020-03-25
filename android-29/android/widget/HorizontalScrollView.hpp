#pragma once

#ifndef ANDROID_WIDGET_HORIZONTALSCROLLVIEW
#define ANDROID_WIDGET_HORIZONTALSCROLLVIEW

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
namespace __jni_impl::android::view
{
	class KeyEvent;
}

namespace __jni_impl::android::widget
{
	class HorizontalScrollView : public __jni_impl::android::widget::FrameLayout
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
		void requestChildFocus(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		jboolean requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2);
		void requestDisallowInterceptTouchEvent(jboolean arg0);
		jboolean onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		QAndroidJniObject getAccessibilityClassName();
		void addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2);
		void addView(__jni_impl::android::view::View arg0);
		void addView(__jni_impl::android::view::View arg0, jint arg1);
		void addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		jboolean shouldDelayChildPressedState();
		void requestLayout();
		void scrollTo(jint arg0, jint arg1);
		void computeScroll();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		void setRightEdgeEffectColor(jint arg0);
		void setLeftEdgeEffectColor(jint arg0);
		jint getLeftEdgeEffectColor();
		jint getRightEdgeEffectColor();
		jboolean isFillViewport();
		void setFillViewport(jboolean arg0);
		jboolean isSmoothScrollingEnabled();
		void setSmoothScrollingEnabled(jboolean arg0);
		jboolean executeKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean pageScroll(jint arg0);
		jboolean fullScroll(jint arg0);
		jboolean arrowScroll(jint arg0);
		void smoothScrollTo(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../graphics/Rect.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/KeyEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void HorizontalScrollView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.HorizontalScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void HorizontalScrollView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.HorizontalScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void HorizontalScrollView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.HorizontalScrollView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void HorizontalScrollView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.HorizontalScrollView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint HorizontalScrollView::getMaxScrollAmount()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollAmount",
			"()I");
	}
	void HorizontalScrollView::fling(jint arg0)
	{
		__thiz.callMethod<void>(
			"fling",
			"(I)V",
			arg0);
	}
	void HorizontalScrollView::smoothScrollBy(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1);
	}
	void HorizontalScrollView::setEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEdgeEffectColor",
			"(I)V",
			arg0);
	}
	void HorizontalScrollView::requestChildFocus(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean HorizontalScrollView::requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void HorizontalScrollView::requestDisallowInterceptTouchEvent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0);
	}
	jboolean HorizontalScrollView::onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject HorizontalScrollView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void HorizontalScrollView::addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void HorizontalScrollView::addView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void HorizontalScrollView::addView(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void HorizontalScrollView::addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean HorizontalScrollView::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z");
	}
	void HorizontalScrollView::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V");
	}
	void HorizontalScrollView::scrollTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"scrollTo",
			"(II)V",
			arg0,
			arg1);
	}
	void HorizontalScrollView::computeScroll()
	{
		__thiz.callMethod<void>(
			"computeScroll",
			"()V");
	}
	void HorizontalScrollView::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	jboolean HorizontalScrollView::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean HorizontalScrollView::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean HorizontalScrollView::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	void HorizontalScrollView::setRightEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRightEdgeEffectColor",
			"(I)V",
			arg0);
	}
	void HorizontalScrollView::setLeftEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLeftEdgeEffectColor",
			"(I)V",
			arg0);
	}
	jint HorizontalScrollView::getLeftEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getLeftEdgeEffectColor",
			"()I");
	}
	jint HorizontalScrollView::getRightEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getRightEdgeEffectColor",
			"()I");
	}
	jboolean HorizontalScrollView::isFillViewport()
	{
		return __thiz.callMethod<jboolean>(
			"isFillViewport",
			"()Z");
	}
	void HorizontalScrollView::setFillViewport(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillViewport",
			"(Z)V",
			arg0);
	}
	jboolean HorizontalScrollView::isSmoothScrollingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSmoothScrollingEnabled",
			"()Z");
	}
	void HorizontalScrollView::setSmoothScrollingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSmoothScrollingEnabled",
			"(Z)V",
			arg0);
	}
	jboolean HorizontalScrollView::executeKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"executeKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean HorizontalScrollView::pageScroll(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"pageScroll",
			"(I)Z",
			arg0);
	}
	jboolean HorizontalScrollView::fullScroll(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"fullScroll",
			"(I)Z",
			arg0);
	}
	jboolean HorizontalScrollView::arrowScroll(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"arrowScroll",
			"(I)Z",
			arg0);
	}
	void HorizontalScrollView::smoothScrollTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollTo",
			"(II)V",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class HorizontalScrollView : public __jni_impl::android::widget::HorizontalScrollView
	{
	public:
		HorizontalScrollView(QAndroidJniObject obj) { __thiz = obj; }
		HorizontalScrollView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		HorizontalScrollView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		HorizontalScrollView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		HorizontalScrollView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_HORIZONTALSCROLLVIEW

