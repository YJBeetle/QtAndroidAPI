#pragma once

#ifndef ANDROID_APP_ACTIONBAR_LAYOUTPARAMS
#define ANDROID_APP_ACTIONBAR_LAYOUTPARAMS

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::app
{
	class ActionBar_LayoutParams : public __jni_impl::android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		jint gravity();
		
		// Constructors
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::app::ActionBar_LayoutParams arg0);
		void __constructor(jint arg0);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::app

#include "../view/ViewGroup_LayoutParams.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint ActionBar_LayoutParams::gravity()
	{
		return __thiz.getField<jint>(
			"gravity"
		);
	}
	
	// Constructors
	void ActionBar_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar_LayoutParams::__constructor(__jni_impl::android::app::ActionBar_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(Landroid/app/ActionBar$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar_LayoutParams::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(I)V",
			arg0
		);
	}
	void ActionBar_LayoutParams::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ActionBar_LayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ActionBar_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActionBar_LayoutParams : public __jni_impl::android::app::ActionBar_LayoutParams
	{
	public:
		ActionBar_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		ActionBar_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		ActionBar_LayoutParams(__jni_impl::android::app::ActionBar_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		ActionBar_LayoutParams(jint arg0)
		{
			__constructor(
				arg0);
		}
		ActionBar_LayoutParams(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ActionBar_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ActionBar_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIONBAR_LAYOUTPARAMS

