#pragma once

#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./Gallery_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Gallery_LayoutParams::Gallery_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.Gallery$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline Gallery_LayoutParams::Gallery_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.Gallery$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Gallery_LayoutParams::Gallery_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.Gallery$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers
#include "../view/ViewGroup_LayoutParams.hpp"

