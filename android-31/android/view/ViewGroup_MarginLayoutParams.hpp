#pragma once

#include "../content/Context.def.hpp"
#include "./ViewGroup_LayoutParams.def.hpp"
#include "./ViewGroup_MarginLayoutParams.def.hpp"

namespace android::view
{
	// Fields
	inline jint ViewGroup_MarginLayoutParams::bottomMargin()
	{
		return getField<jint>(
			"bottomMargin"
		);
	}
	inline jint ViewGroup_MarginLayoutParams::leftMargin()
	{
		return getField<jint>(
			"leftMargin"
		);
	}
	inline jint ViewGroup_MarginLayoutParams::rightMargin()
	{
		return getField<jint>(
			"rightMargin"
		);
	}
	inline jint ViewGroup_MarginLayoutParams::topMargin()
	{
		return getField<jint>(
			"topMargin"
		);
	}
	
	// Constructors
	inline ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(android::view::ViewGroup_MarginLayoutParams &arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	inline ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.view.ViewGroup$MarginLayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint ViewGroup_MarginLayoutParams::getLayoutDirection() const
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	inline jint ViewGroup_MarginLayoutParams::getMarginEnd() const
	{
		return callMethod<jint>(
			"getMarginEnd",
			"()I"
		);
	}
	inline jint ViewGroup_MarginLayoutParams::getMarginStart() const
	{
		return callMethod<jint>(
			"getMarginStart",
			"()I"
		);
	}
	inline jboolean ViewGroup_MarginLayoutParams::isMarginRelative() const
	{
		return callMethod<jboolean>(
			"isMarginRelative",
			"()Z"
		);
	}
	inline void ViewGroup_MarginLayoutParams::resolveLayoutDirection(jint arg0) const
	{
		callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup_MarginLayoutParams::setLayoutDirection(jint arg0) const
	{
		callMethod<void>(
			"setLayoutDirection",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup_MarginLayoutParams::setMarginEnd(jint arg0) const
	{
		callMethod<void>(
			"setMarginEnd",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup_MarginLayoutParams::setMarginStart(jint arg0) const
	{
		callMethod<void>(
			"setMarginStart",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup_MarginLayoutParams::setMargins(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setMargins",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::view

// Base class headers
#include "./ViewGroup_LayoutParams.hpp"

