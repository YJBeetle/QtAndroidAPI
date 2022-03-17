#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/ResultReceiver.def.hpp"
#include "../KeyEvent.def.hpp"
#include "../View.def.hpp"
#include "./CursorAnchorInfo.def.hpp"
#include "./ExtractedText.def.hpp"
#include "./InputMethodInfo.def.hpp"
#include "./InputMethodSubtype.def.hpp"
#include "../../../JString.hpp"
#include "./InputMethodManager.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline jint InputMethodManager::HIDE_IMPLICIT_ONLY()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"HIDE_IMPLICIT_ONLY"
		);
	}
	inline jint InputMethodManager::HIDE_NOT_ALWAYS()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"HIDE_NOT_ALWAYS"
		);
	}
	inline jint InputMethodManager::RESULT_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_HIDDEN"
		);
	}
	inline jint InputMethodManager::RESULT_SHOWN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_SHOWN"
		);
	}
	inline jint InputMethodManager::RESULT_UNCHANGED_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_UNCHANGED_HIDDEN"
		);
	}
	inline jint InputMethodManager::RESULT_UNCHANGED_SHOWN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_UNCHANGED_SHOWN"
		);
	}
	inline jint InputMethodManager::SHOW_FORCED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"SHOW_FORCED"
		);
	}
	inline jint InputMethodManager::SHOW_IMPLICIT()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"SHOW_IMPLICIT"
		);
	}
	
	// Constructors
	
	// Methods
	inline void InputMethodManager::dispatchKeyEventFromInputMethod(android::view::View arg0, android::view::KeyEvent arg1) const
	{
		callMethod<void>(
			"dispatchKeyEventFromInputMethod",
			"(Landroid/view/View;Landroid/view/KeyEvent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void InputMethodManager::displayCompletions(android::view::View arg0, JArray arg1) const
	{
		callMethod<void>(
			"displayCompletions",
			"(Landroid/view/View;[Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::view::inputmethod::InputMethodSubtype InputMethodManager::getCurrentInputMethodSubtype() const
	{
		return callObjectMethod(
			"getCurrentInputMethodSubtype",
			"()Landroid/view/inputmethod/InputMethodSubtype;"
		);
	}
	inline JObject InputMethodManager::getEnabledInputMethodList() const
	{
		return callObjectMethod(
			"getEnabledInputMethodList",
			"()Ljava/util/List;"
		);
	}
	inline JObject InputMethodManager::getEnabledInputMethodSubtypeList(android::view::inputmethod::InputMethodInfo arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"getEnabledInputMethodSubtypeList",
			"(Landroid/view/inputmethod/InputMethodInfo;Z)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	inline JObject InputMethodManager::getInputMethodList() const
	{
		return callObjectMethod(
			"getInputMethodList",
			"()Ljava/util/List;"
		);
	}
	inline android::view::inputmethod::InputMethodSubtype InputMethodManager::getLastInputMethodSubtype() const
	{
		return callObjectMethod(
			"getLastInputMethodSubtype",
			"()Landroid/view/inputmethod/InputMethodSubtype;"
		);
	}
	inline JObject InputMethodManager::getShortcutInputMethodsAndSubtypes() const
	{
		return callObjectMethod(
			"getShortcutInputMethodsAndSubtypes",
			"()Ljava/util/Map;"
		);
	}
	inline void InputMethodManager::hideSoftInputFromInputMethod(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"hideSoftInputFromInputMethod",
			"(Landroid/os/IBinder;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean InputMethodManager::hideSoftInputFromWindow(JObject arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"hideSoftInputFromWindow",
			"(Landroid/os/IBinder;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean InputMethodManager::hideSoftInputFromWindow(JObject arg0, jint arg1, android::os::ResultReceiver arg2) const
	{
		return callMethod<jboolean>(
			"hideSoftInputFromWindow",
			"(Landroid/os/IBinder;ILandroid/os/ResultReceiver;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void InputMethodManager::hideStatusIcon(JObject arg0) const
	{
		callMethod<void>(
			"hideStatusIcon",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	inline jboolean InputMethodManager::isAcceptingText() const
	{
		return callMethod<jboolean>(
			"isAcceptingText",
			"()Z"
		);
	}
	inline jboolean InputMethodManager::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	inline jboolean InputMethodManager::isActive(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"isActive",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline jboolean InputMethodManager::isFullscreenMode() const
	{
		return callMethod<jboolean>(
			"isFullscreenMode",
			"()Z"
		);
	}
	inline jboolean InputMethodManager::isInputMethodSuppressingSpellChecker() const
	{
		return callMethod<jboolean>(
			"isInputMethodSuppressingSpellChecker",
			"()Z"
		);
	}
	inline jboolean InputMethodManager::isWatchingCursor(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"isWatchingCursor",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline void InputMethodManager::restartInput(android::view::View arg0) const
	{
		callMethod<void>(
			"restartInput",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void InputMethodManager::sendAppPrivateCommand(android::view::View arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"sendAppPrivateCommand",
			"(Landroid/view/View;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void InputMethodManager::setAdditionalInputMethodSubtypes(JString arg0, JArray arg1) const
	{
		callMethod<void>(
			"setAdditionalInputMethodSubtypes",
			"(Ljava/lang/String;[Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline jboolean InputMethodManager::setCurrentInputMethodSubtype(android::view::inputmethod::InputMethodSubtype arg0) const
	{
		return callMethod<jboolean>(
			"setCurrentInputMethodSubtype",
			"(Landroid/view/inputmethod/InputMethodSubtype;)Z",
			arg0.object()
		);
	}
	inline void InputMethodManager::setInputMethod(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"setInputMethod",
			"(Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void InputMethodManager::setInputMethodAndSubtype(JObject arg0, JString arg1, android::view::inputmethod::InputMethodSubtype arg2) const
	{
		callMethod<void>(
			"setInputMethodAndSubtype",
			"(Landroid/os/IBinder;Ljava/lang/String;Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jboolean InputMethodManager::shouldOfferSwitchingToNextInputMethod(JObject arg0) const
	{
		return callMethod<jboolean>(
			"shouldOfferSwitchingToNextInputMethod",
			"(Landroid/os/IBinder;)Z",
			arg0.object()
		);
	}
	inline void InputMethodManager::showInputMethodAndSubtypeEnabler(JString arg0) const
	{
		callMethod<void>(
			"showInputMethodAndSubtypeEnabler",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void InputMethodManager::showInputMethodPicker() const
	{
		callMethod<void>(
			"showInputMethodPicker",
			"()V"
		);
	}
	inline jboolean InputMethodManager::showSoftInput(android::view::View arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"showSoftInput",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean InputMethodManager::showSoftInput(android::view::View arg0, jint arg1, android::os::ResultReceiver arg2) const
	{
		return callMethod<jboolean>(
			"showSoftInput",
			"(Landroid/view/View;ILandroid/os/ResultReceiver;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void InputMethodManager::showSoftInputFromInputMethod(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"showSoftInputFromInputMethod",
			"(Landroid/os/IBinder;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void InputMethodManager::showStatusIcon(JObject arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"showStatusIcon",
			"(Landroid/os/IBinder;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jboolean InputMethodManager::switchToLastInputMethod(JObject arg0) const
	{
		return callMethod<jboolean>(
			"switchToLastInputMethod",
			"(Landroid/os/IBinder;)Z",
			arg0.object()
		);
	}
	inline jboolean InputMethodManager::switchToNextInputMethod(JObject arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"switchToNextInputMethod",
			"(Landroid/os/IBinder;Z)Z",
			arg0.object(),
			arg1
		);
	}
	inline void InputMethodManager::toggleSoftInput(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"toggleSoftInput",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void InputMethodManager::toggleSoftInputFromWindow(JObject arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"toggleSoftInputFromWindow",
			"(Landroid/os/IBinder;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void InputMethodManager::updateCursor(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	inline void InputMethodManager::updateCursorAnchorInfo(android::view::View arg0, android::view::inputmethod::CursorAnchorInfo arg1) const
	{
		callMethod<void>(
			"updateCursorAnchorInfo",
			"(Landroid/view/View;Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void InputMethodManager::updateExtractedText(android::view::View arg0, jint arg1, android::view::inputmethod::ExtractedText arg2) const
	{
		callMethod<void>(
			"updateExtractedText",
			"(Landroid/view/View;ILandroid/view/inputmethod/ExtractedText;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void InputMethodManager::updateSelection(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	inline void InputMethodManager::viewClicked(android::view::View arg0) const
	{
		callMethod<void>(
			"viewClicked",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
