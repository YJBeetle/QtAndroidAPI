#pragma once

#ifndef ANDROID_WIDGET_ABSOLUTELAYOUT_LAYOUTPARAMS
#define ANDROID_WIDGET_ABSOLUTELAYOUT_LAYOUTPARAMS

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"

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
	class AbsoluteLayout_LayoutParams : public __jni_impl::android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		jint x();
		jint y();
		
		// Constructors
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jstring debug(jstring arg0);
		jstring debug(const QString &arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint AbsoluteLayout_LayoutParams::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint AbsoluteLayout_LayoutParams::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	
	// Constructors
	void AbsoluteLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsoluteLayout_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AbsoluteLayout_LayoutParams::__constructor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout$LayoutParams",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring AbsoluteLayout_LayoutParams::debug(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AbsoluteLayout_LayoutParams::debug(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AbsoluteLayout_LayoutParams : public __jni_impl::android::widget::AbsoluteLayout_LayoutParams
	{
	public:
		AbsoluteLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		AbsoluteLayout_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		AbsoluteLayout_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AbsoluteLayout_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ABSOLUTELAYOUT_LAYOUTPARAMS

