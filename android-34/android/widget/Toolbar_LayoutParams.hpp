#pragma once

#include "../app/ActionBar_LayoutParams.def.hpp"
#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewGroup_MarginLayoutParams.def.hpp"
#include "./Toolbar_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Toolbar_LayoutParams::Toolbar_LayoutParams(android::app::ActionBar_LayoutParams arg0)
		: android::app::ActionBar_LayoutParams(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/app/ActionBar$LayoutParams;)V",
			arg0.object()
		) {}
	inline Toolbar_LayoutParams::Toolbar_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::app::ActionBar_LayoutParams(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline Toolbar_LayoutParams::Toolbar_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::app::ActionBar_LayoutParams(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	inline Toolbar_LayoutParams::Toolbar_LayoutParams(android::widget::Toolbar_LayoutParams &arg0)
		: android::app::ActionBar_LayoutParams(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/widget/Toolbar$LayoutParams;)V",
			arg0.object()
		) {}
	inline Toolbar_LayoutParams::Toolbar_LayoutParams(jint arg0)
		: android::app::ActionBar_LayoutParams(
			"android.widget.Toolbar$LayoutParams",
			"(I)V",
			arg0
		) {}
	inline Toolbar_LayoutParams::Toolbar_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::app::ActionBar_LayoutParams(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Toolbar_LayoutParams::Toolbar_LayoutParams(jint arg0, jint arg1)
		: android::app::ActionBar_LayoutParams(
			"android.widget.Toolbar$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	inline Toolbar_LayoutParams::Toolbar_LayoutParams(jint arg0, jint arg1, jint arg2)
		: android::app::ActionBar_LayoutParams(
			"android.widget.Toolbar$LayoutParams",
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
#include "../app/ActionBar_LayoutParams.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
