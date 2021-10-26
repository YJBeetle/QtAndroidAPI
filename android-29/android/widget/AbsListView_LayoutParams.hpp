#pragma once

#ifndef ANDROID_WIDGET_ABSLISTVIEW_LAYOUTPARAMS
#define ANDROID_WIDGET_ABSLISTVIEW_LAYOUTPARAMS

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"

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
	class AbsListView_LayoutParams : public __jni_impl::android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::widget

#include "../view/ViewGroup_LayoutParams.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void AbsListView_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView_LayoutParams::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void AbsListView_LayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AbsListView_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AbsListView_LayoutParams : public __jni_impl::android::widget::AbsListView_LayoutParams
	{
	public:
		AbsListView_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		AbsListView_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		AbsListView_LayoutParams(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AbsListView_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AbsListView_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ABSLISTVIEW_LAYOUTPARAMS

