#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./TableRow_LayoutParams.hpp"
#include "./TableRow.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	TableRow::TableRow(QAndroidJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	TableRow::TableRow(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.TableRow",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TableRow::TableRow(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::LinearLayout(
			"android.widget.TableRow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::widget::TableRow_LayoutParams TableRow::generateLayoutParams(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/TableRow$LayoutParams;",
			arg0.object()
		);
	}
	jstring TableRow::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::view::View TableRow::getVirtualChildAt(jint arg0)
	{
		return callObjectMethod(
			"getVirtualChildAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jint TableRow::getVirtualChildCount()
	{
		return callMethod<jint>(
			"getVirtualChildCount",
			"()I"
		);
	}
	void TableRow::setOnHierarchyChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::widget

