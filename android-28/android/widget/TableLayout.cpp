#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./TableLayout_LayoutParams.hpp"
#include "../../JString.hpp"
#include "./TableLayout.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	TableLayout::TableLayout(QAndroidJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	TableLayout::TableLayout(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.TableLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TableLayout::TableLayout(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.TableLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void TableLayout::addView(android::view::View arg0) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void TableLayout::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TableLayout::addView(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void TableLayout::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::widget::TableLayout_LayoutParams TableLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/TableLayout$LayoutParams;",
			arg0.object()
		);
	}
	JString TableLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean TableLayout::isColumnCollapsed(jint arg0) const
	{
		return callMethod<jboolean>(
			"isColumnCollapsed",
			"(I)Z",
			arg0
		);
	}
	jboolean TableLayout::isColumnShrinkable(jint arg0) const
	{
		return callMethod<jboolean>(
			"isColumnShrinkable",
			"(I)Z",
			arg0
		);
	}
	jboolean TableLayout::isColumnStretchable(jint arg0) const
	{
		return callMethod<jboolean>(
			"isColumnStretchable",
			"(I)Z",
			arg0
		);
	}
	jboolean TableLayout::isShrinkAllColumns() const
	{
		return callMethod<jboolean>(
			"isShrinkAllColumns",
			"()Z"
		);
	}
	jboolean TableLayout::isStretchAllColumns() const
	{
		return callMethod<jboolean>(
			"isStretchAllColumns",
			"()Z"
		);
	}
	void TableLayout::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void TableLayout::setColumnCollapsed(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setColumnCollapsed",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void TableLayout::setColumnShrinkable(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setColumnShrinkable",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void TableLayout::setColumnStretchable(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setColumnStretchable",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void TableLayout::setOnHierarchyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.object()
		);
	}
	void TableLayout::setShrinkAllColumns(jboolean arg0) const
	{
		callMethod<void>(
			"setShrinkAllColumns",
			"(Z)V",
			arg0
		);
	}
	void TableLayout::setStretchAllColumns(jboolean arg0) const
	{
		callMethod<void>(
			"setStretchAllColumns",
			"(Z)V",
			arg0
		);
	}
} // namespace android::widget

