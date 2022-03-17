#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../../JString.hpp"
#include "./ToggleButton.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ToggleButton::ToggleButton(android::content::Context arg0)
		: android::widget::CompoundButton(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ToggleButton::ToggleButton(android::content::Context arg0, JObject arg1)
		: android::widget::CompoundButton(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ToggleButton::ToggleButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::CompoundButton(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ToggleButton::ToggleButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::CompoundButton(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString ToggleButton::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString ToggleButton::getTextOff() const
	{
		return callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString ToggleButton::getTextOn() const
	{
		return callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void ToggleButton::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ToggleButton::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	inline void ToggleButton::setTextOff(JString arg0) const
	{
		callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void ToggleButton::setTextOn(JString arg0) const
	{
		callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./Button.hpp"
#include "./CompoundButton.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
