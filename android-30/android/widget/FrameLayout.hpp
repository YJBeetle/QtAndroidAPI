#pragma once

#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./FrameLayout_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./FrameLayout.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline FrameLayout::FrameLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline FrameLayout::FrameLayout(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline FrameLayout::FrameLayout(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline FrameLayout::FrameLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::widget::FrameLayout_LayoutParams FrameLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;",
			arg0.object()
		);
	}
	inline JString FrameLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean FrameLayout::getConsiderGoneChildrenWhenMeasuring() const
	{
		return callMethod<jboolean>(
			"getConsiderGoneChildrenWhenMeasuring",
			"()Z"
		);
	}
	inline jboolean FrameLayout::getMeasureAllChildren() const
	{
		return callMethod<jboolean>(
			"getMeasureAllChildren",
			"()Z"
		);
	}
	inline void FrameLayout::setForegroundGravity(jint arg0) const
	{
		callMethod<void>(
			"setForegroundGravity",
			"(I)V",
			arg0
		);
	}
	inline void FrameLayout::setMeasureAllChildren(jboolean arg0) const
	{
		callMethod<void>(
			"setMeasureAllChildren",
			"(Z)V",
			arg0
		);
	}
	inline jboolean FrameLayout::shouldDelayChildPressedState() const
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

