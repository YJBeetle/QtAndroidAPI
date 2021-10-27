#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "TextView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class PointerIcon;
}

namespace __jni_impl::android::widget
{
	class Button : public __jni_impl::android::widget::TextView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Button::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Button",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void Button::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Button::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Button::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring Button::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Button::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Button : public __jni_impl::android::widget::Button
	{
	public:
		Button(QAndroidJniObject obj) { __thiz = obj; }
		Button(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		Button(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Button(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Button(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

