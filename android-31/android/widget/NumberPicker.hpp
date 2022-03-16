#pragma once

#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/accessibility/AccessibilityNodeProvider.def.hpp"
#include "./NumberPicker.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline NumberPicker::NumberPicker(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline NumberPicker::NumberPicker(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline NumberPicker::NumberPicker(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline NumberPicker::NumberPicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::LinearLayout(
			"android.widget.NumberPicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void NumberPicker::computeScroll() const
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	inline jboolean NumberPicker::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean NumberPicker::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean NumberPicker::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline android::view::accessibility::AccessibilityNodeProvider NumberPicker::getAccessibilityNodeProvider() const
	{
		return callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	inline JArray NumberPicker::getDisplayedValues() const
	{
		return callObjectMethod(
			"getDisplayedValues",
			"()[Ljava/lang/String;"
		);
	}
	inline jint NumberPicker::getMaxValue() const
	{
		return callMethod<jint>(
			"getMaxValue",
			"()I"
		);
	}
	inline jint NumberPicker::getMinValue() const
	{
		return callMethod<jint>(
			"getMinValue",
			"()I"
		);
	}
	inline jint NumberPicker::getSelectionDividerHeight() const
	{
		return callMethod<jint>(
			"getSelectionDividerHeight",
			"()I"
		);
	}
	inline jint NumberPicker::getSolidColor() const
	{
		return callMethod<jint>(
			"getSolidColor",
			"()I"
		);
	}
	inline jint NumberPicker::getTextColor() const
	{
		return callMethod<jint>(
			"getTextColor",
			"()I"
		);
	}
	inline jfloat NumberPicker::getTextSize() const
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	inline jint NumberPicker::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	inline jboolean NumberPicker::getWrapSelectorWheel() const
	{
		return callMethod<jboolean>(
			"getWrapSelectorWheel",
			"()Z"
		);
	}
	inline void NumberPicker::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline jboolean NumberPicker::onInterceptTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean NumberPicker::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean NumberPicker::performClick() const
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	inline jboolean NumberPicker::performLongClick() const
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	inline void NumberPicker::scrollBy(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"scrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void NumberPicker::setDisplayedValues(JArray arg0) const
	{
		callMethod<void>(
			"setDisplayedValues",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void NumberPicker::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void NumberPicker::setFormatter(JObject arg0) const
	{
		callMethod<void>(
			"setFormatter",
			"(Landroid/widget/NumberPicker$Formatter;)V",
			arg0.object()
		);
	}
	inline void NumberPicker::setMaxValue(jint arg0) const
	{
		callMethod<void>(
			"setMaxValue",
			"(I)V",
			arg0
		);
	}
	inline void NumberPicker::setMinValue(jint arg0) const
	{
		callMethod<void>(
			"setMinValue",
			"(I)V",
			arg0
		);
	}
	inline void NumberPicker::setOnLongPressUpdateInterval(jlong arg0) const
	{
		callMethod<void>(
			"setOnLongPressUpdateInterval",
			"(J)V",
			arg0
		);
	}
	inline void NumberPicker::setOnScrollListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnScrollListener",
			"(Landroid/widget/NumberPicker$OnScrollListener;)V",
			arg0.object()
		);
	}
	inline void NumberPicker::setOnValueChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnValueChangedListener",
			"(Landroid/widget/NumberPicker$OnValueChangeListener;)V",
			arg0.object()
		);
	}
	inline void NumberPicker::setSelectionDividerHeight(jint arg0) const
	{
		callMethod<void>(
			"setSelectionDividerHeight",
			"(I)V",
			arg0
		);
	}
	inline void NumberPicker::setTextColor(jint arg0) const
	{
		callMethod<void>(
			"setTextColor",
			"(I)V",
			arg0
		);
	}
	inline void NumberPicker::setTextSize(jfloat arg0) const
	{
		callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
		);
	}
	inline void NumberPicker::setValue(jint arg0) const
	{
		callMethod<void>(
			"setValue",
			"(I)V",
			arg0
		);
	}
	inline void NumberPicker::setWrapSelectorWheel(jboolean arg0) const
	{
		callMethod<void>(
			"setWrapSelectorWheel",
			"(Z)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

