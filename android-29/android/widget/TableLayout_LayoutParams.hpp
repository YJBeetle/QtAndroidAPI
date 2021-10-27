#pragma once

#ifndef ANDROID_WIDGET_TABLELAYOUT_LAYOUTPARAMS
#define ANDROID_WIDGET_TABLELAYOUT_LAYOUTPARAMS

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "LinearLayout_LayoutParams.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::view
{
	class ViewGroup_MarginLayoutParams;
}

namespace __jni_impl::android::widget
{
	class TableLayout_LayoutParams : public __jni_impl::android::widget::LinearLayout_LayoutParams
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jint arg0, jint arg1, jfloat arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void TableLayout_LayoutParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"()V"
		);
	}
	void TableLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void TableLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void TableLayout_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TableLayout_LayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	void TableLayout_LayoutParams::__constructor(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout$LayoutParams",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TableLayout_LayoutParams : public __jni_impl::android::widget::TableLayout_LayoutParams
	{
	public:
		TableLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		TableLayout_LayoutParams()
		{
			__constructor();
		}
		TableLayout_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		TableLayout_LayoutParams(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		TableLayout_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TableLayout_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TableLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TABLELAYOUT_LAYOUTPARAMS

