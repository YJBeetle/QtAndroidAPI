#pragma once

#ifndef ANDROID_WIDGET_NUMBERPICKER
#define ANDROID_WIDGET_NUMBERPICKER

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "LinearLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeProvider;
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
	class NumberPicker : public __jni_impl::android::widget::LinearLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jint getValue();
		void setValue(jint arg0);
		void setFormatter(__jni_impl::__JniBaseClass arg0);
		void setTextColor(jint arg0);
		jint getMinValue();
		jint getMaxValue();
		void setOnValueChangedListener(__jni_impl::__JniBaseClass arg0);
		jboolean getWrapSelectorWheel();
		void setWrapSelectorWheel(jboolean arg0);
		void setOnLongPressUpdateInterval(jlong arg0);
		void setMinValue(jint arg0);
		void setMaxValue(jint arg0);
		QAndroidJniObject getDisplayedValues();
		void setDisplayedValues(jarray arg0);
		void setSelectionDividerHeight(jint arg0);
		jint getSelectionDividerHeight();
		jint getTextColor();
		void setOnScrollListener(__jni_impl::__JniBaseClass arg0);
		jboolean onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void jumpDrawablesToCurrentState();
		jboolean performClick();
		jboolean performLongClick();
		QAndroidJniObject getAccessibilityNodeProvider();
		void setEnabled(jboolean arg0);
		void scrollBy(jint arg0, jint arg1);
		void computeScroll();
		jint getSolidColor();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jfloat getTextSize();
		void setTextSize(jfloat arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/accessibility/AccessibilityNodeProvider.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/KeyEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void NumberPicker::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void NumberPicker::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void NumberPicker::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void NumberPicker::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint NumberPicker::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I");
	}
	void NumberPicker::setValue(jint arg0)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(I)V",
			arg0);
	}
	void NumberPicker::setFormatter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFormatter",
			"(Landroid/widget/NumberPicker$Formatter;)V",
			arg0.__jniObject().object());
	}
	void NumberPicker::setTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextColor",
			"(I)V",
			arg0);
	}
	jint NumberPicker::getMinValue()
	{
		return __thiz.callMethod<jint>(
			"getMinValue",
			"()I");
	}
	jint NumberPicker::getMaxValue()
	{
		return __thiz.callMethod<jint>(
			"getMaxValue",
			"()I");
	}
	void NumberPicker::setOnValueChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnValueChangedListener",
			"(Landroid/widget/NumberPicker$OnValueChangeListener;)V",
			arg0.__jniObject().object());
	}
	jboolean NumberPicker::getWrapSelectorWheel()
	{
		return __thiz.callMethod<jboolean>(
			"getWrapSelectorWheel",
			"()Z");
	}
	void NumberPicker::setWrapSelectorWheel(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWrapSelectorWheel",
			"(Z)V",
			arg0);
	}
	void NumberPicker::setOnLongPressUpdateInterval(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setOnLongPressUpdateInterval",
			"(J)V",
			arg0);
	}
	void NumberPicker::setMinValue(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinValue",
			"(I)V",
			arg0);
	}
	void NumberPicker::setMaxValue(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxValue",
			"(I)V",
			arg0);
	}
	QAndroidJniObject NumberPicker::getDisplayedValues()
	{
		return __thiz.callObjectMethod(
			"getDisplayedValues",
			"()[Ljava/lang/String;");
	}
	void NumberPicker::setDisplayedValues(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayedValues",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void NumberPicker::setSelectionDividerHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelectionDividerHeight",
			"(I)V",
			arg0);
	}
	jint NumberPicker::getSelectionDividerHeight()
	{
		return __thiz.callMethod<jint>(
			"getSelectionDividerHeight",
			"()I");
	}
	jint NumberPicker::getTextColor()
	{
		return __thiz.callMethod<jint>(
			"getTextColor",
			"()I");
	}
	void NumberPicker::setOnScrollListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnScrollListener",
			"(Landroid/widget/NumberPicker$OnScrollListener;)V",
			arg0.__jniObject().object());
	}
	jboolean NumberPicker::onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	void NumberPicker::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V");
	}
	jboolean NumberPicker::performClick()
	{
		return __thiz.callMethod<jboolean>(
			"performClick",
			"()Z");
	}
	jboolean NumberPicker::performLongClick()
	{
		return __thiz.callMethod<jboolean>(
			"performLongClick",
			"()Z");
	}
	QAndroidJniObject NumberPicker::getAccessibilityNodeProvider()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;");
	}
	void NumberPicker::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0);
	}
	void NumberPicker::scrollBy(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"scrollBy",
			"(II)V",
			arg0,
			arg1);
	}
	void NumberPicker::computeScroll()
	{
		__thiz.callMethod<void>(
			"computeScroll",
			"()V");
	}
	jint NumberPicker::getSolidColor()
	{
		return __thiz.callMethod<jint>(
			"getSolidColor",
			"()I");
	}
	jboolean NumberPicker::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean NumberPicker::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean NumberPicker::dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean NumberPicker::dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jfloat NumberPicker::getTextSize()
	{
		return __thiz.callMethod<jfloat>(
			"getTextSize",
			"()F");
	}
	void NumberPicker::setTextSize(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class NumberPicker : public __jni_impl::android::widget::NumberPicker
	{
	public:
		NumberPicker(QAndroidJniObject obj) { __thiz = obj; }
		NumberPicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		NumberPicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		NumberPicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		NumberPicker(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_NUMBERPICKER

