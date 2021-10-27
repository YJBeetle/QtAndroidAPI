#pragma once

#ifndef ANDROID_TEXT_METHOD_ARROWKEYMOVEMENTMETHOD
#define ANDROID_TEXT_METHOD_ARROWKEYMOVEMENTMETHOD

#include "../../../__JniBaseClass.hpp"
#include "BaseMovementMethod.hpp"

namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::widget
{
	class TextView;
}

namespace __jni_impl::android::text::method
{
	class ArrowKeyMovementMethod : public __jni_impl::android::text::method::BaseMovementMethod
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		jboolean canSelectArbitrarily();
		void initialize(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1);
		void onTakeFocus(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		jboolean onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2);
	};
} // namespace __jni_impl::android::text::method

#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void ArrowKeyMovementMethod::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.ArrowKeyMovementMethod",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ArrowKeyMovementMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.ArrowKeyMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	jboolean ArrowKeyMovementMethod::canSelectArbitrarily()
	{
		return __thiz.callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	void ArrowKeyMovementMethod::initialize(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ArrowKeyMovementMethod::onTakeFocus(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean ArrowKeyMovementMethod::onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2)
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
	class ArrowKeyMovementMethod : public __jni_impl::android::text::method::ArrowKeyMovementMethod
	{
	public:
		ArrowKeyMovementMethod(QAndroidJniObject obj) { __thiz = obj; }
		ArrowKeyMovementMethod()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_ARROWKEYMOVEMENTMETHOD

