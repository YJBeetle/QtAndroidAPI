#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "./AnalogClock.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AnalogClock::AnalogClock(android::content::Context arg0)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AnalogClock::AnalogClock(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AnalogClock::AnalogClock(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AnalogClock::AnalogClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"

