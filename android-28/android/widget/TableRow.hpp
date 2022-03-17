#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./LinearLayout_LayoutParams.def.hpp"
#include "./TableRow_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./TableRow.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline TableRow::TableRow(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.TableRow",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TableRow::TableRow(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.TableRow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::widget::TableRow_LayoutParams TableRow::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/TableRow$LayoutParams;",
			arg0.object()
		);
	}
	inline JString TableRow::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::View TableRow::getVirtualChildAt(jint arg0) const
	{
		return callObjectMethod(
			"getVirtualChildAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline jint TableRow::getVirtualChildCount() const
	{
		return callMethod<jint>(
			"getVirtualChildCount",
			"()I"
		);
	}
	inline void TableRow::setOnHierarchyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

