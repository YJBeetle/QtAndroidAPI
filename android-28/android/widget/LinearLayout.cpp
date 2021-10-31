#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
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
	
	// QAndroidJniObject forward
	LinearLayout::LinearLayout(QAndroidJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	LinearLayout::LinearLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	LinearLayout::LinearLayout(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	LinearLayout::LinearLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	LinearLayout::LinearLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	android::widget::LinearLayout_LayoutParams LinearLayout::generateLayoutParams(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;",
			arg0.object()
		);
	}
	jstring LinearLayout::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint LinearLayout::getBaseline()
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint LinearLayout::getBaselineAlignedChildIndex()
	{
		return callMethod<jint>(
			"getBaselineAlignedChildIndex",
			"()I"
		);
	}
	android::graphics::drawable::Drawable LinearLayout::getDividerDrawable()
	{
		return callObjectMethod(
			"getDividerDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint LinearLayout::getDividerPadding()
	{
		return callMethod<jint>(
			"getDividerPadding",
			"()I"
		);
	}
	jint LinearLayout::getGravity()
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint LinearLayout::getOrientation()
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint LinearLayout::getShowDividers()
	{
		return callMethod<jint>(
			"getShowDividers",
			"()I"
		);
	}
	jfloat LinearLayout::getWeightSum()
	{
		return callMethod<jfloat>(
			"getWeightSum",
			"()F"
		);
	}
	jboolean LinearLayout::isBaselineAligned()
	{
		return callMethod<jboolean>(
			"isBaselineAligned",
			"()Z"
		);
	}
	jboolean LinearLayout::isMeasureWithLargestChildEnabled()
	{
		return callMethod<jboolean>(
			"isMeasureWithLargestChildEnabled",
			"()Z"
		);
	}
	void LinearLayout::onRtlPropertiesChanged(jint arg0)
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setBaselineAligned(jboolean arg0)
	{
		callMethod<void>(
			"setBaselineAligned",
			"(Z)V",
			arg0
		);
	}
	void LinearLayout::setBaselineAlignedChildIndex(jint arg0)
	{
		callMethod<void>(
			"setBaselineAlignedChildIndex",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setDividerDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setDividerDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void LinearLayout::setDividerPadding(jint arg0)
	{
		callMethod<void>(
			"setDividerPadding",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setGravity(jint arg0)
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setHorizontalGravity(jint arg0)
	{
		callMethod<void>(
			"setHorizontalGravity",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setMeasureWithLargestChildEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setMeasureWithLargestChildEnabled",
			"(Z)V",
			arg0
		);
	}
	void LinearLayout::setOrientation(jint arg0)
	{
		callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setShowDividers(jint arg0)
	{
		callMethod<void>(
			"setShowDividers",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setVerticalGravity(jint arg0)
	{
		callMethod<void>(
			"setVerticalGravity",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setWeightSum(jfloat arg0)
	{
		callMethod<void>(
			"setWeightSum",
			"(F)V",
			arg0
		);
	}
	jboolean LinearLayout::shouldDelayChildPressedState()
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace android::widget

