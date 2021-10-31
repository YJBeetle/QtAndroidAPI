#include "./AbstractInputMethodService.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	AbstractInputMethodService_AbstractInputMethodSessionImpl::AbstractInputMethodService_AbstractInputMethodSessionImpl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractInputMethodService_AbstractInputMethodSessionImpl::AbstractInputMethodService_AbstractInputMethodSessionImpl(android::inputmethodservice::AbstractInputMethodService arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.AbstractInputMethodService$AbstractInputMethodSessionImpl",
			"(Landroid/inputmethodservice/AbstractInputMethodService;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchGenericMotionEvent(jint arg0, android::view::MotionEvent arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"dispatchGenericMotionEvent",
			"(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchKeyEvent(jint arg0, android::view::KeyEvent arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"dispatchKeyEvent",
			"(ILandroid/view/KeyEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchTrackballEvent(jint arg0, android::view::MotionEvent arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"dispatchTrackballEvent",
			"(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean AbstractInputMethodService_AbstractInputMethodSessionImpl::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AbstractInputMethodService_AbstractInputMethodSessionImpl::isRevoked()
	{
		return __thiz.callMethod<jboolean>(
			"isRevoked",
			"()Z"
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::revokeSelf()
	{
		__thiz.callMethod<void>(
			"revokeSelf",
			"()V"
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::inputmethodservice

