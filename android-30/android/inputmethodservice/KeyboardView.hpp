#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "./Keyboard.def.hpp"
#include "./Keyboard_Key.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "./KeyboardView.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// Constructors
	inline KeyboardView::KeyboardView(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline KeyboardView::KeyboardView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline KeyboardView::KeyboardView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void KeyboardView::closing() const
	{
		callMethod<void>(
			"closing",
			"()V"
		);
	}
	inline android::inputmethodservice::Keyboard KeyboardView::getKeyboard() const
	{
		return callObjectMethod(
			"getKeyboard",
			"()Landroid/inputmethodservice/Keyboard;"
		);
	}
	inline jboolean KeyboardView::handleBack() const
	{
		return callMethod<jboolean>(
			"handleBack",
			"()Z"
		);
	}
	inline void KeyboardView::invalidateAllKeys() const
	{
		callMethod<void>(
			"invalidateAllKeys",
			"()V"
		);
	}
	inline void KeyboardView::invalidateKey(jint arg0) const
	{
		callMethod<void>(
			"invalidateKey",
			"(I)V",
			arg0
		);
	}
	inline jboolean KeyboardView::isPreviewEnabled() const
	{
		return callMethod<jboolean>(
			"isPreviewEnabled",
			"()Z"
		);
	}
	inline jboolean KeyboardView::isProximityCorrectionEnabled() const
	{
		return callMethod<jboolean>(
			"isProximityCorrectionEnabled",
			"()Z"
		);
	}
	inline jboolean KeyboardView::isShifted() const
	{
		return callMethod<jboolean>(
			"isShifted",
			"()Z"
		);
	}
	inline void KeyboardView::onClick(android::view::View arg0) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void KeyboardView::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	inline void KeyboardView::onDraw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"onDraw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jboolean KeyboardView::onHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void KeyboardView::onMeasure(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void KeyboardView::onSizeChanged(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onSizeChanged",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean KeyboardView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void KeyboardView::setKeyboard(android::inputmethodservice::Keyboard arg0) const
	{
		callMethod<void>(
			"setKeyboard",
			"(Landroid/inputmethodservice/Keyboard;)V",
			arg0.object()
		);
	}
	inline void KeyboardView::setOnKeyboardActionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnKeyboardActionListener",
			"(Landroid/inputmethodservice/KeyboardView$OnKeyboardActionListener;)V",
			arg0.object()
		);
	}
	inline void KeyboardView::setPopupOffset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setPopupOffset",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void KeyboardView::setPopupParent(android::view::View arg0) const
	{
		callMethod<void>(
			"setPopupParent",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void KeyboardView::setPreviewEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setPreviewEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void KeyboardView::setProximityCorrectionEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setProximityCorrectionEnabled",
			"(Z)V",
			arg0
		);
	}
	inline jboolean KeyboardView::setShifted(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setShifted",
			"(Z)Z",
			arg0
		);
	}
	inline void KeyboardView::setVerticalCorrection(jint arg0) const
	{
		callMethod<void>(
			"setVerticalCorrection",
			"(I)V",
			arg0
		);
	}
} // namespace android::inputmethodservice

// Base class headers
#include "../view/View.hpp"

