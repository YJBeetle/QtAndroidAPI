#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./LinearLayout_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./LinearLayout.def.hpp"

namespace android::widget
{
	// Fields
	inline jint LinearLayout::HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"HORIZONTAL"
		);
	}
	inline jint LinearLayout::SHOW_DIVIDER_BEGINNING()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_BEGINNING"
		);
	}
	inline jint LinearLayout::SHOW_DIVIDER_END()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_END"
		);
	}
	inline jint LinearLayout::SHOW_DIVIDER_MIDDLE()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_MIDDLE"
		);
	}
	inline jint LinearLayout::SHOW_DIVIDER_NONE()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_NONE"
		);
	}
	inline jint LinearLayout::VERTICAL()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"VERTICAL"
		);
	}
	
	// Constructors
	inline LinearLayout::LinearLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline LinearLayout::LinearLayout(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline LinearLayout::LinearLayout(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline LinearLayout::LinearLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::widget::LinearLayout_LayoutParams LinearLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;",
			arg0.object()
		);
	}
	inline JString LinearLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint LinearLayout::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	inline jint LinearLayout::getBaselineAlignedChildIndex() const
	{
		return callMethod<jint>(
			"getBaselineAlignedChildIndex",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable LinearLayout::getDividerDrawable() const
	{
		return callObjectMethod(
			"getDividerDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint LinearLayout::getDividerPadding() const
	{
		return callMethod<jint>(
			"getDividerPadding",
			"()I"
		);
	}
	inline jint LinearLayout::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	inline jint LinearLayout::getOrientation() const
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	inline jint LinearLayout::getShowDividers() const
	{
		return callMethod<jint>(
			"getShowDividers",
			"()I"
		);
	}
	inline jfloat LinearLayout::getWeightSum() const
	{
		return callMethod<jfloat>(
			"getWeightSum",
			"()F"
		);
	}
	inline jboolean LinearLayout::isBaselineAligned() const
	{
		return callMethod<jboolean>(
			"isBaselineAligned",
			"()Z"
		);
	}
	inline jboolean LinearLayout::isMeasureWithLargestChildEnabled() const
	{
		return callMethod<jboolean>(
			"isMeasureWithLargestChildEnabled",
			"()Z"
		);
	}
	inline void LinearLayout::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	inline void LinearLayout::setBaselineAligned(jboolean arg0) const
	{
		callMethod<void>(
			"setBaselineAligned",
			"(Z)V",
			arg0
		);
	}
	inline void LinearLayout::setBaselineAlignedChildIndex(jint arg0) const
	{
		callMethod<void>(
			"setBaselineAlignedChildIndex",
			"(I)V",
			arg0
		);
	}
	inline void LinearLayout::setDividerDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setDividerDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void LinearLayout::setDividerPadding(jint arg0) const
	{
		callMethod<void>(
			"setDividerPadding",
			"(I)V",
			arg0
		);
	}
	inline void LinearLayout::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	inline void LinearLayout::setHorizontalGravity(jint arg0) const
	{
		callMethod<void>(
			"setHorizontalGravity",
			"(I)V",
			arg0
		);
	}
	inline void LinearLayout::setMeasureWithLargestChildEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setMeasureWithLargestChildEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void LinearLayout::setOrientation(jint arg0) const
	{
		callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	inline void LinearLayout::setShowDividers(jint arg0) const
	{
		callMethod<void>(
			"setShowDividers",
			"(I)V",
			arg0
		);
	}
	inline void LinearLayout::setVerticalGravity(jint arg0) const
	{
		callMethod<void>(
			"setVerticalGravity",
			"(I)V",
			arg0
		);
	}
	inline void LinearLayout::setWeightSum(jfloat arg0) const
	{
		callMethod<void>(
			"setWeightSum",
			"(F)V",
			arg0
		);
	}
	inline jboolean LinearLayout::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

