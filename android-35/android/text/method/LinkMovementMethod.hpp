#pragma once

#include "../../view/KeyEvent.def.hpp"
#include "../../view/MotionEvent.def.hpp"
#include "../../widget/TextView.def.hpp"
#include "./LinkMovementMethod.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline LinkMovementMethod::LinkMovementMethod()
		: android::text::method::ScrollingMovementMethod(
			"android.text.method.LinkMovementMethod",
			"()V"
		) {}
	
	// Methods
	inline JObject LinkMovementMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.LinkMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	inline jboolean LinkMovementMethod::canSelectArbitrarily() const
	{
		return callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	inline void LinkMovementMethod::initialize(android::widget::TextView arg0, JObject arg1) const
	{
		callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LinkMovementMethod::onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2) const
	{
		callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean LinkMovementMethod::onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const
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
#include "./ScrollingMovementMethod.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::method;
#endif
