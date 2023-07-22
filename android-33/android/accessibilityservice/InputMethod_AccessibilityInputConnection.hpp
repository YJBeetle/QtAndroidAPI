#pragma once

#include "./InputMethod.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/inputmethod/SurroundingText.def.hpp"
#include "../view/inputmethod/TextAttribute.def.hpp"
#include "../../JString.hpp"
#include "./InputMethod_AccessibilityInputConnection.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void InputMethod_AccessibilityInputConnection::clearMetaKeyStates(jint arg0) const
	{
		callMethod<void>(
			"clearMetaKeyStates",
			"(I)V",
			arg0
		);
	}
	inline void InputMethod_AccessibilityInputConnection::commitText(JString arg0, jint arg1, android::view::inputmethod::TextAttribute arg2) const
	{
		callMethod<void>(
			"commitText",
			"(Ljava/lang/CharSequence;ILandroid/view/inputmethod/TextAttribute;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline void InputMethod_AccessibilityInputConnection::deleteSurroundingText(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"deleteSurroundingText",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jint InputMethod_AccessibilityInputConnection::getCursorCapsMode(jint arg0) const
	{
		return callMethod<jint>(
			"getCursorCapsMode",
			"(I)I",
			arg0
		);
	}
	inline android::view::inputmethod::SurroundingText InputMethod_AccessibilityInputConnection::getSurroundingText(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"getSurroundingText",
			"(III)Landroid/view/inputmethod/SurroundingText;",
			arg0,
			arg1,
			arg2
		);
	}
	inline void InputMethod_AccessibilityInputConnection::performContextMenuAction(jint arg0) const
	{
		callMethod<void>(
			"performContextMenuAction",
			"(I)V",
			arg0
		);
	}
	inline void InputMethod_AccessibilityInputConnection::performEditorAction(jint arg0) const
	{
		callMethod<void>(
			"performEditorAction",
			"(I)V",
			arg0
		);
	}
	inline void InputMethod_AccessibilityInputConnection::sendKeyEvent(android::view::KeyEvent arg0) const
	{
		callMethod<void>(
			"sendKeyEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		);
	}
	inline void InputMethod_AccessibilityInputConnection::setSelection(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::accessibilityservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accessibilityservice;
#endif
