#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewGroup_MarginLayoutParams.def.hpp"
#include "./GridLayout_Spec.def.hpp"
#include "../../JObject.hpp"
#include "./GridLayout_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	inline android::widget::GridLayout_Spec GridLayout_LayoutParams::columnSpec()
	{
		return getObjectField(
			"columnSpec",
			"Landroid/widget/GridLayout$Spec;"
		);
	}
	inline android::widget::GridLayout_Spec GridLayout_LayoutParams::rowSpec()
	{
		return getObjectField(
			"rowSpec",
			"Landroid/widget/GridLayout$Spec;"
		);
	}
	
	// Constructors
	inline GridLayout_LayoutParams::GridLayout_LayoutParams()
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"()V"
		) {}
	inline GridLayout_LayoutParams::GridLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline GridLayout_LayoutParams::GridLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	inline GridLayout_LayoutParams::GridLayout_LayoutParams(android::widget::GridLayout_LayoutParams &arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/widget/GridLayout$LayoutParams;)V",
			arg0.object()
		) {}
	inline GridLayout_LayoutParams::GridLayout_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GridLayout_LayoutParams::GridLayout_LayoutParams(android::widget::GridLayout_Spec arg0, android::widget::GridLayout_Spec arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/widget/GridLayout$Spec;Landroid/widget/GridLayout$Spec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean GridLayout_LayoutParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint GridLayout_LayoutParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void GridLayout_LayoutParams::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
