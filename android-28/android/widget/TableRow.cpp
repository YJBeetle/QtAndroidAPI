#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./TableRow_LayoutParams.hpp"
#include "../../JString.hpp"
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
	TableRow::TableRow(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.TableRow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::widget::TableRow_LayoutParams TableRow::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/TableRow$LayoutParams;",
			arg0.object()
		);
	}
	JString TableRow::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::View TableRow::getVirtualChildAt(jint arg0) const
	{
		return callObjectMethod(
			"getVirtualChildAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jint TableRow::getVirtualChildCount() const
	{
		return callMethod<jint>(
			"getVirtualChildCount",
			"()I"
		);
	}
	void TableRow::setOnHierarchyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::widget

