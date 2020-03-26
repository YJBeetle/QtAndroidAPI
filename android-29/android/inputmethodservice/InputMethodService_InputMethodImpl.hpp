#pragma once

#ifndef ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODIMPL
#define ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODIMPL

#include "../../__JniBaseClass.hpp"
#include "AbstractInputMethodService_AbstractInputMethodImpl.hpp"

namespace __jni_impl::android::inputmethodservice
{
	class InputMethodService;
}
namespace __jni_impl::android::os
{
	class ResultReceiver;
}
namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class InputBinding;
}
namespace __jni_impl::android::view::inputmethod
{
	class InputMethodSubtype;
}

namespace __jni_impl::android::inputmethodservice
{
	class InputMethodService_InputMethodImpl : public __jni_impl::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::inputmethodservice::InputMethodService arg0);
		
		// Methods
		void showSoftInput(jint arg0, __jni_impl::android::os::ResultReceiver arg1);
		void restartInput(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::inputmethod::EditorInfo arg1);
		void attachToken(__jni_impl::__JniBaseClass arg0);
		void bindInput(__jni_impl::android::view::inputmethod::InputBinding arg0);
		void unbindInput();
		void startInput(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::inputmethod::EditorInfo arg1);
		void hideSoftInput(jint arg0, __jni_impl::android::os::ResultReceiver arg1);
		void changeInputMethodSubtype(__jni_impl::android::view::inputmethod::InputMethodSubtype arg0);
	};
} // namespace __jni_impl::android::inputmethodservice

#include "InputMethodService.hpp"
#include "../os/ResultReceiver.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/inputmethod/InputBinding.hpp"
#include "../view/inputmethod/InputMethodSubtype.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	
	// Constructors
	void InputMethodService_InputMethodImpl::__constructor(__jni_impl::android::inputmethodservice::InputMethodService arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.InputMethodService$InputMethodImpl",
			"(Landroid/inputmethodservice/InputMethodService;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void InputMethodService_InputMethodImpl::showSoftInput(jint arg0, __jni_impl::android::os::ResultReceiver arg1)
	{
		__thiz.callMethod<void>(
			"showSoftInput",
			"(ILandroid/os/ResultReceiver;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::restartInput(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::inputmethod::EditorInfo arg1)
	{
		__thiz.callMethod<void>(
			"restartInput",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::attachToken(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"attachToken",
			"(Landroid/os/IBinder;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::bindInput(__jni_impl::android::view::inputmethod::InputBinding arg0)
	{
		__thiz.callMethod<void>(
			"bindInput",
			"(Landroid/view/inputmethod/InputBinding;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::unbindInput()
	{
		__thiz.callMethod<void>(
			"unbindInput",
			"()V"
		);
	}
	void InputMethodService_InputMethodImpl::startInput(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::inputmethod::EditorInfo arg1)
	{
		__thiz.callMethod<void>(
			"startInput",
			"(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::hideSoftInput(jint arg0, __jni_impl::android::os::ResultReceiver arg1)
	{
		__thiz.callMethod<void>(
			"hideSoftInput",
			"(ILandroid/os/ResultReceiver;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void InputMethodService_InputMethodImpl::changeInputMethodSubtype(__jni_impl::android::view::inputmethod::InputMethodSubtype arg0)
	{
		__thiz.callMethod<void>(
			"changeInputMethodSubtype",
			"(Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class InputMethodService_InputMethodImpl : public __jni_impl::android::inputmethodservice::InputMethodService_InputMethodImpl
	{
	public:
		InputMethodService_InputMethodImpl(QAndroidJniObject obj) { __thiz = obj; }
		InputMethodService_InputMethodImpl(__jni_impl::android::inputmethodservice::InputMethodService arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::inputmethodservice

#endif // ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODIMPL

