#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./DigitalClock.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline DigitalClock::DigitalClock(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.DigitalClock",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline DigitalClock::DigitalClock(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.DigitalClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JString DigitalClock::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
