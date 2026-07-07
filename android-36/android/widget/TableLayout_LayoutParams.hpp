#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewGroup_MarginLayoutParams.def.hpp"
#include "./TableLayout_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline TableLayout_LayoutParams::TableLayout_LayoutParams()
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableLayout$LayoutParams",
			"()V"
		) {}
	inline TableLayout_LayoutParams::TableLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline TableLayout_LayoutParams::TableLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	inline TableLayout_LayoutParams::TableLayout_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TableLayout_LayoutParams::TableLayout_LayoutParams(jint arg0, jint arg1)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	inline TableLayout_LayoutParams::TableLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableLayout$LayoutParams",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
