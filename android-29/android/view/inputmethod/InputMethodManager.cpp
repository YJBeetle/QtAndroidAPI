#include "../../os/Bundle.hpp"
#include "../../os/ResultReceiver.hpp"
#include "../KeyEvent.hpp"
#include "../View.hpp"
#include "./CursorAnchorInfo.hpp"
#include "./ExtractedText.hpp"
#include "./InputMethodInfo.hpp"
#include "./InputMethodSubtype.hpp"
#include "./InputMethodManager.hpp"

namespace android::view::inputmethod
{
	// Fields
	jint InputMethodManager::HIDE_IMPLICIT_ONLY()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"HIDE_IMPLICIT_ONLY"
		);
	}
	jint InputMethodManager::HIDE_NOT_ALWAYS()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"HIDE_NOT_ALWAYS"
		);
	}
	jint InputMethodManager::RESULT_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_HIDDEN"
		);
	}
	jint InputMethodManager::RESULT_SHOWN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_SHOWN"
		);
	}
	jint InputMethodManager::RESULT_UNCHANGED_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_UNCHANGED_HIDDEN"
		);
	}
	jint InputMethodManager::RESULT_UNCHANGED_SHOWN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_UNCHANGED_SHOWN"
		);
	}
	jint InputMethodManager::SHOW_FORCED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"SHOW_FORCED"
		);
	}
	jint InputMethodManager::SHOW_IMPLICIT()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"SHOW_IMPLICIT"
		);
	}
	
	// QJniObject forward
	InputMethodManager::InputMethodManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void InputMethodManager::dispatchKeyEventFromInputMethod(android::view::View arg0, android::view::KeyEvent arg1)
	{
		callMethod<void>(
			"dispatchKeyEventFromInputMethod",
			"(Landroid/view/View;Landroid/view/KeyEvent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void InputMethodManager::displayCompletions(android::view::View arg0, jarray arg1)
	{
		callMethod<void>(
			"displayCompletions",
			"(Landroid/view/View;[Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object(),
			arg1
		);
	}
	android::view::inputmethod::InputMethodSubtype InputMethodManager::getCurrentInputMethodSubtype()
	{
		return callObjectMethod(
			"getCurrentInputMethodSubtype",
			"()Landroid/view/inputmethod/InputMethodSubtype;"
		);
	}
	__JniBaseClass InputMethodManager::getEnabledInputMethodList()
	{
		return callObjectMethod(
			"getEnabledInputMethodList",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass InputMethodManager::getEnabledInputMethodSubtypeList(android::view::inputmethod::InputMethodInfo arg0, jboolean arg1)
	{
		return callObjectMethod(
			"getEnabledInputMethodSubtypeList",
			"(Landroid/view/inputmethod/InputMethodInfo;Z)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass InputMethodManager::getInputMethodList()
	{
		return callObjectMethod(
			"getInputMethodList",
			"()Ljava/util/List;"
		);
	}
	android::view::inputmethod::InputMethodSubtype InputMethodManager::getLastInputMethodSubtype()
	{
		return callObjectMethod(
			"getLastInputMethodSubtype",
			"()Landroid/view/inputmethod/InputMethodSubtype;"
		);
	}
	__JniBaseClass InputMethodManager::getShortcutInputMethodsAndSubtypes()
	{
		return callObjectMethod(
			"getShortcutInputMethodsAndSubtypes",
			"()Ljava/util/Map;"
		);
	}
	void InputMethodManager::hideSoftInputFromInputMethod(__JniBaseClass arg0, jint arg1)
	{
		callMethod<void>(
			"hideSoftInputFromInputMethod",
			"(Landroid/os/IBinder;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean InputMethodManager::hideSoftInputFromWindow(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"hideSoftInputFromWindow",
			"(Landroid/os/IBinder;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean InputMethodManager::hideSoftInputFromWindow(__JniBaseClass arg0, jint arg1, android::os::ResultReceiver arg2)
	{
		return callMethod<jboolean>(
			"hideSoftInputFromWindow",
			"(Landroid/os/IBinder;ILandroid/os/ResultReceiver;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void InputMethodManager::hideStatusIcon(__JniBaseClass arg0)
	{
		callMethod<void>(
			"hideStatusIcon",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	jboolean InputMethodManager::isAcceptingText()
	{
		return callMethod<jboolean>(
			"isAcceptingText",
			"()Z"
		);
	}
	jboolean InputMethodManager::isActive()
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jboolean InputMethodManager::isActive(android::view::View arg0)
	{
		return callMethod<jboolean>(
			"isActive",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean InputMethodManager::isFullscreenMode()
	{
		return callMethod<jboolean>(
			"isFullscreenMode",
			"()Z"
		);
	}
	jboolean InputMethodManager::isWatchingCursor(android::view::View arg0)
	{
		return callMethod<jboolean>(
			"isWatchingCursor",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	void InputMethodManager::restartInput(android::view::View arg0)
	{
		callMethod<void>(
			"restartInput",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void InputMethodManager::sendAppPrivateCommand(android::view::View arg0, jstring arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"sendAppPrivateCommand",
			"(Landroid/view/View;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void InputMethodManager::setAdditionalInputMethodSubtypes(jstring arg0, jarray arg1)
	{
		callMethod<void>(
			"setAdditionalInputMethodSubtypes",
			"(Ljava/lang/String;[Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0,
			arg1
		);
	}
	jboolean InputMethodManager::setCurrentInputMethodSubtype(android::view::inputmethod::InputMethodSubtype arg0)
	{
		return callMethod<jboolean>(
			"setCurrentInputMethodSubtype",
			"(Landroid/view/inputmethod/InputMethodSubtype;)Z",
			arg0.object()
		);
	}
	void InputMethodManager::setInputMethod(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"setInputMethod",
			"(Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void InputMethodManager::setInputMethodAndSubtype(__JniBaseClass arg0, jstring arg1, android::view::inputmethod::InputMethodSubtype arg2)
	{
		callMethod<void>(
			"setInputMethodAndSubtype",
			"(Landroid/os/IBinder;Ljava/lang/String;Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean InputMethodManager::shouldOfferSwitchingToNextInputMethod(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"shouldOfferSwitchingToNextInputMethod",
			"(Landroid/os/IBinder;)Z",
			arg0.object()
		);
	}
	void InputMethodManager::showInputMethodAndSubtypeEnabler(jstring arg0)
	{
		callMethod<void>(
			"showInputMethodAndSubtypeEnabler",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputMethodManager::showInputMethodPicker()
	{
		callMethod<void>(
			"showInputMethodPicker",
			"()V"
		);
	}
	jboolean InputMethodManager::showSoftInput(android::view::View arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"showSoftInput",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean InputMethodManager::showSoftInput(android::view::View arg0, jint arg1, android::os::ResultReceiver arg2)
	{
		return callMethod<jboolean>(
			"showSoftInput",
			"(Landroid/view/View;ILandroid/os/ResultReceiver;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void InputMethodManager::showSoftInputFromInputMethod(__JniBaseClass arg0, jint arg1)
	{
		callMethod<void>(
			"showSoftInputFromInputMethod",
			"(Landroid/os/IBinder;I)V",
			arg0.object(),
			arg1
		);
	}
	void InputMethodManager::showStatusIcon(__JniBaseClass arg0, jstring arg1, jint arg2)
	{
		callMethod<void>(
			"showStatusIcon",
			"(Landroid/os/IBinder;Ljava/lang/String;I)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean InputMethodManager::switchToLastInputMethod(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"switchToLastInputMethod",
			"(Landroid/os/IBinder;)Z",
			arg0.object()
		);
	}
	jboolean InputMethodManager::switchToNextInputMethod(__JniBaseClass arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"switchToNextInputMethod",
			"(Landroid/os/IBinder;Z)Z",
			arg0.object(),
			arg1
		);
	}
	void InputMethodManager::toggleSoftInput(jint arg0, jint arg1)
	{
		callMethod<void>(
			"toggleSoftInput",
			"(II)V",
			arg0,
			arg1
		);
	}
	void InputMethodManager::toggleSoftInputFromWindow(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"toggleSoftInputFromWindow",
			"(Landroid/os/IBinder;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void InputMethodManager::updateCursor(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callMethod<void>(
			"updateCursor",
			"(Landroid/view/View;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void InputMethodManager::updateCursorAnchorInfo(android::view::View arg0, android::view::inputmethod::CursorAnchorInfo arg1)
	{
		callMethod<void>(
			"updateCursorAnchorInfo",
			"(Landroid/view/View;Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void InputMethodManager::updateExtractedText(android::view::View arg0, jint arg1, android::view::inputmethod::ExtractedText arg2)
	{
		callMethod<void>(
			"updateExtractedText",
			"(Landroid/view/View;ILandroid/view/inputmethod/ExtractedText;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void InputMethodManager::updateSelection(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callMethod<void>(
			"updateSelection",
			"(Landroid/view/View;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void InputMethodManager::viewClicked(android::view::View arg0)
	{
		callMethod<void>(
			"viewClicked",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

