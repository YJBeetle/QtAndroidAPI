#pragma once

#include "../content/Context.def.hpp"
#include "./TextView.def.hpp"
#include "../../JString.hpp"
#include "./TwoLineListItem.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline TwoLineListItem::TwoLineListItem(android::content::Context arg0)
		: android::widget::RelativeLayout(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TwoLineListItem::TwoLineListItem(android::content::Context arg0, JObject arg1)
		: android::widget::RelativeLayout(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TwoLineListItem::TwoLineListItem(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::RelativeLayout(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline TwoLineListItem::TwoLineListItem(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::RelativeLayout(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString TwoLineListItem::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::widget::TextView TwoLineListItem::getText1() const
	{
		return callObjectMethod(
			"getText1",
			"()Landroid/widget/TextView;"
		);
	}
	inline android::widget::TextView TwoLineListItem::getText2() const
	{
		return callObjectMethod(
			"getText2",
			"()Landroid/widget/TextView;"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./RelativeLayout.hpp"

