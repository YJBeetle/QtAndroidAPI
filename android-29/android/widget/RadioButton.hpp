#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./RadioButton.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline RadioButton::RadioButton(android::content::Context arg0)
		: android::widget::CompoundButton(
			"android.widget.RadioButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline RadioButton::RadioButton(android::content::Context arg0, JObject arg1)
		: android::widget::CompoundButton(
			"android.widget.RadioButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline RadioButton::RadioButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::CompoundButton(
			"android.widget.RadioButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline RadioButton::RadioButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::CompoundButton(
			"android.widget.RadioButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString RadioButton::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void RadioButton::toggle() const
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./Button.hpp"
#include "./CompoundButton.hpp"

