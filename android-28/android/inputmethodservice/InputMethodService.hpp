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
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMethodService(const char *className, const char *sig, Ts...agv) : android::inputmethodservice::AbstractInputMethodService(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodService(QJniObject obj);
		
		// Constructors
		InputMethodService();
		
		// Methods
		jboolean enableHardwareAcceleration();
		jint getBackDisposition();
		jint getCandidatesHiddenVisibility();
		android::view::inputmethod::InputBinding getCurrentInputBinding();
		JObject getCurrentInputConnection();
		android::view::inputmethod::EditorInfo getCurrentInputEditorInfo();
		jboolean getCurrentInputStarted();
		jint getInputMethodWindowRecommendedHeight();
		android::view::LayoutInflater getLayoutInflater();
		jint getMaxWidth();
		JString getTextForImeAction(jint arg0);
		android::app::Dialog getWindow();
		void hideStatusIcon();
		void hideWindow();
		jboolean isExtractViewShown();
		jboolean isFullscreenMode();
		jboolean isInputViewShown();
		jboolean isShowInputRequested();
		void onAppPrivateCommand(JString arg0, android::os::Bundle arg1);
		void onBindInput();
		void onComputeInsets(android::inputmethodservice::InputMethodService_Insets arg0);
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onConfigureWindow(android::view::Window arg0, jboolean arg1, jboolean arg2);
		void onCreate();
		android::view::View onCreateCandidatesView();
		android::view::View onCreateExtractTextView();
		android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl onCreateInputMethodInterface();
		android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl onCreateInputMethodSessionInterface();
		android::view::View onCreateInputView();
		void onDestroy();
		void onDisplayCompletions(JArray arg0);
		jboolean onEvaluateFullscreenMode();
		jboolean onEvaluateInputViewShown();
		jboolean onExtractTextContextMenuItem(jint arg0);
		void onExtractedCursorMovement(jint arg0, jint arg1);
		void onExtractedSelectionChanged(jint arg0, jint arg1);
		void onExtractedTextClicked();
		void onExtractingInputChanged(android::view::inputmethod::EditorInfo arg0);
		void onFinishCandidatesView(jboolean arg0);
		void onFinishInput();
		void onFinishInputView(jboolean arg0);
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		void onInitializeInterface();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		jboolean onShowInputRequested(jint arg0, jboolean arg1);
		void onStartCandidatesView(android::view::inputmethod::EditorInfo arg0, jboolean arg1);
		void onStartInput(android::view::inputmethod::EditorInfo arg0, jboolean arg1);
		void onStartInputView(android::view::inputmethod::EditorInfo arg0, jboolean arg1);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		void onUnbindInput();
		void onUpdateCursor(android::graphics::Rect arg0);
		void onUpdateCursorAnchorInfo(android::view::inputmethod::CursorAnchorInfo arg0);
		void onUpdateExtractedText(jint arg0, android::view::inputmethod::ExtractedText arg1);
		void onUpdateExtractingViews(android::view::inputmethod::EditorInfo arg0);
		void onUpdateExtractingVisibility(android::view::inputmethod::EditorInfo arg0);
		void onUpdateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void onViewClicked(jboolean arg0);
		void onWindowHidden();
		void onWindowShown();
		void requestHideSelf(jint arg0);
		void requestShowSelf(jint arg0);
		jboolean sendDefaultEditorAction(jboolean arg0);
		void sendDownUpKeyEvents(jint arg0);
		void sendKeyChar(jchar arg0);
		void setBackDisposition(jint arg0);
		void setCandidatesView(android::view::View arg0);
		void setCandidatesViewShown(jboolean arg0);
		void setExtractView(android::view::View arg0);
		void setExtractViewShown(jboolean arg0);
		void setInputView(android::view::View arg0);
		void setTheme(jint arg0);
		jboolean shouldOfferSwitchingToNextInputMethod();
		void showStatusIcon(jint arg0);
		void showWindow(jboolean arg0);
		void switchInputMethod(JString arg0);
		void switchInputMethod(JString arg0, android::view::inputmethod::InputMethodSubtype arg1);
		jboolean switchToNextInputMethod(jboolean arg0);
		jboolean switchToPreviousInputMethod();
		void updateFullscreenMode();
		void updateInputViewShown();
	};
} // namespace android::inputmethodservice

