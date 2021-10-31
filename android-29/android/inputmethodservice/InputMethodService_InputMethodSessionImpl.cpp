#include "../graphics/Rect.hpp"
#include "./InputMethodService.hpp"
#include "../os/Bundle.hpp"
#include "../view/inputmethod/CursorAnchorInfo.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "./InputMethodService_InputMethodSessionImpl.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	InputMethodService_InputMethodSessionImpl::InputMethodService_InputMethodSessionImpl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputMethodService_InputMethodSessionImpl::InputMethodService_InputMethodSessionImpl(android::inputmethodservice::InputMethodService arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.InputMethodService$InputMethodSessionImpl",
			"(Landroid/inputmethodservice/InputMethodService;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void InputMethodService_InputMethodSessionImpl::appPrivateCommand(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"appPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodSessionImpl::displayCompletions(jarray arg0)
	{
		__thiz.callMethod<void>(
			"displayCompletions",
			"([Landroid/view/inputmethod/CompletionInfo;)V",
			arg0
		);
	}
	void InputMethodService_InputMethodSessionImpl::finishInput()
	{
		__thiz.callMethod<void>(
			"finishInput",
			"()V"
		);
	}
	void InputMethodService_InputMethodSessionImpl::toggleSoftInput(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"toggleSoftInput",
			"(II)V",
			arg0,
			arg1
		);
	}
	void InputMethodService_InputMethodSessionImpl::updateCursor(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"updateCursor",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodSessionImpl::updateCursorAnchorInfo(android::view::inputmethod::CursorAnchorInfo arg0)
	{
		__thiz.callMethod<void>(
			"updateCursorAnchorInfo",
			"(Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodSessionImpl::updateExtractedText(jint arg0, android::view::inputmethod::ExtractedText arg1)
	{
		__thiz.callMethod<void>(
			"updateExtractedText",
			"(ILandroid/view/inputmethod/ExtractedText;)V",
			arg0,
			arg1.__jniObject().object()
		);
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
			arg5
		);
	}
	void InputMethodService_InputMethodSessionImpl::viewClicked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"viewClicked",
			"(Z)V",
			arg0
		);
	}
} // namespace android::inputmethodservice

