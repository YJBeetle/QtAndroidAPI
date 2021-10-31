#include "./AbstractInputMethodService.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	AbstractInputMethodService_AbstractInputMethodImpl::AbstractInputMethodService_AbstractInputMethodImpl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractInputMethodService_AbstractInputMethodImpl::AbstractInputMethodService_AbstractInputMethodImpl(android::inputmethodservice::AbstractInputMethodService arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.AbstractInputMethodService$AbstractInputMethodImpl",
			"(Landroid/inputmethodservice/AbstractInputMethodService;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AbstractInputMethodService_AbstractInputMethodImpl::createSession(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"createSession",
			"(Landroid/view/inputmethod/InputMethod$SessionCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodImpl::revokeSession(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"revokeSession",
			"(Landroid/view/inputmethod/InputMethodSession;)V",
			arg0.__jniObject().object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodImpl::setSessionEnabled(__JniBaseClass arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setSessionEnabled",
			"(Landroid/view/inputmethod/InputMethodSession;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::inputmethodservice

