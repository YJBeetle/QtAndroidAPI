#pragma once

#ifndef ANDROID_WIDGET_LINEARLAYOUT_LAYOUTPARAMS
#define ANDROID_WIDGET_LINEARLAYOUT_LAYOUTPARAMS

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
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
	class LinearLayout_LayoutParams : public __jni_impl::android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		jint gravity();
		jfloat weight();
		
		// Constructors
		void __constructor(__jni_impl::android::widget::LinearLayout_LayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jint arg0, jint arg1, jfloat arg2);
		
		// Methods
		QAndroidJniObject debug(jstring arg0);
	};
} // namespace __jni_impl::android::widget

#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint LinearLayout_LayoutParams::gravity()
	{
		return __thiz.getField<jint>(
			"gravity");
	}
	jfloat LinearLayout_LayoutParams::weight()
	{
		return __thiz.getField<jfloat>(
			"weight");
	}
	
	// Constructors
	void LinearLayout_LayoutParams::__constructor(__jni_impl::android::widget::LinearLayout_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/widget/LinearLayout$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void LinearLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object());
	}
	void LinearLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void LinearLayout_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void LinearLayout_LayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1);
	}
	void LinearLayout_LayoutParams::__constructor(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(IIF)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	QAndroidJniObject LinearLayout_LayoutParams::debug(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class LinearLayout_LayoutParams : public __jni_impl::android::widget::LinearLayout_LayoutParams
	{
	public:
		LinearLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		LinearLayout_LayoutParams(__jni_impl::android::widget::LinearLayout_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		LinearLayout_LayoutParams(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		LinearLayout_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		LinearLayout_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		LinearLayout_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		LinearLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_LINEARLAYOUT_LAYOUTPARAMS

