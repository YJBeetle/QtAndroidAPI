#pragma once

#include "./AbstractInputMethodService.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// Constructors
	inline AbstractInputMethodService_AbstractInputMethodSessionImpl::AbstractInputMethodService_AbstractInputMethodSessionImpl(android::inputmethodservice::AbstractInputMethodService arg0)
		: JObject(
			"android.inputmethodservice.AbstractInputMethodService$AbstractInputMethodSessionImpl",
			"(Landroid/inputmethodservice/AbstractInputMethodService;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchGenericMotionEvent(jint arg0, android::view::MotionEvent arg1, JObject arg2) const
	{
		callMethod<void>(
			"dispatchGenericMotionEvent",
			"(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchKeyEvent(jint arg0, android::view::KeyEvent arg1, JObject arg2) const
	{
		callMethod<void>(
			"dispatchKeyEvent",
			"(ILandroid/view/KeyEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchTrackballEvent(jint arg0, android::view::MotionEvent arg1, JObject arg2) const
	{
		callMethod<void>(
			"dispatchTrackballEvent",
			"(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean AbstractInputMethodService_AbstractInputMethodSessionImpl::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean AbstractInputMethodService_AbstractInputMethodSessionImpl::isRevoked() const
	{
		return callMethod<jboolean>(
			"isRevoked",
			"()Z"
		);
	}
	inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::revokeSelf() const
	{
		callMethod<void>(
			"revokeSelf",
			"()V"
		);
	}
	inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::inputmethodservice

// Base class headers

