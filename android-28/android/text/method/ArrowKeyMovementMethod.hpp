#pragma once

#include "../../view/KeyEvent.def.hpp"
#include "../../view/MotionEvent.def.hpp"
#include "../../widget/TextView.def.hpp"
#include "./ArrowKeyMovementMethod.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline ArrowKeyMovementMethod::ArrowKeyMovementMethod()
		: android::text::method::BaseMovementMethod(
			"android.text.method.ArrowKeyMovementMethod",
			"()V"
		) {}
	
	// Methods
	inline JObject ArrowKeyMovementMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.ArrowKeyMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	inline jboolean ArrowKeyMovementMethod::canSelectArbitrarily() const
	{
		return callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	inline void ArrowKeyMovementMethod::initialize(android::widget::TextView arg0, JObject arg1) const
	{
		callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ArrowKeyMovementMethod::onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2) const
	{
		callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean ArrowKeyMovementMethod::onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const
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

