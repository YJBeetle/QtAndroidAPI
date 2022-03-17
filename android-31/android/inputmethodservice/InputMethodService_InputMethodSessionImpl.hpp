#pragma once

#include "../../JArray.hpp"
#include "../graphics/Rect.def.hpp"
#include "./InputMethodService.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/inputmethod/CursorAnchorInfo.def.hpp"
#include "../view/inputmethod/ExtractedText.def.hpp"
#include "../../JString.hpp"
#include "./InputMethodService_InputMethodSessionImpl.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// Constructors
	inline InputMethodService_InputMethodSessionImpl::InputMethodService_InputMethodSessionImpl(android::inputmethodservice::InputMethodService arg0)
		: android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl(
			"android.inputmethodservice.InputMethodService$InputMethodSessionImpl",
			"(Landroid/inputmethodservice/InputMethodService;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void InputMethodService_InputMethodSessionImpl::appPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"appPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void InputMethodService_InputMethodSessionImpl::displayCompletions(JArray arg0) const
	{
		callMethod<void>(
			"displayCompletions",
			"([Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object<jarray>()
		);
	}
	inline void InputMethodService_InputMethodSessionImpl::finishInput() const
	{
		callMethod<void>(
			"finishInput",
			"()V"
		);
	}
	inline void InputMethodService_InputMethodSessionImpl::toggleSoftInput(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"toggleSoftInput",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void InputMethodService_InputMethodSessionImpl::updateCursor(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"updateCursor",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void InputMethodService_InputMethodSessionImpl::updateCursorAnchorInfo(android::view::inputmethod::CursorAnchorInfo arg0) const
	{
		callMethod<void>(
			"updateCursorAnchorInfo",
			"(Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.object()
		);
	}
	inline void InputMethodService_InputMethodSessionImpl::updateExtractedText(jint arg0, android::view::inputmethod::ExtractedText arg1) const
	{
		callMethod<void>(
			"updateExtractedText",
			"(ILandroid/view/inputmethod/ExtractedText;)V",
			arg0,
			arg1.object()
		);
	}
	inline void InputMethodService_InputMethodSessionImpl::updateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
			"updateSelection",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void InputMethodService_InputMethodSessionImpl::viewClicked(jboolean arg0) const
	{
		callMethod<void>(
			"viewClicked",
			"(Z)V",
			arg0
		);
	}
} // namespace android::inputmethodservice

// Base class headers
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::inputmethodservice;
#endif
