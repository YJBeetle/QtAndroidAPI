#pragma once

#ifndef ANDROID_TEXT_METHOD_NUMBERKEYLISTENER
#define ANDROID_TEXT_METHOD_NUMBERKEYLISTENER

#include "../../../__JniBaseClass.hpp"
#include "MetaKeyKeyListener.hpp"
#include "BaseKeyListener.hpp"

namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::text::method
{
	class NumberKeyListener : public __jni_impl::android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5);
		jboolean onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
	};
} // namespace __jni_impl::android::text::method

#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void NumberKeyListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.NumberKeyListener",
			"()V");
	}
	
	// Methods
	QAndroidJniObject NumberKeyListener::filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5);
	}
	jboolean NumberKeyListener::onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class NumberKeyListener : public __jni_impl::android::text::method::NumberKeyListener
	{
	public:
		NumberKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		NumberKeyListener()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_NUMBERKEYLISTENER

