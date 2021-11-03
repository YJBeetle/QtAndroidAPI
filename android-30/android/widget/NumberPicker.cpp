#include "../../JArray.hpp"
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
	NumberPicker::NumberPicker(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	NumberPicker::NumberPicker(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	NumberPicker::NumberPicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
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
	JArray NumberPicker::getDisplayedValues()
	{
		return callObjectMethod(
			"getDisplayedValues",
			"()[Ljava/lang/String;"
		);
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
	jint NumberPicker::getSelectionDividerHeight()
	{
		return callMethod<jint>(
			"getSelectionDividerHeight",
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
	jint NumberPicker::getTextColor()
	{
		return callMethod<jint>(
			"getTextColor",
			"()I"
		);
	}
	jfloat NumberPicker::getTextSize()
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
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
	void NumberPicker::setDisplayedValues(JArray arg0)
	{
		callMethod<void>(
			"setDisplayedValues",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
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
	void NumberPicker::setFormatter(JObject arg0)
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
	void NumberPicker::setOnScrollListener(JObject arg0)
	{
		callMethod<void>(
			"setOnScrollListener",
			"(Landroid/widget/NumberPicker$OnScrollListener;)V",
			arg0.object()
		);
	}
	void NumberPicker::setOnValueChangedListener(JObject arg0)
	{
		callMethod<void>(
			"setOnValueChangedListener",
			"(Landroid/widget/NumberPicker$OnValueChangeListener;)V",
			arg0.object()
		);
	}
	void NumberPicker::setSelectionDividerHeight(jint arg0)
	{
		callMethod<void>(
			"setSelectionDividerHeight",
			"(I)V",
			arg0
		);
	}
	void NumberPicker::setTextColor(jint arg0)
	{
		callMethod<void>(
			"setTextColor",
			"(I)V",
			arg0
		);
	}
	void NumberPicker::setTextSize(jfloat arg0)
	{
		callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
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

