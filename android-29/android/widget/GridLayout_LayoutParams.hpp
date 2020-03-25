#pragma once

#ifndef ANDROID_WIDGET_GRIDLAYOUT_LAYOUTPARAMS
#define ANDROID_WIDGET_GRIDLAYOUT_LAYOUTPARAMS

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

namespace __jni_impl::android::widget
{
	class GridLayout_Spec;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class ViewGroup_MarginLayoutParams;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}

namespace __jni_impl::android::widget
{
	class GridLayout_LayoutParams : public __jni_impl::android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		QAndroidJniObject columnSpec();
		QAndroidJniObject rowSpec();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::widget::GridLayout_LayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0);
		void __constructor(__jni_impl::android::widget::GridLayout_Spec arg0, __jni_impl::android::widget::GridLayout_Spec arg1);
		void __constructor();
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		void setGravity(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "GridLayout_Spec.hpp"
#include "../content/Context.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../content/res/TypedArray.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	QAndroidJniObject GridLayout_LayoutParams::columnSpec()
	{
		return __thiz.getObjectField(
			"columnSpec",
			"Landroid/widget/GridLayout$Spec;");
	}
	QAndroidJniObject GridLayout_LayoutParams::rowSpec()
	{
		return __thiz.getObjectField(
			"rowSpec",
			"Landroid/widget/GridLayout$Spec;");
	}
	
	// Constructors
	void GridLayout_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void GridLayout_LayoutParams::__constructor(__jni_impl::android::widget::GridLayout_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/widget/GridLayout$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void GridLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object());
	}
	void GridLayout_LayoutParams::__constructor(__jni_impl::android::widget::GridLayout_Spec arg0, __jni_impl::android::widget::GridLayout_Spec arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/widget/GridLayout$Spec;Landroid/widget/GridLayout$Spec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void GridLayout_LayoutParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"()V");
	}
	void GridLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean GridLayout_LayoutParams::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint GridLayout_LayoutParams::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void GridLayout_LayoutParams::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class GridLayout_LayoutParams : public __jni_impl::android::widget::GridLayout_LayoutParams
	{
	public:
		GridLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		GridLayout_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GridLayout_LayoutParams(__jni_impl::android::widget::GridLayout_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		GridLayout_LayoutParams(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		GridLayout_LayoutParams(__jni_impl::android::widget::GridLayout_Spec arg0, __jni_impl::android::widget::GridLayout_Spec arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GridLayout_LayoutParams()
		{
			__constructor();
		}
		GridLayout_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_GRIDLAYOUT_LAYOUTPARAMS

