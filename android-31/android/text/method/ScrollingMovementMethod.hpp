#pragma once

#include "../../view/MotionEvent.def.hpp"
#include "../../widget/TextView.def.hpp"
#include "./ScrollingMovementMethod.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline ScrollingMovementMethod::ScrollingMovementMethod()
		: android::text::method::BaseMovementMethod(
			"android.text.method.ScrollingMovementMethod",
			"()V"
		) {}
	
	// Methods
	inline JObject ScrollingMovementMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.ScrollingMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	inline void ScrollingMovementMethod::onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2) const
	{
		callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean ScrollingMovementMethod::onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::text::method

// Base class headers
#include "./BaseMovementMethod.hpp"

