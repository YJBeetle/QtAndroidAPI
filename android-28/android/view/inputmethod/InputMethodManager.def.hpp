#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
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
class JString;

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
		InputMethodManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void dispatchKeyEventFromInputMethod(android::view::View arg0, android::view::KeyEvent arg1) const;
		void displayCompletions(android::view::View arg0, JArray arg1) const;
		android::view::inputmethod::InputMethodSubtype getCurrentInputMethodSubtype() const;
		JObject getEnabledInputMethodList() const;
		JObject getEnabledInputMethodSubtypeList(android::view::inputmethod::InputMethodInfo arg0, jboolean arg1) const;
		JObject getInputMethodList() const;
		android::view::inputmethod::InputMethodSubtype getLastInputMethodSubtype() const;
		JObject getShortcutInputMethodsAndSubtypes() const;
		void hideSoftInputFromInputMethod(JObject arg0, jint arg1) const;
		jboolean hideSoftInputFromWindow(JObject arg0, jint arg1) const;
		jboolean hideSoftInputFromWindow(JObject arg0, jint arg1, android::os::ResultReceiver arg2) const;
		void hideStatusIcon(JObject arg0) const;
		jboolean isAcceptingText() const;
		jboolean isActive() const;
		jboolean isActive(android::view::View arg0) const;
		jboolean isFullscreenMode() const;
		jboolean isWatchingCursor(android::view::View arg0) const;
		void restartInput(android::view::View arg0) const;
		void sendAppPrivateCommand(android::view::View arg0, JString arg1, android::os::Bundle arg2) const;
		void setAdditionalInputMethodSubtypes(JString arg0, JArray arg1) const;
		jboolean setCurrentInputMethodSubtype(android::view::inputmethod::InputMethodSubtype arg0) const;
		void setInputMethod(JObject arg0, JString arg1) const;
		void setInputMethodAndSubtype(JObject arg0, JString arg1, android::view::inputmethod::InputMethodSubtype arg2) const;
		jboolean shouldOfferSwitchingToNextInputMethod(JObject arg0) const;
		void showInputMethodAndSubtypeEnabler(JString arg0) const;
		void showInputMethodPicker() const;
		jboolean showSoftInput(android::view::View arg0, jint arg1) const;
		jboolean showSoftInput(android::view::View arg0, jint arg1, android::os::ResultReceiver arg2) const;
		void showSoftInputFromInputMethod(JObject arg0, jint arg1) const;
		void showStatusIcon(JObject arg0, JString arg1, jint arg2) const;
		jboolean switchToLastInputMethod(JObject arg0) const;
		jboolean switchToNextInputMethod(JObject arg0, jboolean arg1) const;
		void toggleSoftInput(jint arg0, jint arg1) const;
		void toggleSoftInputFromWindow(JObject arg0, jint arg1, jint arg2) const;
		void updateCursor(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void updateCursorAnchorInfo(android::view::View arg0, android::view::inputmethod::CursorAnchorInfo arg1) const;
		void updateExtractedText(android::view::View arg0, jint arg1, android::view::inputmethod::ExtractedText arg2) const;
		void updateSelection(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void viewClicked(android::view::View arg0) const;
	};
} // namespace android::view::inputmethod

