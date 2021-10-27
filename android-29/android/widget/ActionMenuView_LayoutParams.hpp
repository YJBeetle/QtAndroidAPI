#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "LinearLayout_LayoutParams.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}

namespace __jni_impl::android::widget
{
	class ActionMenuView_LayoutParams : public __jni_impl::android::widget::LinearLayout_LayoutParams
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::widget::ActionMenuView_LayoutParams arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ActionMenuView_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionMenuView_LayoutParams::__constructor(__jni_impl::android::widget::ActionMenuView_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/widget/ActionMenuView$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionMenuView_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ActionMenuView_LayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ActionMenuView_LayoutParams : public __jni_impl::android::widget::ActionMenuView_LayoutParams
	{
	public:
		ActionMenuView_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		ActionMenuView_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		ActionMenuView_LayoutParams(__jni_impl::android::widget::ActionMenuView_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		ActionMenuView_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ActionMenuView_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

