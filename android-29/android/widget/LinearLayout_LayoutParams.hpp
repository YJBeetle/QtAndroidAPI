#pragma once

#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewGroup_MarginLayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./LinearLayout_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	inline jint LinearLayout_LayoutParams::gravity()
	{
		return getField<jint>(
			"gravity"
		);
	}
	inline jfloat LinearLayout_LayoutParams::weight()
	{
		return getField<jfloat>(
			"weight"
		);
	}
	
	// Constructors
	inline LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	inline LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::widget::LinearLayout_LayoutParams &arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/widget/LinearLayout$LayoutParams;)V",
			arg0.object()
		) {}
	inline LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline LinearLayout_LayoutParams::LinearLayout_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	inline LinearLayout_LayoutParams::LinearLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline JString LinearLayout_LayoutParams::debug(JString arg0) const
	{
		return callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
