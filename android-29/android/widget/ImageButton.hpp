#pragma once

#ifndef ANDROID_WIDGET_IMAGEBUTTON
#define ANDROID_WIDGET_IMAGEBUTTON

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "ImageView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class PointerIcon;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::widget
{
	class ImageButton : public __jni_impl::android::widget::ImageView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
		jstring getAccessibilityClassName();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/PointerIcon.hpp"
#include "../view/MotionEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ImageButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void ImageButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ImageButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ImageButton::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageButton",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ImageButton::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring ImageButton::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ImageButton : public __jni_impl::android::widget::ImageButton
	{
	public:
		ImageButton(QAndroidJniObject obj) { __thiz = obj; }
		ImageButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ImageButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ImageButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ImageButton(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_IMAGEBUTTON

