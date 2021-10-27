#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::inputmethodservice
{
	class AbstractInputMethodService;
}

namespace __jni_impl::android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::inputmethodservice::AbstractInputMethodService arg0);
		
		// Methods
		void createSession(__jni_impl::__JniBaseClass arg0);
		void revokeSession(__jni_impl::__JniBaseClass arg0);
		void setSessionEnabled(__jni_impl::__JniBaseClass arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::inputmethodservice

#include "AbstractInputMethodService.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	
	// Constructors
	void AbstractInputMethodService_AbstractInputMethodImpl::__constructor(__jni_impl::android::inputmethodservice::AbstractInputMethodService arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.AbstractInputMethodService$AbstractInputMethodImpl",
			"(Landroid/inputmethodservice/AbstractInputMethodService;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AbstractInputMethodService_AbstractInputMethodImpl::createSession(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"createSession",
			"(Landroid/view/inputmethod/InputMethod$SessionCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodImpl::revokeSession(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"revokeSession",
			"(Landroid/view/inputmethod/InputMethodSession;)V",
			arg0.__jniObject().object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodImpl::setSessionEnabled(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setSessionEnabled",
			"(Landroid/view/inputmethod/InputMethodSession;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodImpl : public __jni_impl::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl
	{
	public:
		AbstractInputMethodService_AbstractInputMethodImpl(QAndroidJniObject obj) { __thiz = obj; }
		AbstractInputMethodService_AbstractInputMethodImpl(__jni_impl::android::inputmethodservice::AbstractInputMethodService arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::inputmethodservice

