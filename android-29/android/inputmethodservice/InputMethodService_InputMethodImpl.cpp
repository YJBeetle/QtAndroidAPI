#include "./InputMethodService.hpp"
#include "../os/ResultReceiver.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/inputmethod/InputBinding.hpp"
#include "../view/inputmethod/InputMethodSubtype.hpp"
#include "./InputMethodService_InputMethodImpl.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	InputMethodService_InputMethodImpl::InputMethodService_InputMethodImpl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputMethodService_InputMethodImpl::InputMethodService_InputMethodImpl(android::inputmethodservice::InputMethodService &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.InputMethodService$InputMethodImpl",
			"(Landroid/inputmethodservice/InputMethodService;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void InputMethodService_InputMethodImpl::attachToken(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"attachToken",
			"(Landroid/os/IBinder;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::bindInput(android::view::inputmethod::InputBinding arg0)
	{
		__thiz.callMethod<void>(
			"bindInput",
			"(Landroid/view/inputmethod/InputBinding;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::changeInputMethodSubtype(android::view::inputmethod::InputMethodSubtype arg0)
	{
		__thiz.callMethod<void>(
			"changeInputMethodSubtype",
			"(Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::hideSoftInput(jint arg0, android::os::ResultReceiver arg1)
	{
		__thiz.callMethod<void>(
			"hideSoftInput",
			"(ILandroid/os/ResultReceiver;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::restartInput(__JniBaseClass arg0, android::view::inputmethod::EditorInfo arg1)
	{
		__thiz.callMethod<void>(
			"restartInput",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::showSoftInput(jint arg0, android::os::ResultReceiver arg1)
	{
		__thiz.callMethod<void>(
			"showSoftInput",
			"(ILandroid/os/ResultReceiver;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::startInput(__JniBaseClass arg0, android::view::inputmethod::EditorInfo arg1)
	{
		__thiz.callMethod<void>(
			"startInput",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::unbindInput()
	{
		__thiz.callMethod<void>(
			"unbindInput",
			"()V"
		);
	}
} // namespace android::inputmethodservice

