#pragma once

#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewGroup_MarginLayoutParams.def.hpp"
#include "./FrameLayout_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	inline jint FrameLayout_LayoutParams::UNSPECIFIED_GRAVITY()
	{
		return getStaticField<jint>(
			"android.widget.FrameLayout$LayoutParams",
			"UNSPECIFIED_GRAVITY"
		);
	}
	inline jint FrameLayout_LayoutParams::gravity()
	{
		return getField<jint>(
			"gravity"
		);
	}
	
	// Constructors
	inline FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	inline FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::widget::FrameLayout_LayoutParams &arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/widget/FrameLayout$LayoutParams;)V",
			arg0.object()
		) {}
	inline FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline FrameLayout_LayoutParams::FrameLayout_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	inline FrameLayout_LayoutParams::FrameLayout_LayoutParams(jint arg0, jint arg1, jint arg2)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
