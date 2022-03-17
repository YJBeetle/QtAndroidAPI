#pragma once

#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./RelativeLayout_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./RelativeLayout.def.hpp"

namespace android::widget
{
	// Fields
	inline jint RelativeLayout::ABOVE()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ABOVE"
		);
	}
	inline jint RelativeLayout::ALIGN_BASELINE()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_BASELINE"
		);
	}
	inline jint RelativeLayout::ALIGN_BOTTOM()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_BOTTOM"
		);
	}
	inline jint RelativeLayout::ALIGN_END()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_END"
		);
	}
	inline jint RelativeLayout::ALIGN_LEFT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_LEFT"
		);
	}
	inline jint RelativeLayout::ALIGN_PARENT_BOTTOM()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_BOTTOM"
		);
	}
	inline jint RelativeLayout::ALIGN_PARENT_END()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_END"
		);
	}
	inline jint RelativeLayout::ALIGN_PARENT_LEFT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_LEFT"
		);
	}
	inline jint RelativeLayout::ALIGN_PARENT_RIGHT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_RIGHT"
		);
	}
	inline jint RelativeLayout::ALIGN_PARENT_START()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_START"
		);
	}
	inline jint RelativeLayout::ALIGN_PARENT_TOP()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_TOP"
		);
	}
	inline jint RelativeLayout::ALIGN_RIGHT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_RIGHT"
		);
	}
	inline jint RelativeLayout::ALIGN_START()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_START"
		);
	}
	inline jint RelativeLayout::ALIGN_TOP()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_TOP"
		);
	}
	inline jint RelativeLayout::BELOW()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"BELOW"
		);
	}
	inline jint RelativeLayout::CENTER_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"CENTER_HORIZONTAL"
		);
	}
	inline jint RelativeLayout::CENTER_IN_PARENT()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"CENTER_IN_PARENT"
		);
	}
	inline jint RelativeLayout::CENTER_VERTICAL()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"CENTER_VERTICAL"
		);
	}
	inline jint RelativeLayout::END_OF()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"END_OF"
		);
	}
	inline jint RelativeLayout::LEFT_OF()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"LEFT_OF"
		);
	}
	inline jint RelativeLayout::RIGHT_OF()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"RIGHT_OF"
		);
	}
	inline jint RelativeLayout::START_OF()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"START_OF"
		);
	}
	inline jint RelativeLayout::TRUE()
	{
		return getStaticField<jint>(
			"android.widget.RelativeLayout",
			"TRUE"
		);
	}
	
	// Constructors
	inline RelativeLayout::RelativeLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline RelativeLayout::RelativeLayout(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline RelativeLayout::RelativeLayout(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline RelativeLayout::RelativeLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::widget::RelativeLayout_LayoutParams RelativeLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;",
			arg0.object()
		);
	}
	inline JString RelativeLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint RelativeLayout::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	inline jint RelativeLayout::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	inline void RelativeLayout::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	inline void RelativeLayout::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	inline void RelativeLayout::setHorizontalGravity(jint arg0) const
	{
		callMethod<void>(
			"setHorizontalGravity",
			"(I)V",
			arg0
		);
	}
	inline void RelativeLayout::setIgnoreGravity(jint arg0) const
	{
		callMethod<void>(
			"setIgnoreGravity",
			"(I)V",
			arg0
		);
	}
	inline void RelativeLayout::setVerticalGravity(jint arg0) const
	{
		callMethod<void>(
			"setVerticalGravity",
			"(I)V",
			arg0
		);
	}
	inline jboolean RelativeLayout::shouldDelayChildPressedState() const
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

