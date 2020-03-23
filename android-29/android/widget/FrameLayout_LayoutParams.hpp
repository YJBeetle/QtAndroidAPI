#pragma once

#ifndef ANDROID_WIDGET_FRAMELAYOUT_LAYOUTPARAMS
#define ANDROID_WIDGET_FRAMELAYOUT_LAYOUTPARAMS

#include "../view/ViewGroup_MarginLayoutParams.hpp"

namespace __jni_impl::android::view
{
	class ViewGroup_MarginLayoutParams;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::widget
{
	class FrameLayout_LayoutParams : public __jni_impl::android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		static jint UNSPECIFIED_GRAVITY();
		jint gravity();
		
		// Constructors
		void __constructor(__jni_impl::android::widget::FrameLayout_LayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::widget

#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint FrameLayout_LayoutParams::UNSPECIFIED_GRAVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.FrameLayout$LayoutParams",
			"UNSPECIFIED_GRAVITY");
	}
	jint FrameLayout_LayoutParams::gravity()
	{
		return __thiz.getField<jint>(
			"gravity");
	}
	
	// Constructors
	void FrameLayout_LayoutParams::__constructor(__jni_impl::android::widget::FrameLayout_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/widget/FrameLayout$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void FrameLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object());
	}
	void FrameLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void FrameLayout_LayoutParams::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void FrameLayout_LayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1);
	}
	void FrameLayout_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class FrameLayout_LayoutParams : public __jni_impl::android::widget::FrameLayout_LayoutParams
	{
	public:
		FrameLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		FrameLayout_LayoutParams(__jni_impl::android::widget::FrameLayout_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		FrameLayout_LayoutParams(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		FrameLayout_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		FrameLayout_LayoutParams(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		FrameLayout_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FrameLayout_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_FRAMELAYOUT_LAYOUTPARAMS

