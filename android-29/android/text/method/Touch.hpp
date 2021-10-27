#pragma once

#ifndef ANDROID_TEXT_METHOD_TOUCH
#define ANDROID_TEXT_METHOD_TOUCH

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class Layout;
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
	class Touch : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getInitialScrollX(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1);
		static jint getInitialScrollY(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1);
		static jboolean onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2);
		static void scrollTo(__jni_impl::android::widget::TextView arg0, __jni_impl::android::text::Layout arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::text::method

#include "../Layout.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void Touch::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.Touch",
			"(V)V");
	}
	
	// Methods
	jint Touch::getInitialScrollX(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.Touch",
			"getInitialScrollX",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Touch::getInitialScrollY(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.Touch",
			"getInitialScrollY",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Touch::onTouchEvent(__jni_impl::android::widget::TextView arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::MotionEvent arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.method.Touch",
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Touch::scrollTo(__jni_impl::android::widget::TextView arg0, __jni_impl::android::text::Layout arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.method.Touch",
			"scrollTo",
			"(Landroid/widget/TextView;Landroid/text/Layout;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class Touch : public __jni_impl::android::text::method::Touch
	{
	public:
		Touch(QAndroidJniObject obj) { __thiz = obj; }
		Touch()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_TOUCH

