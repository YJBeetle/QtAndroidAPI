#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER
#define ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view::inputmethod
{
	class InputMethodInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedText;
}
namespace __jni_impl::android::os
{
	class ResultReceiver;
}
namespace __jni_impl::android::view::inputmethod
{
	class CursorAnchorInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class InputMethodSubtype;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::view::inputmethod
{
	class InputMethodManager : public __JniBaseClass
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
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isActive();
		jboolean isActive(__jni_impl::android::view::View arg0);
		QAndroidJniObject getInputMethodList();
		QAndroidJniObject getEnabledInputMethodList();
		QAndroidJniObject getEnabledInputMethodSubtypeList(__jni_impl::android::view::inputmethod::InputMethodInfo arg0, jboolean arg1);
		void showStatusIcon(__jni_impl::__JniBaseClass arg0, jstring arg1, jint arg2);
		void hideStatusIcon(__jni_impl::__JniBaseClass arg0);
		jboolean isFullscreenMode();
		jboolean isAcceptingText();
		void displayCompletions(__jni_impl::android::view::View arg0, jarray arg1);
		void updateExtractedText(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::inputmethod::ExtractedText arg2);
		jboolean showSoftInput(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::os::ResultReceiver arg2);
		jboolean showSoftInput(__jni_impl::android::view::View arg0, jint arg1);
		jboolean hideSoftInputFromWindow(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::android::os::ResultReceiver arg2);
		jboolean hideSoftInputFromWindow(__jni_impl::__JniBaseClass arg0, jint arg1);
		void toggleSoftInputFromWindow(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		void toggleSoftInput(jint arg0, jint arg1);
		void restartInput(__jni_impl::android::view::View arg0);
		void updateSelection(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void viewClicked(__jni_impl::android::view::View arg0);
		jboolean isWatchingCursor(__jni_impl::android::view::View arg0);
		void updateCursor(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void updateCursorAnchorInfo(__jni_impl::android::view::View arg0, __jni_impl::android::view::inputmethod::CursorAnchorInfo arg1);
		void setInputMethod(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void setInputMethodAndSubtype(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::view::inputmethod::InputMethodSubtype arg2);
		void hideSoftInputFromInputMethod(__jni_impl::__JniBaseClass arg0, jint arg1);
		void showSoftInputFromInputMethod(__jni_impl::__JniBaseClass arg0, jint arg1);
		void dispatchKeyEventFromInputMethod(__jni_impl::android::view::View arg0, __jni_impl::android::view::KeyEvent arg1);
		void showInputMethodPicker();
		void showInputMethodAndSubtypeEnabler(jstring arg0);
		QAndroidJniObject getCurrentInputMethodSubtype();
		jboolean setCurrentInputMethodSubtype(__jni_impl::android::view::inputmethod::InputMethodSubtype arg0);
		QAndroidJniObject getShortcutInputMethodsAndSubtypes();
		jboolean switchToLastInputMethod(__jni_impl::__JniBaseClass arg0);
		jboolean switchToNextInputMethod(__jni_impl::__JniBaseClass arg0, jboolean arg1);
		jboolean shouldOfferSwitchingToNextInputMethod(__jni_impl::__JniBaseClass arg0);
		void setAdditionalInputMethodSubtypes(jstring arg0, jarray arg1);
		QAndroidJniObject getLastInputMethodSubtype();
		void sendAppPrivateCommand(__jni_impl::android::view::View arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../View.hpp"
#include "InputMethodInfo.hpp"
#include "ExtractedText.hpp"
#include "../../os/ResultReceiver.hpp"
#include "CursorAnchorInfo.hpp"
#include "InputMethodSubtype.hpp"
#include "../KeyEvent.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	jint InputMethodManager::HIDE_IMPLICIT_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"HIDE_IMPLICIT_ONLY");
	}
	jint InputMethodManager::HIDE_NOT_ALWAYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"HIDE_NOT_ALWAYS");
	}
	jint InputMethodManager::RESULT_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_HIDDEN");
	}
	jint InputMethodManager::RESULT_SHOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_SHOWN");
	}
	jint InputMethodManager::RESULT_UNCHANGED_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_UNCHANGED_HIDDEN");
	}
	jint InputMethodManager::RESULT_UNCHANGED_SHOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"RESULT_UNCHANGED_SHOWN");
	}
	jint InputMethodManager::SHOW_FORCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"SHOW_FORCED");
	}
	jint InputMethodManager::SHOW_IMPLICIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.InputMethodManager",
			"SHOW_IMPLICIT");
	}
	
	// Constructors
	void InputMethodManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputMethodManager",
			"(V)V");
	}
	
	// Methods
	jboolean InputMethodManager::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z");
	}
	jboolean InputMethodManager::isActive(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject InputMethodManager::getInputMethodList()
	{
		return __thiz.callObjectMethod(
			"getInputMethodList",
			"()Ljava/util/List;");
	}
	QAndroidJniObject InputMethodManager::getEnabledInputMethodList()
	{
		return __thiz.callObjectMethod(
			"getEnabledInputMethodList",
			"()Ljava/util/List;");
	}
	QAndroidJniObject InputMethodManager::getEnabledInputMethodSubtypeList(__jni_impl::android::view::inputmethod::InputMethodInfo arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getEnabledInputMethodSubtypeList",
			"(Landroid/view/inputmethod/InputMethodInfo;Z)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1);
	}
	void InputMethodManager::showStatusIcon(__jni_impl::__JniBaseClass arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"showStatusIcon",
			"(Landroid/os/IBinder;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void InputMethodManager::hideStatusIcon(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"hideStatusIcon",
			"(Landroid/os/IBinder;)V",
			arg0.__jniObject().object());
	}
	jboolean InputMethodManager::isFullscreenMode()
	{
		return __thiz.callMethod<jboolean>(
			"isFullscreenMode",
			"()Z");
	}
	jboolean InputMethodManager::isAcceptingText()
	{
		return __thiz.callMethod<jboolean>(
			"isAcceptingText",
			"()Z");
	}
	void InputMethodManager::displayCompletions(__jni_impl::android::view::View arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"displayCompletions",
			"(Landroid/view/View;[Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void InputMethodManager::updateExtractedText(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::inputmethod::ExtractedText arg2)
	{
		__thiz.callMethod<void>(
			"updateExtractedText",
			"(Landroid/view/View;ILandroid/view/inputmethod/ExtractedText;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	jboolean InputMethodManager::showSoftInput(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::os::ResultReceiver arg2)
	{
		return __thiz.callMethod<jboolean>(
			"showSoftInput",
			"(Landroid/view/View;ILandroid/os/ResultReceiver;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	jboolean InputMethodManager::showSoftInput(__jni_impl::android::view::View arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showSoftInput",
			"(Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean InputMethodManager::hideSoftInputFromWindow(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::android::os::ResultReceiver arg2)
	{
		return __thiz.callMethod<jboolean>(
			"hideSoftInputFromWindow",
			"(Landroid/os/IBinder;ILandroid/os/ResultReceiver;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	jboolean InputMethodManager::hideSoftInputFromWindow(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"hideSoftInputFromWindow",
			"(Landroid/os/IBinder;I)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	void InputMethodManager::toggleSoftInputFromWindow(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"toggleSoftInputFromWindow",
			"(Landroid/os/IBinder;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void InputMethodManager::toggleSoftInput(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"toggleSoftInput",
			"(II)V",
			arg0,
			arg1);
	}
	void InputMethodManager::restartInput(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"restartInput",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void InputMethodManager::updateSelection(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"updateSelection",
			"(Landroid/view/View;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void InputMethodManager::viewClicked(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"viewClicked",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	jboolean InputMethodManager::isWatchingCursor(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isWatchingCursor",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object());
	}
	void InputMethodManager::updateCursor(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"updateCursor",
			"(Landroid/view/View;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void InputMethodManager::updateCursorAnchorInfo(__jni_impl::android::view::View arg0, __jni_impl::android::view::inputmethod::CursorAnchorInfo arg1)
	{
		__thiz.callMethod<void>(
			"updateCursorAnchorInfo",
			"(Landroid/view/View;Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void InputMethodManager::setInputMethod(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setInputMethod",
			"(Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void InputMethodManager::setInputMethodAndSubtype(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::view::inputmethod::InputMethodSubtype arg2)
	{
		__thiz.callMethod<void>(
			"setInputMethodAndSubtype",
			"(Landroid/os/IBinder;Ljava/lang/String;Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void InputMethodManager::hideSoftInputFromInputMethod(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"hideSoftInputFromInputMethod",
			"(Landroid/os/IBinder;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void InputMethodManager::showSoftInputFromInputMethod(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"showSoftInputFromInputMethod",
			"(Landroid/os/IBinder;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void InputMethodManager::dispatchKeyEventFromInputMethod(__jni_impl::android::view::View arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		__thiz.callMethod<void>(
			"dispatchKeyEventFromInputMethod",
			"(Landroid/view/View;Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void InputMethodManager::showInputMethodPicker()
	{
		__thiz.callMethod<void>(
			"showInputMethodPicker",
			"()V");
	}
	void InputMethodManager::showInputMethodAndSubtypeEnabler(jstring arg0)
	{
		__thiz.callMethod<void>(
			"showInputMethodAndSubtypeEnabler",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject InputMethodManager::getCurrentInputMethodSubtype()
	{
		return __thiz.callObjectMethod(
			"getCurrentInputMethodSubtype",
			"()Landroid/view/inputmethod/InputMethodSubtype;");
	}
	jboolean InputMethodManager::setCurrentInputMethodSubtype(__jni_impl::android::view::inputmethod::InputMethodSubtype arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setCurrentInputMethodSubtype",
			"(Landroid/view/inputmethod/InputMethodSubtype;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject InputMethodManager::getShortcutInputMethodsAndSubtypes()
	{
		return __thiz.callObjectMethod(
			"getShortcutInputMethodsAndSubtypes",
			"()Ljava/util/Map;");
	}
	jboolean InputMethodManager::switchToLastInputMethod(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"switchToLastInputMethod",
			"(Landroid/os/IBinder;)Z",
			arg0.__jniObject().object());
	}
	jboolean InputMethodManager::switchToNextInputMethod(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"switchToNextInputMethod",
			"(Landroid/os/IBinder;Z)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean InputMethodManager::shouldOfferSwitchingToNextInputMethod(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"shouldOfferSwitchingToNextInputMethod",
			"(Landroid/os/IBinder;)Z",
			arg0.__jniObject().object());
	}
	void InputMethodManager::setAdditionalInputMethodSubtypes(jstring arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"setAdditionalInputMethodSubtypes",
			"(Ljava/lang/String;[Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject InputMethodManager::getLastInputMethodSubtype()
	{
		return __thiz.callObjectMethod(
			"getLastInputMethodSubtype",
			"()Landroid/view/inputmethod/InputMethodSubtype;");
	}
	void InputMethodManager::sendAppPrivateCommand(__jni_impl::android::view::View arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"sendAppPrivateCommand",
			"(Landroid/view/View;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class InputMethodManager : public __jni_impl::android::view::inputmethod::InputMethodManager
	{
	public:
		InputMethodManager(QAndroidJniObject obj) { __thiz = obj; }
		InputMethodManager()
		{
			__constructor();
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER

