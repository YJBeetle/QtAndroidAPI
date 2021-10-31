#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/accessibility/AccessibilityNodeProvider.hpp"
#include "./NumberPicker.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	NumberPicker::NumberPicker(QAndroidJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	NumberPicker::NumberPicker(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	NumberPicker::NumberPicker(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	NumberPicker::NumberPicker(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	NumberPicker::NumberPicker(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void NumberPicker::computeScroll()
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	jboolean NumberPicker::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean NumberPicker::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean NumberPicker::dispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	android::view::accessibility::AccessibilityNodeProvider NumberPicker::getAccessibilityNodeProvider()
	{
		return callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	jarray NumberPicker::getDisplayedValues()
	{
		return callObjectMethod(
			"getDisplayedValues",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint NumberPicker::getMaxValue()
	{
		return callMethod<jint>(
			"getMaxValue",
			"()I"
		);
	}
	jint NumberPicker::getMinValue()
	{
		return callMethod<jint>(
			"getMinValue",
			"()I"
		);
	}
	jint NumberPicker::getSolidColor()
	{
		return callMethod<jint>(
			"getSolidColor",
			"()I"
		);
	}
	jint NumberPicker::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jboolean NumberPicker::getWrapSelectorWheel()
	{
		return callMethod<jboolean>(
			"getWrapSelectorWheel",
			"()Z"
		);
	}
	void NumberPicker::jumpDrawablesToCurrentState()
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	jboolean NumberPicker::onInterceptTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean NumberPicker::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean NumberPicker::performClick()
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	jboolean NumberPicker::performLongClick()
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	void NumberPicker::scrollBy(jint arg0, jint arg1)
	{
		callMethod<void>(
			"scrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	void NumberPicker::setDisplayedValues(jarray arg0)
	{
		callMethod<void>(
			"setDisplayedValues",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void NumberPicker::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void NumberPicker::setFormatter(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setFormatter",
			"(Landroid/widget/NumberPicker$Formatter;)V",
			arg0.object()
		);
	}
	void NumberPicker::setMaxValue(jint arg0)
	{
		callMethod<void>(
			"setMaxValue",
			"(I)V",
			arg0
		);
	}
	void NumberPicker::setMinValue(jint arg0)
	{
		callMethod<void>(
			"setMinValue",
			"(I)V",
			arg0
		);
	}
	void NumberPicker::setOnLongPressUpdateInterval(jlong arg0)
	{
		callMethod<void>(
			"setOnLongPressUpdateInterval",
			"(J)V",
			arg0
		);
	}
	void NumberPicker::setOnScrollListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnScrollListener",
			"(Landroid/widget/NumberPicker$OnScrollListener;)V",
			arg0.object()
		);
	}
	void NumberPicker::setOnValueChangedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnValueChangedListener",
			"(Landroid/widget/NumberPicker$OnValueChangeListener;)V",
			arg0.object()
		);
	}
	void NumberPicker::setValue(jint arg0)
	{
		callMethod<void>(
			"setValue",
			"(I)V",
			arg0
		);
	}
	void NumberPicker::setWrapSelectorWheel(jboolean arg0)
	{
		callMethod<void>(
			"setWrapSelectorWheel",
			"(Z)V",
			arg0
		);
	}
} // namespace android::widget

