#pragma once

#ifndef ANDROID_TEXT_METHOD_BASEKEYLISTENER
#define ANDROID_TEXT_METHOD_BASEKEYLISTENER

#include "../../../__JniBaseClass.hpp"
#include "MetaKeyKeyListener.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}

namespace __jni_impl::android::text::method
{
	class BaseKeyListener : public __jni_impl::android::text::method::MetaKeyKeyListener
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean onKeyOther(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::KeyEvent arg2);
		jboolean onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
		jboolean forwardDelete(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
		jboolean backspace(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
	};
} // namespace __jni_impl::android::text::method

#include "../../view/View.hpp"
#include "../../view/KeyEvent.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void BaseKeyListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.BaseKeyListener",
			"()V");
	}
	
	// Methods
	jboolean BaseKeyListener::onKeyOther(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jboolean BaseKeyListener::onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jboolean BaseKeyListener::forwardDelete(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"forwardDelete",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jboolean BaseKeyListener::backspace(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"backspace",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class BaseKeyListener : public __jni_impl::android::text::method::BaseKeyListener
	{
	public:
		BaseKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		BaseKeyListener()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_BASEKEYLISTENER

