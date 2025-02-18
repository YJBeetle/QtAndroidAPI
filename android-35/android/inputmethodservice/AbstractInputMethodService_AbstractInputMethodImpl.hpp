#pragma once

#include "./AbstractInputMethodService.def.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// Constructors
	inline AbstractInputMethodService_AbstractInputMethodImpl::AbstractInputMethodService_AbstractInputMethodImpl(android::inputmethodservice::AbstractInputMethodService arg0)
		: JObject(
			"android.inputmethodservice.AbstractInputMethodService$AbstractInputMethodImpl",
			"(Landroid/inputmethodservice/AbstractInputMethodService;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void AbstractInputMethodService_AbstractInputMethodImpl::createSession(JObject arg0) const
	{
		callMethod<void>(
			"createSession",
			"(Landroid/view/inputmethod/InputMethod$SessionCallback;)V",
			arg0.object()
		);
	}
	inline void AbstractInputMethodService_AbstractInputMethodImpl::revokeSession(JObject arg0) const
	{
		callMethod<void>(
			"revokeSession",
			"(Landroid/view/inputmethod/InputMethodSession;)V",
			arg0.object()
		);
	}
	inline void AbstractInputMethodService_AbstractInputMethodImpl::setSessionEnabled(JObject arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setSessionEnabled",
			"(Landroid/view/inputmethod/InputMethodSession;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::inputmethodservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::inputmethodservice;
#endif
