#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "../../JString.hpp"
#include "./LinearLayout.hpp"

namespace android::widget
{
	// Fields
	jint LinearLayout::HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"HORIZONTAL"
		);
	}
	jint LinearLayout::SHOW_DIVIDER_BEGINNING()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_BEGINNING"
		);
	}
	jint LinearLayout::SHOW_DIVIDER_END()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_END"
		);
	}
	jint LinearLayout::SHOW_DIVIDER_MIDDLE()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_MIDDLE"
		);
	}
	jint LinearLayout::SHOW_DIVIDER_NONE()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_NONE"
		);
	}
	jint LinearLayout::VERTICAL()
	{
		return getStaticField<jint>(
			"android.widget.LinearLayout",
			"VERTICAL"
		);
	}
	
	// QJniObject forward
	LinearLayout::LinearLayout(QJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	LinearLayout::LinearLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	LinearLayout::LinearLayout(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	LinearLayout::LinearLayout(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	LinearLayout::LinearLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	android::widget::LinearLayout_LayoutParams LinearLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;",
			arg0.object()
		);
	}
	JString LinearLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint LinearLayout::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint LinearLayout::getBaselineAlignedChildIndex() const
	{
		return callMethod<jint>(
			"getBaselineAlignedChildIndex",
			"()I"
		);
	}
	android::graphics::drawable::Drawable LinearLayout::getDividerDrawable() const
	{
		return callObjectMethod(
			"getDividerDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint LinearLayout::getDividerPadding() const
	{
		return callMethod<jint>(
			"getDividerPadding",
			"()I"
		);
	}
	jint LinearLayout::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint LinearLayout::getOrientation() const
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint LinearLayout::getShowDividers() const
	{
		return callMethod<jint>(
			"getShowDividers",
			"()I"
		);
	}
	jfloat LinearLayout::getWeightSum() const
	{
		return callMethod<jfloat>(
			"getWeightSum",
			"()F"
		);
	}
	jboolean LinearLayout::isBaselineAligned() const
	{
		return callMethod<jboolean>(
			"isBaselineAligned",
			"()Z"
		);
	}
	jboolean LinearLayout::isMeasureWithLargestChildEnabled() const
	{
		return callMethod<jboolean>(
			"isMeasureWithLargestChildEnabled",
			"()Z"
		);
	}
	void LinearLayout::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setBaselineAligned(jboolean arg0) const
	{
		callMethod<void>(
			"setBaselineAligned",
			"(Z)V",
			arg0
		);
	}
	void LinearLayout::setBaselineAlignedChildIndex(jint arg0) const
	{
		callMethod<void>(
			"setBaselineAlignedChildIndex",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setDividerDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setDividerDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void LinearLayout::setDividerPadding(jint arg0) const
	{
		callMethod<void>(
			"setDividerPadding",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setHorizontalGravity(jint arg0) const
	{
		callMethod<void>(
			"setHorizontalGravity",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setMeasureWithLargestChildEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setMeasureWithLargestChildEnabled",
			"(Z)V",
			arg0
		);
	}
	void LinearLayout::setOrientation(jint arg0) const
	{
		callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setShowDividers(jint arg0) const
	{
		callMethod<void>(
			"setShowDividers",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setVerticalGravity(jint arg0) const
	{
		callMethod<void>(
			"setVerticalGravity",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setWeightSum(jfloat arg0) const
	{
		callMethod<void>(
			"setWeightSum",
			"(F)V",
			arg0
		);
	}
	jboolean LinearLayout::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace android::widget

