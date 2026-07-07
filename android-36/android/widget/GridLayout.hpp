#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./GridLayout_Alignment.def.hpp"
#include "./GridLayout_LayoutParams.def.hpp"
#include "./GridLayout_Spec.def.hpp"
#include "../../JString.hpp"
#include "./GridLayout.def.hpp"

namespace android::widget
{
	// Fields
	inline jint GridLayout::ALIGN_BOUNDS()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"ALIGN_BOUNDS"
		);
	}
	inline jint GridLayout::ALIGN_MARGINS()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"ALIGN_MARGINS"
		);
	}
	inline android::widget::GridLayout_Alignment GridLayout::BASELINE()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"BASELINE",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	inline android::widget::GridLayout_Alignment GridLayout::BOTTOM()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"BOTTOM",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	inline android::widget::GridLayout_Alignment GridLayout::CENTER()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"CENTER",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	inline android::widget::GridLayout_Alignment GridLayout::END()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"END",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	inline android::widget::GridLayout_Alignment GridLayout::FILL()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"FILL",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	inline jint GridLayout::HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"HORIZONTAL"
		);
	}
	inline android::widget::GridLayout_Alignment GridLayout::LEFT()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"LEFT",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	inline android::widget::GridLayout_Alignment GridLayout::RIGHT()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"RIGHT",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	inline android::widget::GridLayout_Alignment GridLayout::START()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"START",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	inline android::widget::GridLayout_Alignment GridLayout::TOP()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"TOP",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	inline jint GridLayout::UNDEFINED()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"UNDEFINED"
		);
	}
	inline jint GridLayout::VERTICAL()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"VERTICAL"
		);
	}
	
	// Constructors
	inline GridLayout::GridLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.GridLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline GridLayout::GridLayout(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.GridLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GridLayout::GridLayout(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.GridLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline GridLayout::GridLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.GridLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::widget::GridLayout_Spec GridLayout::spec(jint arg0)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(I)Landroid/widget/GridLayout$Spec;",
			arg0
		);
	}
	inline android::widget::GridLayout_Spec GridLayout::spec(jint arg0, android::widget::GridLayout_Alignment arg1)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(ILandroid/widget/GridLayout$Alignment;)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1.object()
		);
	}
	inline android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jfloat arg1)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IF)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1
		);
	}
	inline android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(II)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1
		);
	}
	inline android::widget::GridLayout_Spec GridLayout::spec(jint arg0, android::widget::GridLayout_Alignment arg1, jfloat arg2)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(ILandroid/widget/GridLayout$Alignment;F)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IILandroid/widget/GridLayout$Alignment;)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jint arg1, jfloat arg2)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IIF)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2, jfloat arg3)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IILandroid/widget/GridLayout$Alignment;F)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline android::widget::GridLayout_LayoutParams GridLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/GridLayout$LayoutParams;",
			arg0.object()
		);
	}
	inline JString GridLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint GridLayout::getAlignmentMode() const
	{
		return callMethod<jint>(
			"getAlignmentMode",
			"()I"
		);
	}
	inline jint GridLayout::getColumnCount() const
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	inline jint GridLayout::getOrientation() const
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	inline jint GridLayout::getRowCount() const
	{
		return callMethod<jint>(
			"getRowCount",
			"()I"
		);
	}
	inline jboolean GridLayout::getUseDefaultMargins() const
	{
		return callMethod<jboolean>(
			"getUseDefaultMargins",
			"()Z"
		);
	}
	inline jboolean GridLayout::isColumnOrderPreserved() const
	{
		return callMethod<jboolean>(
			"isColumnOrderPreserved",
			"()Z"
		);
	}
	inline jboolean GridLayout::isRowOrderPreserved() const
	{
		return callMethod<jboolean>(
			"isRowOrderPreserved",
			"()Z"
		);
	}
	inline void GridLayout::onViewAdded(android::view::View arg0) const
	{
		callMethod<void>(
			"onViewAdded",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void GridLayout::onViewRemoved(android::view::View arg0) const
	{
		callMethod<void>(
			"onViewRemoved",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void GridLayout::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	inline void GridLayout::setAlignmentMode(jint arg0) const
	{
		callMethod<void>(
			"setAlignmentMode",
			"(I)V",
			arg0
		);
	}
	inline void GridLayout::setColumnCount(jint arg0) const
	{
		callMethod<void>(
			"setColumnCount",
			"(I)V",
			arg0
		);
	}
	inline void GridLayout::setColumnOrderPreserved(jboolean arg0) const
	{
		callMethod<void>(
			"setColumnOrderPreserved",
			"(Z)V",
			arg0
		);
	}
	inline void GridLayout::setOrientation(jint arg0) const
	{
		callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	inline void GridLayout::setRowCount(jint arg0) const
	{
		callMethod<void>(
			"setRowCount",
			"(I)V",
			arg0
		);
	}
	inline void GridLayout::setRowOrderPreserved(jboolean arg0) const
	{
		callMethod<void>(
			"setRowOrderPreserved",
			"(Z)V",
			arg0
		);
	}
	inline void GridLayout::setUseDefaultMargins(jboolean arg0) const
	{
		callMethod<void>(
			"setUseDefaultMargins",
			"(Z)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
