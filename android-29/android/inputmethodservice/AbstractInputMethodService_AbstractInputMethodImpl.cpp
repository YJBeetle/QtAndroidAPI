#include "./AbstractInputMethodService.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractInputMethodService_AbstractInputMethodImpl::AbstractInputMethodService_AbstractInputMethodImpl(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AbstractInputMethodService_AbstractInputMethodImpl::AbstractInputMethodService_AbstractInputMethodImpl(android::inputmethodservice::AbstractInputMethodService arg0)
		: JObject(
			"android.inputmethodservice.AbstractInputMethodService$AbstractInputMethodImpl",
			"(Landroid/inputmethodservice/AbstractInputMethodService;)V",
			arg0.object()
		) {}
	
	// Methods
	void AbstractInputMethodService_AbstractInputMethodImpl::createSession(JObject arg0) const
	{
		callMethod<void>(
			"createSession",
			"(Landroid/view/inputmethod/InputMethod$SessionCallback;)V",
			arg0.object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodImpl::revokeSession(JObject arg0) const
	{
		callMethod<void>(
			"revokeSession",
			"(Landroid/view/inputmethod/InputMethodSession;)V",
			arg0.object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodImpl::setSessionEnabled(JObject arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setSessionEnabled",
			"(Landroid/view/inputmethod/InputMethodSession;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::inputmethodservice

