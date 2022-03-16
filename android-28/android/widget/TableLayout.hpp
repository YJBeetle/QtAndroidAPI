#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./LinearLayout_LayoutParams.def.hpp"
#include "./TableLayout_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./TableLayout.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline TableLayout::TableLayout(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.TableLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TableLayout::TableLayout(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.TableLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void TableLayout::addView(android::view::View arg0) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void TableLayout::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TableLayout::addView(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void TableLayout::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline android::widget::TableLayout_LayoutParams TableLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/TableLayout$LayoutParams;",
			arg0.object()
		);
	}
	inline JString TableLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean TableLayout::isColumnCollapsed(jint arg0) const
	{
		return callMethod<jboolean>(
			"isColumnCollapsed",
			"(I)Z",
			arg0
		);
	}
	inline jboolean TableLayout::isColumnShrinkable(jint arg0) const
	{
		return callMethod<jboolean>(
			"isColumnShrinkable",
			"(I)Z",
			arg0
		);
	}
	inline jboolean TableLayout::isColumnStretchable(jint arg0) const
	{
		return callMethod<jboolean>(
			"isColumnStretchable",
			"(I)Z",
			arg0
		);
	}
	inline jboolean TableLayout::isShrinkAllColumns() const
	{
		return callMethod<jboolean>(
			"isShrinkAllColumns",
			"()Z"
		);
	}
	inline jboolean TableLayout::isStretchAllColumns() const
	{
		return callMethod<jboolean>(
			"isStretchAllColumns",
			"()Z"
		);
	}
	inline void TableLayout::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	inline void TableLayout::setColumnCollapsed(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setColumnCollapsed",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void TableLayout::setColumnShrinkable(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setColumnShrinkable",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void TableLayout::setColumnStretchable(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setColumnStretchable",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void TableLayout::setOnHierarchyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.object()
		);
	}
	inline void TableLayout::setShrinkAllColumns(jboolean arg0) const
	{
		callMethod<void>(
			"setShrinkAllColumns",
			"(Z)V",
			arg0
		);
	}
	inline void TableLayout::setStretchAllColumns(jboolean arg0) const
	{
		callMethod<void>(
			"setStretchAllColumns",
			"(Z)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

