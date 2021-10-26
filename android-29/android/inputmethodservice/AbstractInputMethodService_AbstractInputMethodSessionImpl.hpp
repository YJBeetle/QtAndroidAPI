#pragma once

#ifndef ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODSESSIONIMPL
#define ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODSESSIONIMPL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::inputmethodservice
{
	class AbstractInputMethodService;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodSessionImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::inputmethodservice::AbstractInputMethodService arg0);
		
		// Methods
		jboolean isEnabled();
		jboolean isRevoked();
		void revokeSelf();
		void setEnabled(jboolean arg0);
		void dispatchKeyEvent(jint arg0, __jni_impl::android::view::KeyEvent arg1, __jni_impl::__JniBaseClass arg2);
		void dispatchTrackballEvent(jint arg0, __jni_impl::android::view::MotionEvent arg1, __jni_impl::__JniBaseClass arg2);
		void dispatchGenericMotionEvent(jint arg0, __jni_impl::android::view::MotionEvent arg1, __jni_impl::__JniBaseClass arg2);
	};
} // namespace __jni_impl::android::inputmethodservice

#include "AbstractInputMethodService.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	
	// Constructors
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::__constructor(__jni_impl::android::inputmethodservice::AbstractInputMethodService arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.AbstractInputMethodService$AbstractInputMethodSessionImpl",
			"(Landroid/inputmethodservice/AbstractInputMethodService;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
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
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchKeyEvent(jint arg0, __jni_impl::android::view::KeyEvent arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"dispatchKeyEvent",
			"(ILandroid/view/KeyEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchTrackballEvent(jint arg0, __jni_impl::android::view::MotionEvent arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"dispatchTrackballEvent",
			"(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchGenericMotionEvent(jint arg0, __jni_impl::android::view::MotionEvent arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"dispatchGenericMotionEvent",
			"(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodSessionImpl : public __jni_impl::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl
	{
	public:
		AbstractInputMethodService_AbstractInputMethodSessionImpl(QAndroidJniObject obj) { __thiz = obj; }
		AbstractInputMethodService_AbstractInputMethodSessionImpl(__jni_impl::android::inputmethodservice::AbstractInputMethodService arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::inputmethodservice

#endif // ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODSESSIONIMPL

