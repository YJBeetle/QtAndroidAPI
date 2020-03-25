#pragma once

#ifndef ANDROID_WIDGET_TABLELAYOUT
#define ANDROID_WIDGET_TABLELAYOUT

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
	class TableLayout_LayoutParams;
}

namespace __jni_impl::android::widget
{
	class TableLayout : public __jni_impl::android::widget::LinearLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getAccessibilityClassName();
		void addView(__jni_impl::android::view::View arg0);
		void addView(__jni_impl::android::view::View arg0, jint arg1);
		void addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2);
		void setOnHierarchyChangeListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		void requestLayout();
		jboolean isShrinkAllColumns();
		void setShrinkAllColumns(jboolean arg0);
		jboolean isStretchAllColumns();
		void setStretchAllColumns(jboolean arg0);
		void setColumnCollapsed(jint arg0, jboolean arg1);
		jboolean isColumnCollapsed(jint arg0);
		void setColumnStretchable(jint arg0, jboolean arg1);
		jboolean isColumnStretchable(jint arg0);
		void setColumnShrinkable(jint arg0, jboolean arg1);
		jboolean isColumnShrinkable(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "LinearLayout_LayoutParams.hpp"
#include "TableLayout_LayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void TableLayout::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void TableLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject TableLayout::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void TableLayout::addView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void TableLayout::addView(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void TableLayout::addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void TableLayout::addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void TableLayout::setOnHierarchyChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TableLayout::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/TableLayout$LayoutParams;",
			arg0.__jniObject().object());
	}
	void TableLayout::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V");
	}
	jboolean TableLayout::isShrinkAllColumns()
	{
		return __thiz.callMethod<jboolean>(
			"isShrinkAllColumns",
			"()Z");
	}
	void TableLayout::setShrinkAllColumns(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShrinkAllColumns",
			"(Z)V",
			arg0);
	}
	jboolean TableLayout::isStretchAllColumns()
	{
		return __thiz.callMethod<jboolean>(
			"isStretchAllColumns",
			"()Z");
	}
	void TableLayout::setStretchAllColumns(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStretchAllColumns",
			"(Z)V",
			arg0);
	}
	void TableLayout::setColumnCollapsed(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setColumnCollapsed",
			"(IZ)V",
			arg0,
			arg1);
	}
	jboolean TableLayout::isColumnCollapsed(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isColumnCollapsed",
			"(I)Z",
			arg0);
	}
	void TableLayout::setColumnStretchable(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setColumnStretchable",
			"(IZ)V",
			arg0,
			arg1);
	}
	jboolean TableLayout::isColumnStretchable(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isColumnStretchable",
			"(I)Z",
			arg0);
	}
	void TableLayout::setColumnShrinkable(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setColumnShrinkable",
			"(IZ)V",
			arg0,
			arg1);
	}
	jboolean TableLayout::isColumnShrinkable(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isColumnShrinkable",
			"(I)Z",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TableLayout : public __jni_impl::android::widget::TableLayout
	{
	public:
		TableLayout(QAndroidJniObject obj) { __thiz = obj; }
		TableLayout(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		TableLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TABLELAYOUT

