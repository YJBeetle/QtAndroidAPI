#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./TableRow_LayoutParams.hpp"
#include "./TableRow.hpp"

namespace android::widget
{
	// Fields
	
	TableRow::TableRow(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TableRow::TableRow(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	TableRow::TableRow(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TableRow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TableRow::generateLayoutParams(__JniBaseClass arg0)
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
	void TableRow::setOnHierarchyChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

