#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../app/Dialog.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/Rect.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"
#include "./InputMethodService_Insets.hpp"
#include "../os/Bundle.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/Window.hpp"
#include "../view/inputmethod/CursorAnchorInfo.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "../view/inputmethod/InlineSuggestionsRequest.hpp"
#include "../view/inputmethod/InlineSuggestionsResponse.hpp"
#include "../view/inputmethod/InputBinding.hpp"
#include "../view/inputmethod/InputMethodSubtype.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./InputMethodService.hpp"

namespace android::inputmethodservice
{
	// Fields
	jint InputMethodService::BACK_DISPOSITION_ADJUST_NOTHING()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_ADJUST_NOTHING"
		);
	}
	jint InputMethodService::BACK_DISPOSITION_DEFAULT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_DEFAULT"
		);
	}
	jint InputMethodService::BACK_DISPOSITION_WILL_DISMISS()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_WILL_DISMISS"
		);
	}
	jint InputMethodService::BACK_DISPOSITION_WILL_NOT_DISMISS()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_WILL_NOT_DISMISS"
		);
	}
	
	// QJniObject forward
	InputMethodService::InputMethodService(QJniObject obj) : android::inputmethodservice::AbstractInputMethodService(obj) {}
	
	// Constructors
	InputMethodService::InputMethodService()
		: android::inputmethodservice::AbstractInputMethodService(
			"android.inputmethodservice.InputMethodService",
			"()V"
		) {}
	
	// Methods
	jboolean InputMethodService::enableHardwareAcceleration()
	{
		return callMethod<jboolean>(
			"enableHardwareAcceleration",
			"()Z"
		);
	}
	jint InputMethodService::getBackDisposition()
	{
		return callMethod<jint>(
			"getBackDisposition",
			"()I"
		);
	}
	jint InputMethodService::getCandidatesHiddenVisibility()
	{
		return callMethod<jint>(
			"getCandidatesHiddenVisibility",
			"()I"
		);
	}
	android::view::inputmethod::InputBinding InputMethodService::getCurrentInputBinding()
	{
		return callObjectMethod(
			"getCurrentInputBinding",
			"()Landroid/view/inputmethod/InputBinding;"
		);
	}
	JObject InputMethodService::getCurrentInputConnection()
	{
		return callObjectMethod(
			"getCurrentInputConnection",
			"()Landroid/view/inputmethod/InputConnection;"
		);
	}
	android::view::inputmethod::EditorInfo InputMethodService::getCurrentInputEditorInfo()
	{
		return callObjectMethod(
			"getCurrentInputEditorInfo",
			"()Landroid/view/inputmethod/EditorInfo;"
		);
	}
	jboolean InputMethodService::getCurrentInputStarted()
	{
		return callMethod<jboolean>(
			"getCurrentInputStarted",
			"()Z"
		);
	}
	jint InputMethodService::getInputMethodWindowRecommendedHeight()
	{
		return callMethod<jint>(
			"getInputMethodWindowRecommendedHeight",
			"()I"
		);
	}
	android::view::LayoutInflater InputMethodService::getLayoutInflater()
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	jint InputMethodService::getMaxWidth()
	{
		return callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	JString InputMethodService::getTextForImeAction(jint arg0)
	{
		return callObjectMethod(
			"getTextForImeAction",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	android::app::Dialog InputMethodService::getWindow()
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/app/Dialog;"
		);
	}
	void InputMethodService::hideStatusIcon()
	{
		callMethod<void>(
			"hideStatusIcon",
			"()V"
		);
	}
	void InputMethodService::hideWindow()
	{
		callMethod<void>(
			"hideWindow",
			"()V"
		);
	}
	jboolean InputMethodService::isExtractViewShown()
	{
		return callMethod<jboolean>(
			"isExtractViewShown",
			"()Z"
		);
	}
	jboolean InputMethodService::isFullscreenMode()
	{
		return callMethod<jboolean>(
			"isFullscreenMode",
			"()Z"
		);
	}
	jboolean InputMethodService::isInputViewShown()
	{
		return callMethod<jboolean>(
			"isInputViewShown",
			"()Z"
		);
	}
	jboolean InputMethodService::isShowInputRequested()
	{
		return callMethod<jboolean>(
			"isShowInputRequested",
			"()Z"
		);
	}
	void InputMethodService::onAppPrivateCommand(JString arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void InputMethodService::onBindInput()
	{
		callMethod<void>(
			"onBindInput",
			"()V"
		);
	}
	void InputMethodService::onComputeInsets(android::inputmethodservice::InputMethodService_Insets arg0)
	{
		callMethod<void>(
			"onComputeInsets",
			"(Landroid/inputmethodservice/InputMethodService$Insets;)V",
			arg0.object()
		);
	}
	void InputMethodService::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void InputMethodService::onConfigureWindow(android::view::Window arg0, jboolean arg1, jboolean arg2)
	{
		callMethod<void>(
			"onConfigureWindow",
			"(Landroid/view/Window;ZZ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void InputMethodService::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	android::view::View InputMethodService::onCreateCandidatesView()
	{
		return callObjectMethod(
			"onCreateCandidatesView",
			"()Landroid/view/View;"
		);
	}
	android::view::View InputMethodService::onCreateExtractTextView()
	{
		return callObjectMethod(
			"onCreateExtractTextView",
			"()Landroid/view/View;"
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest InputMethodService::onCreateInlineSuggestionsRequest(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"onCreateInlineSuggestionsRequest",
			"(Landroid/os/Bundle;)Landroid/view/inputmethod/InlineSuggestionsRequest;",
			arg0.object()
		);
	}
	android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl InputMethodService::onCreateInputMethodInterface()
	{
		return callObjectMethod(
			"onCreateInputMethodInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl;"
		);
	}
	android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl InputMethodService::onCreateInputMethodSessionInterface()
	{
		return callObjectMethod(
			"onCreateInputMethodSessionInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl;"
		);
	}
	android::view::View InputMethodService::onCreateInputView()
	{
		return callObjectMethod(
			"onCreateInputView",
			"()Landroid/view/View;"
		);
	}
	void InputMethodService::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void InputMethodService::onDisplayCompletions(JArray arg0)
	{
		callMethod<void>(
			"onDisplayCompletions",
			"([Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object<jarray>()
		);
	}
	jboolean InputMethodService::onEvaluateFullscreenMode()
	{
		return callMethod<jboolean>(
			"onEvaluateFullscreenMode",
			"()Z"
		);
	}
	jboolean InputMethodService::onEvaluateInputViewShown()
	{
		return callMethod<jboolean>(
			"onEvaluateInputViewShown",
			"()Z"
		);
	}
	jboolean InputMethodService::onExtractTextContextMenuItem(jint arg0)
	{
		return callMethod<jboolean>(
			"onExtractTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	void InputMethodService::onExtractedCursorMovement(jint arg0, jint arg1)
	{
		callMethod<void>(
			"onExtractedCursorMovement",
			"(II)V",
			arg0,
			arg1
		);
	}
	void InputMethodService::onExtractedSelectionChanged(jint arg0, jint arg1)
	{
		callMethod<void>(
			"onExtractedSelectionChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void InputMethodService::onExtractedTextClicked()
	{
		callMethod<void>(
			"onExtractedTextClicked",
			"()V"
		);
	}
	void InputMethodService::onExtractingInputChanged(android::view::inputmethod::EditorInfo arg0)
	{
		callMethod<void>(
			"onExtractingInputChanged",
			"(Landroid/view/inputmethod/EditorInfo;)V",
			arg0.object()
		);
	}
	void InputMethodService::onFinishCandidatesView(jboolean arg0)
	{
		callMethod<void>(
			"onFinishCandidatesView",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::onFinishInput()
	{
		callMethod<void>(
			"onFinishInput",
			"()V"
		);
	}
	void InputMethodService::onFinishInputView(jboolean arg0)
	{
		callMethod<void>(
			"onFinishInputView",
			"(Z)V",
			arg0
		);
	}
	jboolean InputMethodService::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void InputMethodService::onInitializeInterface()
	{
		callMethod<void>(
			"onInitializeInterface",
			"()V"
		);
	}
	jboolean InputMethodService::onInlineSuggestionsResponse(android::view::inputmethod::InlineSuggestionsResponse arg0)
	{
		return callMethod<jboolean>(
			"onInlineSuggestionsResponse",
			"(Landroid/view/inputmethod/InlineSuggestionsResponse;)Z",
			arg0.object()
		);
	}
	jboolean InputMethodService::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean InputMethodService::onKeyLongPress(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean InputMethodService::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean InputMethodService::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean InputMethodService::onShowInputRequested(jint arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"onShowInputRequested",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	void InputMethodService::onStartCandidatesView(android::view::inputmethod::EditorInfo arg0, jboolean arg1)
	{
		callMethod<void>(
			"onStartCandidatesView",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
	void InputMethodService::onStartInput(android::view::inputmethod::EditorInfo arg0, jboolean arg1)
	{
		callMethod<void>(
			"onStartInput",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
	void InputMethodService::onStartInputView(android::view::inputmethod::EditorInfo arg0, jboolean arg1)
	{
		callMethod<void>(
			"onStartInputView",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
	jboolean InputMethodService::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void InputMethodService::onUnbindInput()
	{
		callMethod<void>(
			"onUnbindInput",
			"()V"
		);
	}
	void InputMethodService::onUpdateCursor(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"onUpdateCursor",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void InputMethodService::onUpdateCursorAnchorInfo(android::view::inputmethod::CursorAnchorInfo arg0)
	{
		callMethod<void>(
			"onUpdateCursorAnchorInfo",
			"(Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.object()
		);
	}
	void InputMethodService::onUpdateExtractedText(jint arg0, android::view::inputmethod::ExtractedText arg1)
	{
		callMethod<void>(
			"onUpdateExtractedText",
			"(ILandroid/view/inputmethod/ExtractedText;)V",
			arg0,
			arg1.object()
		);
	}
	void InputMethodService::onUpdateExtractingViews(android::view::inputmethod::EditorInfo arg0)
	{
		callMethod<void>(
			"onUpdateExtractingViews",
			"(Landroid/view/inputmethod/EditorInfo;)V",
			arg0.object()
		);
	}
	void InputMethodService::onUpdateExtractingVisibility(android::view::inputmethod::EditorInfo arg0)
	{
		callMethod<void>(
			"onUpdateExtractingVisibility",
			"(Landroid/view/inputmethod/EditorInfo;)V",
			arg0.object()
		);
	}
	void InputMethodService::onUpdateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	void InputMethodService::onViewClicked(jboolean arg0)
	{
		callMethod<void>(
			"onViewClicked",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::onWindowHidden()
	{
		callMethod<void>(
			"onWindowHidden",
			"()V"
		);
	}
	void InputMethodService::onWindowShown()
	{
		callMethod<void>(
			"onWindowShown",
			"()V"
		);
	}
	void InputMethodService::requestHideSelf(jint arg0)
	{
		callMethod<void>(
			"requestHideSelf",
			"(I)V",
			arg0
		);
	}
	void InputMethodService::requestShowSelf(jint arg0)
	{
		callMethod<void>(
			"requestShowSelf",
			"(I)V",
			arg0
		);
	}
	jboolean InputMethodService::sendDefaultEditorAction(jboolean arg0)
	{
		return callMethod<jboolean>(
			"sendDefaultEditorAction",
			"(Z)Z",
			arg0
		);
	}
	void InputMethodService::sendDownUpKeyEvents(jint arg0)
	{
		callMethod<void>(
			"sendDownUpKeyEvents",
			"(I)V",
			arg0
		);
	}
	void InputMethodService::sendKeyChar(jchar arg0)
	{
		callMethod<void>(
			"sendKeyChar",
			"(C)V",
			arg0
		);
	}
	void InputMethodService::setBackDisposition(jint arg0)
	{
		callMethod<void>(
			"setBackDisposition",
			"(I)V",
			arg0
		);
	}
	void InputMethodService::setCandidatesView(android::view::View arg0)
	{
		callMethod<void>(
			"setCandidatesView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void InputMethodService::setCandidatesViewShown(jboolean arg0)
	{
		callMethod<void>(
			"setCandidatesViewShown",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::setExtractView(android::view::View arg0)
	{
		callMethod<void>(
			"setExtractView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void InputMethodService::setExtractViewShown(jboolean arg0)
	{
		callMethod<void>(
			"setExtractViewShown",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::setInputView(android::view::View arg0)
	{
		callMethod<void>(
			"setInputView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void InputMethodService::setTheme(jint arg0)
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	jboolean InputMethodService::shouldOfferSwitchingToNextInputMethod()
	{
		return callMethod<jboolean>(
			"shouldOfferSwitchingToNextInputMethod",
			"()Z"
		);
	}
	void InputMethodService::showStatusIcon(jint arg0)
	{
		callMethod<void>(
			"showStatusIcon",
			"(I)V",
			arg0
		);
	}
	void InputMethodService::showWindow(jboolean arg0)
	{
		callMethod<void>(
			"showWindow",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::switchInputMethod(JString arg0)
	{
		callMethod<void>(
			"switchInputMethod",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void InputMethodService::switchInputMethod(JString arg0, android::view::inputmethod::InputMethodSubtype arg1)
	{
		callMethod<void>(
			"switchInputMethod",
			"(Ljava/lang/String;Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean InputMethodService::switchToNextInputMethod(jboolean arg0)
	{
		return callMethod<jboolean>(
			"switchToNextInputMethod",
			"(Z)Z",
			arg0
		);
	}
	jboolean InputMethodService::switchToPreviousInputMethod()
	{
		return callMethod<jboolean>(
			"switchToPreviousInputMethod",
			"()Z"
		);
	}
	void InputMethodService::updateFullscreenMode()
	{
		callMethod<void>(
			"updateFullscreenMode",
			"()V"
		);
	}
	void InputMethodService::updateInputViewShown()
	{
		callMethod<void>(
			"updateInputViewShown",
			"()V"
		);
	}
} // namespace android::inputmethodservice

