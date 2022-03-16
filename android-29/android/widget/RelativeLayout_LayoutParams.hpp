#pragma once

#include "../../JIntArray.hpp"
#include "../content/Context.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewGroup_MarginLayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./RelativeLayout_LayoutParams.def.hpp"

namespace android::widget
{
	// Fields
	inline jboolean RelativeLayout_LayoutParams::alignWithParent()
	{
		return getField<jboolean>(
			"alignWithParent"
		);
	}
	
	// Constructors
	inline RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	inline RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	inline RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::widget::RelativeLayout_LayoutParams &arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/widget/RelativeLayout$LayoutParams;)V",
			arg0.object()
		) {}
	inline RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline void RelativeLayout_LayoutParams::addRule(jint arg0) const
	{
		callMethod<void>(
			"addRule",
			"(I)V",
			arg0
		);
	}
	inline void RelativeLayout_LayoutParams::addRule(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"addRule",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline JString RelativeLayout_LayoutParams::debug(JString arg0) const
	{
		return callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint RelativeLayout_LayoutParams::getRule(jint arg0) const
	{
		return callMethod<jint>(
			"getRule",
			"(I)I",
			arg0
		);
	}
	inline JIntArray RelativeLayout_LayoutParams::getRules() const
	{
		return callObjectMethod(
			"getRules",
			"()[I"
		);
	}
	inline void RelativeLayout_LayoutParams::removeRule(jint arg0) const
	{
		callMethod<void>(
			"removeRule",
			"(I)V",
			arg0
		);
	}
	inline void RelativeLayout_LayoutParams::resolveLayoutDirection(jint arg0) const
	{
		callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

