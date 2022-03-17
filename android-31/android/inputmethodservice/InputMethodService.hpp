#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../app/Dialog.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.def.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.def.hpp"
#include "./InputMethodService_Insets.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/LayoutInflater.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../view/Window.def.hpp"
#include "../view/inputmethod/CursorAnchorInfo.def.hpp"
#include "../view/inputmethod/EditorInfo.def.hpp"
#include "../view/inputmethod/ExtractedText.def.hpp"
#include "../view/inputmethod/InlineSuggestionsRequest.def.hpp"
#include "../view/inputmethod/InlineSuggestionsResponse.def.hpp"
#include "../view/inputmethod/InputBinding.def.hpp"
#include "../view/inputmethod/InputMethodSubtype.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./InputMethodService.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	inline jint InputMethodService::BACK_DISPOSITION_ADJUST_NOTHING()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_ADJUST_NOTHING"
		);
	}
	inline jint InputMethodService::BACK_DISPOSITION_DEFAULT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_DEFAULT"
		);
	}
	inline jint InputMethodService::BACK_DISPOSITION_WILL_DISMISS()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_WILL_DISMISS"
		);
	}
	inline jint InputMethodService::BACK_DISPOSITION_WILL_NOT_DISMISS()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_WILL_NOT_DISMISS"
		);
	}
	
	// Constructors
	inline InputMethodService::InputMethodService()
		: android::inputmethodservice::AbstractInputMethodService(
			"android.inputmethodservice.InputMethodService",
			"()V"
		) {}
	
	// Methods
	inline jboolean InputMethodService::enableHardwareAcceleration() const
	{
		return callMethod<jboolean>(
			"enableHardwareAcceleration",
			"()Z"
		);
	}
	inline jint InputMethodService::getBackDisposition() const
	{
		return callMethod<jint>(
			"getBackDisposition",
			"()I"
		);
	}
	inline jint InputMethodService::getCandidatesHiddenVisibility() const
	{
		return callMethod<jint>(
			"getCandidatesHiddenVisibility",
			"()I"
		);
	}
	inline android::view::inputmethod::InputBinding InputMethodService::getCurrentInputBinding() const
	{
		return callObjectMethod(
			"getCurrentInputBinding",
			"()Landroid/view/inputmethod/InputBinding;"
		);
	}
	inline JObject InputMethodService::getCurrentInputConnection() const
	{
		return callObjectMethod(
			"getCurrentInputConnection",
			"()Landroid/view/inputmethod/InputConnection;"
		);
	}
	inline android::view::inputmethod::EditorInfo InputMethodService::getCurrentInputEditorInfo() const
	{
		return callObjectMethod(
			"getCurrentInputEditorInfo",
			"()Landroid/view/inputmethod/EditorInfo;"
		);
	}
	inline jboolean InputMethodService::getCurrentInputStarted() const
	{
		return callMethod<jboolean>(
			"getCurrentInputStarted",
			"()Z"
		);
	}
	inline jint InputMethodService::getInputMethodWindowRecommendedHeight() const
	{
		return callMethod<jint>(
			"getInputMethodWindowRecommendedHeight",
			"()I"
		);
	}
	inline android::view::LayoutInflater InputMethodService::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	inline jint InputMethodService::getMaxWidth() const
	{
		return callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	inline JString InputMethodService::getTextForImeAction(jint arg0) const
	{
		return callObjectMethod(
			"getTextForImeAction",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline android::app::Dialog InputMethodService::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/app/Dialog;"
		);
	}
	inline void InputMethodService::hideStatusIcon() const
	{
		callMethod<void>(
			"hideStatusIcon",
			"()V"
		);
	}
	inline void InputMethodService::hideWindow() const
	{
		callMethod<void>(
			"hideWindow",
			"()V"
		);
	}
	inline jboolean InputMethodService::isExtractViewShown() const
	{
		return callMethod<jboolean>(
			"isExtractViewShown",
			"()Z"
		);
	}
	inline jboolean InputMethodService::isFullscreenMode() const
	{
		return callMethod<jboolean>(
			"isFullscreenMode",
			"()Z"
		);
	}
	inline jboolean InputMethodService::isInputViewShown() const
	{
		return callMethod<jboolean>(
			"isInputViewShown",
			"()Z"
		);
	}
	inline jboolean InputMethodService::isShowInputRequested() const
	{
		return callMethod<jboolean>(
			"isShowInputRequested",
			"()Z"
		);
	}
	inline void InputMethodService::onAppPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void InputMethodService::onBindInput() const
	{
		callMethod<void>(
			"onBindInput",
			"()V"
		);
	}
	inline void InputMethodService::onComputeInsets(android::inputmethodservice::InputMethodService_Insets arg0) const
	{
		callMethod<void>(
			"onComputeInsets",
			"(Landroid/inputmethodservice/InputMethodService$Insets;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::onConfigureWindow(android::view::Window arg0, jboolean arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onConfigureWindow",
			"(Landroid/view/Window;ZZ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void InputMethodService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline android::view::View InputMethodService::onCreateCandidatesView() const
	{
		return callObjectMethod(
			"onCreateCandidatesView",
			"()Landroid/view/View;"
		);
	}
	inline android::view::View InputMethodService::onCreateExtractTextView() const
	{
		return callObjectMethod(
			"onCreateExtractTextView",
			"()Landroid/view/View;"
		);
	}
	inline android::view::inputmethod::InlineSuggestionsRequest InputMethodService::onCreateInlineSuggestionsRequest(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onCreateInlineSuggestionsRequest",
			"(Landroid/os/Bundle;)Landroid/view/inputmethod/InlineSuggestionsRequest;",
			arg0.object()
		);
	}
	inline android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl InputMethodService::onCreateInputMethodInterface() const
	{
		return callObjectMethod(
			"onCreateInputMethodInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl;"
		);
	}
	inline android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl InputMethodService::onCreateInputMethodSessionInterface() const
	{
		return callObjectMethod(
			"onCreateInputMethodSessionInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl;"
		);
	}
	inline android::view::View InputMethodService::onCreateInputView() const
	{
		return callObjectMethod(
			"onCreateInputView",
			"()Landroid/view/View;"
		);
	}
	inline void InputMethodService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void InputMethodService::onDisplayCompletions(JArray arg0) const
	{
		callMethod<void>(
			"onDisplayCompletions",
			"([Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object<jarray>()
		);
	}
	inline jboolean InputMethodService::onEvaluateFullscreenMode() const
	{
		return callMethod<jboolean>(
			"onEvaluateFullscreenMode",
			"()Z"
		);
	}
	inline jboolean InputMethodService::onEvaluateInputViewShown() const
	{
		return callMethod<jboolean>(
			"onEvaluateInputViewShown",
			"()Z"
		);
	}
	inline jboolean InputMethodService::onExtractTextContextMenuItem(jint arg0) const
	{
		return callMethod<jboolean>(
			"onExtractTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	inline void InputMethodService::onExtractedCursorMovement(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onExtractedCursorMovement",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void InputMethodService::onExtractedSelectionChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onExtractedSelectionChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void InputMethodService::onExtractedTextClicked() const
	{
		callMethod<void>(
			"onExtractedTextClicked",
			"()V"
		);
	}
	inline void InputMethodService::onExtractingInputChanged(android::view::inputmethod::EditorInfo arg0) const
	{
		callMethod<void>(
			"onExtractingInputChanged",
			"(Landroid/view/inputmethod/EditorInfo;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::onFinishCandidatesView(jboolean arg0) const
	{
		callMethod<void>(
			"onFinishCandidatesView",
			"(Z)V",
			arg0
		);
	}
	inline void InputMethodService::onFinishInput() const
	{
		callMethod<void>(
			"onFinishInput",
			"()V"
		);
	}
	inline void InputMethodService::onFinishInputView(jboolean arg0) const
	{
		callMethod<void>(
			"onFinishInputView",
			"(Z)V",
			arg0
		);
	}
	inline jboolean InputMethodService::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void InputMethodService::onInitializeInterface() const
	{
		callMethod<void>(
			"onInitializeInterface",
			"()V"
		);
	}
	inline jboolean InputMethodService::onInlineSuggestionsResponse(android::view::inputmethod::InlineSuggestionsResponse arg0) const
	{
		return callMethod<jboolean>(
			"onInlineSuggestionsResponse",
			"(Landroid/view/inputmethod/InlineSuggestionsResponse;)Z",
			arg0.object()
		);
	}
	inline jboolean InputMethodService::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean InputMethodService::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean InputMethodService::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean InputMethodService::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean InputMethodService::onShowInputRequested(jint arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"onShowInputRequested",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	inline void InputMethodService::onStartCandidatesView(android::view::inputmethod::EditorInfo arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onStartCandidatesView",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void InputMethodService::onStartInput(android::view::inputmethod::EditorInfo arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onStartInput",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void InputMethodService::onStartInputView(android::view::inputmethod::EditorInfo arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onStartInputView",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean InputMethodService::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void InputMethodService::onUnbindInput() const
	{
		callMethod<void>(
			"onUnbindInput",
			"()V"
		);
	}
	inline void InputMethodService::onUpdateCursor(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"onUpdateCursor",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::onUpdateCursorAnchorInfo(android::view::inputmethod::CursorAnchorInfo arg0) const
	{
		callMethod<void>(
			"onUpdateCursorAnchorInfo",
			"(Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::onUpdateExtractedText(jint arg0, android::view::inputmethod::ExtractedText arg1) const
	{
		callMethod<void>(
			"onUpdateExtractedText",
			"(ILandroid/view/inputmethod/ExtractedText;)V",
			arg0,
			arg1.object()
		);
	}
	inline void InputMethodService::onUpdateExtractingViews(android::view::inputmethod::EditorInfo arg0) const
	{
		callMethod<void>(
			"onUpdateExtractingViews",
			"(Landroid/view/inputmethod/EditorInfo;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::onUpdateExtractingVisibility(android::view::inputmethod::EditorInfo arg0) const
	{
		callMethod<void>(
			"onUpdateExtractingVisibility",
			"(Landroid/view/inputmethod/EditorInfo;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::onUpdateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	inline void InputMethodService::onViewClicked(jboolean arg0) const
	{
		callMethod<void>(
			"onViewClicked",
			"(Z)V",
			arg0
		);
	}
	inline void InputMethodService::onWindowHidden() const
	{
		callMethod<void>(
			"onWindowHidden",
			"()V"
		);
	}
	inline void InputMethodService::onWindowShown() const
	{
		callMethod<void>(
			"onWindowShown",
			"()V"
		);
	}
	inline void InputMethodService::requestHideSelf(jint arg0) const
	{
		callMethod<void>(
			"requestHideSelf",
			"(I)V",
			arg0
		);
	}
	inline void InputMethodService::requestShowSelf(jint arg0) const
	{
		callMethod<void>(
			"requestShowSelf",
			"(I)V",
			arg0
		);
	}
	inline jboolean InputMethodService::sendDefaultEditorAction(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"sendDefaultEditorAction",
			"(Z)Z",
			arg0
		);
	}
	inline void InputMethodService::sendDownUpKeyEvents(jint arg0) const
	{
		callMethod<void>(
			"sendDownUpKeyEvents",
			"(I)V",
			arg0
		);
	}
	inline void InputMethodService::sendKeyChar(jchar arg0) const
	{
		callMethod<void>(
			"sendKeyChar",
			"(C)V",
			arg0
		);
	}
	inline void InputMethodService::setBackDisposition(jint arg0) const
	{
		callMethod<void>(
			"setBackDisposition",
			"(I)V",
			arg0
		);
	}
	inline void InputMethodService::setCandidatesView(android::view::View arg0) const
	{
		callMethod<void>(
			"setCandidatesView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::setCandidatesViewShown(jboolean arg0) const
	{
		callMethod<void>(
			"setCandidatesViewShown",
			"(Z)V",
			arg0
		);
	}
	inline void InputMethodService::setExtractView(android::view::View arg0) const
	{
		callMethod<void>(
			"setExtractView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::setExtractViewShown(jboolean arg0) const
	{
		callMethod<void>(
			"setExtractViewShown",
			"(Z)V",
			arg0
		);
	}
	inline void InputMethodService::setInputView(android::view::View arg0) const
	{
		callMethod<void>(
			"setInputView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void InputMethodService::setTheme(jint arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	inline jboolean InputMethodService::shouldOfferSwitchingToNextInputMethod() const
	{
		return callMethod<jboolean>(
			"shouldOfferSwitchingToNextInputMethod",
			"()Z"
		);
	}
	inline void InputMethodService::showStatusIcon(jint arg0) const
	{
		callMethod<void>(
			"showStatusIcon",
			"(I)V",
			arg0
		);
	}
	inline void InputMethodService::showWindow(jboolean arg0) const
	{
		callMethod<void>(
			"showWindow",
			"(Z)V",
			arg0
		);
	}
	inline void InputMethodService::switchInputMethod(JString arg0) const
	{
		callMethod<void>(
			"switchInputMethod",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void InputMethodService::switchInputMethod(JString arg0, android::view::inputmethod::InputMethodSubtype arg1) const
	{
		callMethod<void>(
			"switchInputMethod",
			"(Ljava/lang/String;Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean InputMethodService::switchToNextInputMethod(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"switchToNextInputMethod",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean InputMethodService::switchToPreviousInputMethod() const
	{
		return callMethod<jboolean>(
			"switchToPreviousInputMethod",
			"()Z"
		);
	}
	inline void InputMethodService::updateFullscreenMode() const
	{
		callMethod<void>(
			"updateFullscreenMode",
			"()V"
		);
	}
	inline void InputMethodService::updateInputViewShown() const
	{
		callMethod<void>(
			"updateInputViewShown",
			"()V"
		);
	}
} // namespace android::inputmethodservice

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"
#include "./AbstractInputMethodService.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::inputmethodservice;
#endif
