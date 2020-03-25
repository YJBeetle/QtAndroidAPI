#pragma once

#ifndef ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL
#define ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL

#include "../../__JniBaseClass.hpp"
#include "AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"

namespace __jni_impl::android::inputmethodservice
{
	class InputMethodService;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedText;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view::inputmethod
{
	class CursorAnchorInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::inputmethodservice
{
	class InputMethodService_InputMethodSessionImpl : public __jni_impl::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::inputmethodservice::InputMethodService arg0);
		
		// Methods
		void displayCompletions(jarray arg0);
		void updateExtractedText(jint arg0, __jni_impl::android::view::inputmethod::ExtractedText arg1);
		void toggleSoftInput(jint arg0, jint arg1);
		void updateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void viewClicked(jboolean arg0);
		void updateCursor(__jni_impl::android::graphics::Rect arg0);
		void updateCursorAnchorInfo(__jni_impl::android::view::inputmethod::CursorAnchorInfo arg0);
		void finishInput();
		void appPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
	};
} // namespace __jni_impl::android::inputmethodservice

#include "InputMethodService.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "../graphics/Rect.hpp"
#include "../view/inputmethod/CursorAnchorInfo.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	
	// Constructors
	void InputMethodService_InputMethodSessionImpl::__constructor(__jni_impl::android::inputmethodservice::InputMethodService arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.InputMethodService$InputMethodSessionImpl",
			"(Landroid/inputmethodservice/InputMethodService;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void InputMethodService_InputMethodSessionImpl::displayCompletions(jarray arg0)
	{
		__thiz.callMethod<void>(
			"displayCompletions",
			"([Landroid/view/inputmethod/CompletionInfo;)V",
			arg0);
	}
	void InputMethodService_InputMethodSessionImpl::updateExtractedText(jint arg0, __jni_impl::android::view::inputmethod::ExtractedText arg1)
	{
		__thiz.callMethod<void>(
			"updateExtractedText",
			"(ILandroid/view/inputmethod/ExtractedText;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void InputMethodService_InputMethodSessionImpl::toggleSoftInput(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"toggleSoftInput",
			"(II)V",
			arg0,
			arg1);
	}
	void InputMethodService_InputMethodSessionImpl::updateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"updateSelection",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void InputMethodService_InputMethodSessionImpl::viewClicked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"viewClicked",
			"(Z)V",
			arg0);
	}
	void InputMethodService_InputMethodSessionImpl::updateCursor(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"updateCursor",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	void InputMethodService_InputMethodSessionImpl::updateCursorAnchorInfo(__jni_impl::android::view::inputmethod::CursorAnchorInfo arg0)
	{
		__thiz.callMethod<void>(
			"updateCursorAnchorInfo",
			"(Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.__jniObject().object());
	}
	void InputMethodService_InputMethodSessionImpl::finishInput()
	{
		__thiz.callMethod<void>(
			"finishInput",
			"()V");
	}
	void InputMethodService_InputMethodSessionImpl::appPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"appPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class InputMethodService_InputMethodSessionImpl : public __jni_impl::android::inputmethodservice::InputMethodService_InputMethodSessionImpl
	{
	public:
		InputMethodService_InputMethodSessionImpl(QAndroidJniObject obj) { __thiz = obj; }
		InputMethodService_InputMethodSessionImpl(__jni_impl::android::inputmethodservice::InputMethodService arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::inputmethodservice

#endif // ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL

