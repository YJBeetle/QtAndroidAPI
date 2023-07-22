#pragma once

#include "../content/Context.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/PointerIcon.def.hpp"
#include "../../JString.hpp"
#include "./Button.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Button::Button(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.Button",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Button::Button(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Button::Button(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline Button::Button(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString Button::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::PointerIcon Button::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
