#pragma once

#ifndef ANDROID_TEXT_METHOD_BASEMOVEMENTMETHOD
#define ANDROID_TEXT_METHOD_BASEMOVEMENTMETHOD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::widget
{
	class TextView;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::text::method
{
	class BaseMovementMethod : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void initialize(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onKeyDown(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
		jboolean onKeyUp(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
		jboolean onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2);
		jboolean onTrackballEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2);
		jboolean onGenericMotionEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2);
		jboolean canSelectArbitrarily();
		jboolean onKeyOther(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::KeyEvent arg2);
		void onTakeFocus(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
	};
} // namespace __jni_impl::android::text::method

#include "../../widget/TextView.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void BaseMovementMethod::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.BaseMovementMethod",
			"()V");
	}
	
	// Methods
	void BaseMovementMethod::initialize(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onKeyDown(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onKeyUp(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onTrackballEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onGenericMotionEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::canSelectArbitrarily()
	{
		return __thiz.callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	jboolean BaseMovementMethod::onKeyOther(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BaseMovementMethod::onTakeFocus(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class BaseMovementMethod : public __jni_impl::android::text::method::BaseMovementMethod
	{
	public:
		BaseMovementMethod(QAndroidJniObject obj) { __thiz = obj; }
		BaseMovementMethod()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_BASEMOVEMENTMETHOD

