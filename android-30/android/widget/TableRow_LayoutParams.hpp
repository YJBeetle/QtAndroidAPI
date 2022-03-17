#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewGroup_MarginLayoutParams.def.hpp"
#include "./TableRow_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	inline jint TableRow_LayoutParams::column()
	{
		return getField<jint>(
			"column"
		);
	}
	inline jint TableRow_LayoutParams::span()
	{
		return getField<jint>(
			"span"
		);
	}
	
	// Constructors
	inline TableRow_LayoutParams::TableRow_LayoutParams()
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableRow$LayoutParams",
			"()V"
		) {}
	inline TableRow_LayoutParams::TableRow_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableRow$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline TableRow_LayoutParams::TableRow_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableRow$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	inline TableRow_LayoutParams::TableRow_LayoutParams(jint arg0)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableRow$LayoutParams",
			"(I)V",
			arg0
		) {}
	inline TableRow_LayoutParams::TableRow_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableRow$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TableRow_LayoutParams::TableRow_LayoutParams(jint arg0, jint arg1)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableRow$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	inline TableRow_LayoutParams::TableRow_LayoutParams(jint arg0, jint arg1, jfloat arg2)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.TableRow$LayoutParams",
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
