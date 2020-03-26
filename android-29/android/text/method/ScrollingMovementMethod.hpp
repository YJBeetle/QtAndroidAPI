#pragma once

#ifndef ANDROID_TEXT_METHOD_SCROLLINGMOVEMENTMETHOD
#define ANDROID_TEXT_METHOD_SCROLLINGMOVEMENTMETHOD

#include "../../../__JniBaseClass.hpp"
#include "BaseMovementMethod.hpp"

namespace __jni_impl::android::widget
{
	class TextView;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::text::method
{
	class ScrollingMovementMethod : public __jni_impl::android::text::method::BaseMovementMethod
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		jboolean onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2);
		void onTakeFocus(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
	};
} // namespace __jni_impl::android::text::method

#include "../../widget/TextView.hpp"
#include "../../view/MotionEvent.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void ScrollingMovementMethod::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.ScrollingMovementMethod",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ScrollingMovementMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.ScrollingMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	jboolean ScrollingMovementMethod::onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScrollingMovementMethod::onTakeFocus(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
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
	class ScrollingMovementMethod : public __jni_impl::android::text::method::ScrollingMovementMethod
	{
	public:
		ScrollingMovementMethod(QAndroidJniObject obj) { __thiz = obj; }
		ScrollingMovementMethod()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_SCROLLINGMOVEMENTMETHOD

