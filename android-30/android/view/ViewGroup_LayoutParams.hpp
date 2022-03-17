#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "./animation/LayoutAnimationController_AnimationParameters.def.hpp"
#include "./ViewGroup_LayoutParams.def.hpp"

namespace android::view
{
	// Fields
	inline jint ViewGroup_LayoutParams::FILL_PARENT()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup$LayoutParams",
			"FILL_PARENT"
		);
	}
	inline jint ViewGroup_LayoutParams::MATCH_PARENT()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup$LayoutParams",
			"MATCH_PARENT"
		);
	}
	inline jint ViewGroup_LayoutParams::WRAP_CONTENT()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup$LayoutParams",
			"WRAP_CONTENT"
		);
	}
	inline jint ViewGroup_LayoutParams::height()
	{
		return getField<jint>(
			"height"
		);
	}
	inline android::view::animation::LayoutAnimationController_AnimationParameters ViewGroup_LayoutParams::layoutAnimationParameters()
	{
		return getObjectField(
			"layoutAnimationParameters",
			"Landroid/view/animation/LayoutAnimationController$AnimationParameters;"
		);
	}
	inline jint ViewGroup_LayoutParams::width()
	{
		return getField<jint>(
			"width"
		);
	}
	
	// Constructors
	inline ViewGroup_LayoutParams::ViewGroup_LayoutParams(android::view::ViewGroup_LayoutParams &arg0)
		: JObject(
			"android.view.ViewGroup$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline ViewGroup_LayoutParams::ViewGroup_LayoutParams(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.ViewGroup$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ViewGroup_LayoutParams::ViewGroup_LayoutParams(jint arg0, jint arg1)
		: JObject(
			"android.view.ViewGroup$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline void ViewGroup_LayoutParams::resolveLayoutDirection(jint arg0) const
	{
		callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

// Base class headers

