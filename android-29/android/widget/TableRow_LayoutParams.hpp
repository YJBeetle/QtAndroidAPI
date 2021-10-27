#pragma once

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
	class TableRow_LayoutParams : public __jni_impl::android::widget::LinearLayout_LayoutParams
	{
	public:
		// Fields
		jint column();
		jint span();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0);
		void __constructor(jint arg0);
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
	jint TableRow_LayoutParams::column()
	{
		return __thiz.getField<jint>(
			"column"
		);
	}
	jint TableRow_LayoutParams::span()
	{
		return __thiz.getField<jint>(
			"span"
		);
	}
	
	// Constructors
	void TableRow_LayoutParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"()V"
		);
	}
	void TableRow_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void TableRow_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void TableRow_LayoutParams::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(I)V",
			arg0
		);
	}
	void TableRow_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TableRow_LayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	void TableRow_LayoutParams::__constructor(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow$LayoutParams",
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
	class TableRow_LayoutParams : public __jni_impl::android::widget::TableRow_LayoutParams
	{
	public:
		TableRow_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		TableRow_LayoutParams()
		{
			__constructor();
		}
		TableRow_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		TableRow_LayoutParams(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		TableRow_LayoutParams(jint arg0)
		{
			__constructor(
				arg0);
		}
		TableRow_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TableRow_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TableRow_LayoutParams(jint arg0, jint arg1, jfloat arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget

