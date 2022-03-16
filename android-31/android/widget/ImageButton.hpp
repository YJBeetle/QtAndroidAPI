#pragma once

#include "../content/Context.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/PointerIcon.def.hpp"
#include "../../JString.hpp"
#include "./ImageButton.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ImageButton::ImageButton(android::content::Context arg0)
		: android::widget::ImageView(
			"android.widget.ImageButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ImageButton::ImageButton(android::content::Context arg0, JObject arg1)
		: android::widget::ImageView(
			"android.widget.ImageButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ImageButton::ImageButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::ImageView(
			"android.widget.ImageButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ImageButton::ImageButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::ImageView(
			"android.widget.ImageButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString ImageButton::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::PointerIcon ImageButton::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
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
#include "./ImageView.hpp"

