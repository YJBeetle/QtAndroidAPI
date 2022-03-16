#pragma once

#include "./AbstractInputMethodService.hpp"

class JArray;
class JArray;
namespace android::app
{
	class Dialog;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::graphics
{
	class Rect;
}
namespace android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodImpl;
}
namespace android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodSessionImpl;
}
namespace android::inputmethodservice
{
	class InputMethodService_Insets;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class LayoutInflater;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class Window;
}
namespace android::view::inputmethod
{
	class CursorAnchorInfo;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}
namespace android::view::inputmethod
{
	class ExtractedText;
}
namespace android::view::inputmethod
{
	class InlineSuggestionsRequest;
}
namespace android::view::inputmethod
{
	class InlineSuggestionsResponse;
}
namespace android::view::inputmethod
{
	class InputBinding;
}
namespace android::view::inputmethod
{
	class InputMethodSubtype;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}
class JString;
class JString;

namespace android::inputmethodservice
{
	class InputMethodService : public android::inputmethodservice::AbstractInputMethodService
	{
	public:
		// Fields
		static jint BACK_DISPOSITION_ADJUST_NOTHING();
		static jint BACK_DISPOSITION_DEFAULT();
		static jint BACK_DISPOSITION_WILL_DISMISS();
		static jint BACK_DISPOSITION_WILL_NOT_DISMISS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethodService(const char *className, const char *sig, Ts...agv) : android::inputmethodservice::AbstractInputMethodService(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodService(QAndroidJniObject obj) : android::inputmethodservice::AbstractInputMethodService(obj) {}
		
		// Constructors
		InputMethodService();
		
		// Methods
		jboolean enableHardwareAcceleration() const;
		jint getBackDisposition() const;
		jint getCandidatesHiddenVisibility() const;
		android::view::inputmethod::InputBinding getCurrentInputBinding() const;
		JObject getCurrentInputConnection() const;
		android::view::inputmethod::EditorInfo getCurrentInputEditorInfo() const;
		jboolean getCurrentInputStarted() const;
		jint getInputMethodWindowRecommendedHeight() const;
		android::view::LayoutInflater getLayoutInflater() const;
		jint getMaxWidth() const;
		JString getTextForImeAction(jint arg0) const;
		android::app::Dialog getWindow() const;
		void hideStatusIcon() const;
		void hideWindow() const;
		jboolean isExtractViewShown() const;
		jboolean isFullscreenMode() const;
		jboolean isInputViewShown() const;
		jboolean isShowInputRequested() const;
		void onAppPrivateCommand(JString arg0, android::os::Bundle arg1) const;
		void onBindInput() const;
		void onComputeInsets(android::inputmethodservice::InputMethodService_Insets arg0) const;
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		void onConfigureWindow(android::view::Window arg0, jboolean arg1, jboolean arg2) const;
		void onCreate() const;
		android::view::View onCreateCandidatesView() const;
		android::view::View onCreateExtractTextView() const;
		android::view::inputmethod::InlineSuggestionsRequest onCreateInlineSuggestionsRequest(android::os::Bundle arg0) const;
		android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl onCreateInputMethodInterface() const;
		android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl onCreateInputMethodSessionInterface() const;
		android::view::View onCreateInputView() const;
		void onDestroy() const;
		void onDisplayCompletions(JArray arg0) const;
		jboolean onEvaluateFullscreenMode() const;
		jboolean onEvaluateInputViewShown() const;
		jboolean onExtractTextContextMenuItem(jint arg0) const;
		void onExtractedCursorMovement(jint arg0, jint arg1) const;
		void onExtractedSelectionChanged(jint arg0, jint arg1) const;
		void onExtractedTextClicked() const;
		void onExtractingInputChanged(android::view::inputmethod::EditorInfo arg0) const;
		void onFinishCandidatesView(jboolean arg0) const;
		void onFinishInput() const;
		void onFinishInputView(jboolean arg0) const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		void onInitializeInterface() const;
		jboolean onInlineSuggestionsResponse(android::view::inputmethod::InlineSuggestionsResponse arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onShowInputRequested(jint arg0, jboolean arg1) const;
		void onStartCandidatesView(android::view::inputmethod::EditorInfo arg0, jboolean arg1) const;
		void onStartInput(android::view::inputmethod::EditorInfo arg0, jboolean arg1) const;
		void onStartInputView(android::view::inputmethod::EditorInfo arg0, jboolean arg1) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void onUnbindInput() const;
		void onUpdateCursor(android::graphics::Rect arg0) const;
		void onUpdateCursorAnchorInfo(android::view::inputmethod::CursorAnchorInfo arg0) const;
		void onUpdateExtractedText(jint arg0, android::view::inputmethod::ExtractedText arg1) const;
		void onUpdateExtractingViews(android::view::inputmethod::EditorInfo arg0) const;
		void onUpdateExtractingVisibility(android::view::inputmethod::EditorInfo arg0) const;
		void onUpdateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		void onViewClicked(jboolean arg0) const;
		void onWindowHidden() const;
		void onWindowShown() const;
		void requestHideSelf(jint arg0) const;
		void requestShowSelf(jint arg0) const;
		jboolean sendDefaultEditorAction(jboolean arg0) const;
		void sendDownUpKeyEvents(jint arg0) const;
		void sendKeyChar(jchar arg0) const;
		void setBackDisposition(jint arg0) const;
		void setCandidatesView(android::view::View arg0) const;
		void setCandidatesViewShown(jboolean arg0) const;
		void setExtractView(android::view::View arg0) const;
		void setExtractViewShown(jboolean arg0) const;
		void setInputView(android::view::View arg0) const;
		void setTheme(jint arg0) const;
		jboolean shouldOfferSwitchingToNextInputMethod() const;
		void showStatusIcon(jint arg0) const;
		void showWindow(jboolean arg0) const;
		void switchInputMethod(JString arg0) const;
		void switchInputMethod(JString arg0, android::view::inputmethod::InputMethodSubtype arg1) const;
		jboolean switchToNextInputMethod(jboolean arg0) const;
		jboolean switchToPreviousInputMethod() const;
		void updateFullscreenMode() const;
		void updateInputViewShown() const;
	};
} // namespace android::inputmethodservice

