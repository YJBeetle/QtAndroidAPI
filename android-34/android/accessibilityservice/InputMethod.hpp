#pragma once

#include "./AccessibilityService.def.hpp"
#include "./InputMethod_AccessibilityInputConnection.def.hpp"
#include "../view/inputmethod/EditorInfo.def.hpp"
#include "./InputMethod.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	inline InputMethod::InputMethod(android::accessibilityservice::AccessibilityService arg0)
		: JObject(
			"android.accessibilityservice.InputMethod",
			"(Landroid/accessibilityservice/AccessibilityService;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::accessibilityservice::InputMethod_AccessibilityInputConnection InputMethod::getCurrentInputConnection() const
	{
		return callObjectMethod(
			"getCurrentInputConnection",
			"()Landroid/accessibilityservice/InputMethod$AccessibilityInputConnection;"
		);
	}
	inline android::view::inputmethod::EditorInfo InputMethod::getCurrentInputEditorInfo() const
	{
		return callObjectMethod(
			"getCurrentInputEditorInfo",
			"()Landroid/view/inputmethod/EditorInfo;"
		);
	}
	inline jboolean InputMethod::getCurrentInputStarted() const
	{
		return callMethod<jboolean>(
			"getCurrentInputStarted",
			"()Z"
		);
	}
	inline void InputMethod::onFinishInput() const
	{
		callMethod<void>(
			"onFinishInput",
			"()V"
		);
	}
	inline void InputMethod::onStartInput(android::view::inputmethod::EditorInfo arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onStartInput",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void InputMethod::onUpdateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
			"onUpdateSelection",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
} // namespace android::accessibilityservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accessibilityservice;
#endif
