#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./TableLayout_LayoutParams.hpp"
#include "./TableLayout.hpp"

namespace android::widget
{
	// Fields
	
	TableLayout::TableLayout(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TableLayout::TableLayout(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	TableLayout::TableLayout(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void TableLayout::addView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void TableLayout::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TableLayout::addView(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TableLayout::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject TableLayout::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/TableLayout$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring TableLayout::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean TableLayout::isColumnCollapsed(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isColumnCollapsed",
			"(I)Z",
			arg0
		);
	}
	jboolean TableLayout::isColumnShrinkable(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isColumnShrinkable",
			"(I)Z",
			arg0
		);
	}
	jboolean TableLayout::isColumnStretchable(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isColumnStretchable",
			"(I)Z",
			arg0
		);
	}
	jboolean TableLayout::isShrinkAllColumns()
	{
		return __thiz.callMethod<jboolean>(
			"isShrinkAllColumns",
			"()Z"
		);
	}
	jboolean TableLayout::isStretchAllColumns()
	{
		return __thiz.callMethod<jboolean>(
			"isStretchAllColumns",
			"()Z"
		);
	}
	void TableLayout::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void TableLayout::setColumnCollapsed(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setColumnCollapsed",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void TableLayout::setColumnShrinkable(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setColumnShrinkable",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void TableLayout::setColumnStretchable(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setColumnStretchable",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void TableLayout::setOnHierarchyChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TableLayout::setShrinkAllColumns(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShrinkAllColumns",
			"(Z)V",
			arg0
		);
	}
	void TableLayout::setStretchAllColumns(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStretchAllColumns",
			"(Z)V",
			arg0
		);
	}
} // namespace android::widget

