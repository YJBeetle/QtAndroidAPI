#pragma once

#ifndef ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD
#define ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD

#include "../../../__JniBaseClass.hpp"
#include "BaseMovementMethod.hpp"
#include "ScrollingMovementMethod.hpp"

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
	class LinkMovementMethod : public __jni_impl::android::text::method::ScrollingMovementMethod
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		void initialize(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1);
		jboolean canSelectArbitrarily();
		void onTakeFocus(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		jboolean onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2);
	};
} // namespace __jni_impl::android::text::method

#include "../../widget/TextView.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void LinkMovementMethod::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.LinkMovementMethod",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject LinkMovementMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.LinkMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	void LinkMovementMethod::initialize(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LinkMovementMethod::canSelectArbitrarily()
	{
		return __thiz.callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	void LinkMovementMethod::onTakeFocus(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean LinkMovementMethod::onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class LinkMovementMethod : public __jni_impl::android::text::method::LinkMovementMethod
	{
	public:
		LinkMovementMethod(QAndroidJniObject obj) { __thiz = obj; }
		LinkMovementMethod()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD

