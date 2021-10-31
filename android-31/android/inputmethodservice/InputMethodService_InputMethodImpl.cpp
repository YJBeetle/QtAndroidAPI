#include "./InputMethodService.hpp"
#include "../os/ResultReceiver.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/inputmethod/InputBinding.hpp"
#include "../view/inputmethod/InputMethodSubtype.hpp"
#include "./InputMethodService_InputMethodImpl.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// QJniObject forward
	InputMethodService_InputMethodImpl::InputMethodService_InputMethodImpl(QJniObject obj) : android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl(obj) {}
	
	// Constructors
	InputMethodService_InputMethodImpl::InputMethodService_InputMethodImpl(android::inputmethodservice::InputMethodService arg0)
		: android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl(
			"android.inputmethodservice.InputMethodService$InputMethodImpl",
			"(Landroid/inputmethodservice/InputMethodService;)V",
			arg0.object()
		) {}
	
	// Methods
	void InputMethodService_InputMethodImpl::attachToken(__JniBaseClass arg0)
	{
		callMethod<void>(
			"attachToken",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	void InputMethodService_InputMethodImpl::bindInput(android::view::inputmethod::InputBinding arg0)
	{
		callMethod<void>(
			"bindInput",
			"(Landroid/view/inputmethod/InputBinding;)V",
			arg0.object()
		);
	}
	void InputMethodService_InputMethodImpl::changeInputMethodSubtype(android::view::inputmethod::InputMethodSubtype arg0)
	{
		callMethod<void>(
			"changeInputMethodSubtype",
			"(Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0.object()
		);
	}
	void InputMethodService_InputMethodImpl::hideSoftInput(jint arg0, android::os::ResultReceiver arg1)
	{
		callMethod<void>(
			"hideSoftInput",
			"(ILandroid/os/ResultReceiver;)V",
			arg0,
			arg1.object()
		);
	}
	void InputMethodService_InputMethodImpl::restartInput(__JniBaseClass arg0, android::view::inputmethod::EditorInfo arg1)
	{
		callMethod<void>(
			"restartInput",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void InputMethodService_InputMethodImpl::showSoftInput(jint arg0, android::os::ResultReceiver arg1)
	{
		callMethod<void>(
			"showSoftInput",
			"(ILandroid/os/ResultReceiver;)V",
			arg0,
			arg1.object()
		);
	}
	void InputMethodService_InputMethodImpl::startInput(__JniBaseClass arg0, android::view::inputmethod::EditorInfo arg1)
	{
		callMethod<void>(
			"startInput",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void InputMethodService_InputMethodImpl::unbindInput()
	{
		callMethod<void>(
			"unbindInput",
			"()V"
		);
	}
} // namespace android::inputmethodservice

