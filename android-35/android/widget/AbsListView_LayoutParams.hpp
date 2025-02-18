#pragma once

#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./AbsListView_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AbsListView_LayoutParams::AbsListView_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsListView$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline AbsListView_LayoutParams::AbsListView_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsListView$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AbsListView_LayoutParams::AbsListView_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsListView$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	inline AbsListView_LayoutParams::AbsListView_LayoutParams(jint arg0, jint arg1, jint arg2)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsListView$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers
#include "../view/ViewGroup_LayoutParams.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
