#pragma once

#ifndef ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS
#define ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS

#include "../app/ActionBar_LayoutParams.hpp"

namespace __jni_impl::android::app
{
	class ActionBar_LayoutParams;
}
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
	class Toolbar_LayoutParams : public __jni_impl::android::app::ActionBar_LayoutParams
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::widget::Toolbar_LayoutParams arg0);
		void __constructor(__jni_impl::android::app::ActionBar_LayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::widget

#include "../app/ActionBar_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Toolbar_LayoutParams::__constructor(__jni_impl::android::widget::Toolbar_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/widget/Toolbar$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void Toolbar_LayoutParams::__constructor(__jni_impl::android::app::ActionBar_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/app/ActionBar$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void Toolbar_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object());
	}
	void Toolbar_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void Toolbar_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Toolbar_LayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(II)V",
			arg0,
			arg1);
	}
	void Toolbar_LayoutParams::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void Toolbar_LayoutParams::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(I)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Toolbar_LayoutParams : public __jni_impl::android::widget::Toolbar_LayoutParams
	{
	public:
		Toolbar_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		Toolbar_LayoutParams(__jni_impl::android::widget::Toolbar_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		Toolbar_LayoutParams(__jni_impl::android::app::ActionBar_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		Toolbar_LayoutParams(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		Toolbar_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		Toolbar_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Toolbar_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Toolbar_LayoutParams(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Toolbar_LayoutParams(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS

