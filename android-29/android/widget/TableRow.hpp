#pragma once

#ifndef ANDROID_WIDGET_TABLEROW
#define ANDROID_WIDGET_TABLEROW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "LinearLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class LinearLayout_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class TableRow_LayoutParams;
}

namespace __jni_impl::android::widget
{
	class TableRow : public __jni_impl::android::widget::LinearLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		QAndroidJniObject getVirtualChildAt(jint arg0);
		jint getVirtualChildCount();
		void setOnHierarchyChangeListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "LinearLayout_LayoutParams.hpp"
#include "TableRow_LayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void TableRow::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void TableRow::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TableRow::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/TableRow$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring TableRow::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TableRow::getVirtualChildAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getVirtualChildAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jint TableRow::getVirtualChildCount()
	{
		return __thiz.callMethod<jint>(
			"getVirtualChildCount",
			"()I"
		);
	}
	void TableRow::setOnHierarchyChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TableRow : public __jni_impl::android::widget::TableRow
	{
	public:
		TableRow(QAndroidJniObject obj) { __thiz = obj; }
		TableRow(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		TableRow(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TABLEROW

