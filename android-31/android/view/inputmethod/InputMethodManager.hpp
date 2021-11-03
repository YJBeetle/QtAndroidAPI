#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class ResultReceiver;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
namespace android::view::inputmethod
{
	class CursorAnchorInfo;
}
namespace android::view::inputmethod
{
	class ExtractedText;
}
namespace android::view::inputmethod
{
	class InputMethodInfo;
}
namespace android::view::inputmethod
{
	class InputMethodSubtype;
}

namespace android::view::inputmethod
{
	class InputMethodManager : public JObject
	{
	public:
		// Fields
		static jint HIDE_IMPLICIT_ONLY();
		static jint HIDE_NOT_ALWAYS();
		static jint RESULT_HIDDEN();
		static jint RESULT_SHOWN();
		static jint RESULT_UNCHANGED_HIDDEN();
		static jint RESULT_UNCHANGED_SHOWN();
		static jint SHOW_FORCED();
		static jint SHOW_IMPLICIT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethodManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void dispatchKeyEventFromInputMethod(android::view::View arg0, android::view::KeyEvent arg1);
		void displayCompletions(android::view::View arg0, jarray arg1);
		android::view::inputmethod::InputMethodSubtype getCurrentInputMethodSubtype();
		JObject getEnabledInputMethodList();
		JObject getEnabledInputMethodSubtypeList(android::view::inputmethod::InputMethodInfo arg0, jboolean arg1);
		JObject getInputMethodList();
		android::view::inputmethod::InputMethodSubtype getLastInputMethodSubtype();
		JObject getShortcutInputMethodsAndSubtypes();
		void hideSoftInputFromInputMethod(JObject arg0, jint arg1);
		jboolean hideSoftInputFromWindow(JObject arg0, jint arg1);
		jboolean hideSoftInputFromWindow(JObject arg0, jint arg1, android::os::ResultReceiver arg2);
		void hideStatusIcon(JObject arg0);
		jboolean isAcceptingText();
		jboolean isActive();
		jboolean isActive(android::view::View arg0);
		jboolean isFullscreenMode();
		jboolean isInputMethodSuppressingSpellChecker();
		jboolean isWatchingCursor(android::view::View arg0);
		void restartInput(android::view::View arg0);
		void sendAppPrivateCommand(android::view::View arg0, jstring arg1, android::os::Bundle arg2);
		void setAdditionalInputMethodSubtypes(jstring arg0, jarray arg1);
		jboolean setCurrentInputMethodSubtype(android::view::inputmethod::InputMethodSubtype arg0);
		void setInputMethod(JObject arg0, jstring arg1);
		void setInputMethodAndSubtype(JObject arg0, jstring arg1, android::view::inputmethod::InputMethodSubtype arg2);
		jboolean shouldOfferSwitchingToNextInputMethod(JObject arg0);
		void showInputMethodAndSubtypeEnabler(jstring arg0);
		void showInputMethodPicker();
		jboolean showSoftInput(android::view::View arg0, jint arg1);
		jboolean showSoftInput(android::view::View arg0, jint arg1, android::os::ResultReceiver arg2);
		void showSoftInputFromInputMethod(JObject arg0, jint arg1);
		void showStatusIcon(JObject arg0, jstring arg1, jint arg2);
		jboolean switchToLastInputMethod(JObject arg0);
		jboolean switchToNextInputMethod(JObject arg0, jboolean arg1);
		void toggleSoftInput(jint arg0, jint arg1);
		void toggleSoftInputFromWindow(JObject arg0, jint arg1, jint arg2);
		void updateCursor(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void updateCursorAnchorInfo(android::view::View arg0, android::view::inputmethod::CursorAnchorInfo arg1);
		void updateExtractedText(android::view::View arg0, jint arg1, android::view::inputmethod::ExtractedText arg2);
		void updateSelection(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void viewClicked(android::view::View arg0);
	};
} // namespace android::view::inputmethod

