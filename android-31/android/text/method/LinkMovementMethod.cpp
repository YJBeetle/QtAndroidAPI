#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"
#include "./LinkMovementMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	LinkMovementMethod::LinkMovementMethod()
		: android::text::method::ScrollingMovementMethod(
			"android.text.method.LinkMovementMethod",
			"()V"
		) {}
	
	// Methods
	JObject LinkMovementMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.LinkMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	jboolean LinkMovementMethod::canSelectArbitrarily() const
	{
		return callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	void LinkMovementMethod::initialize(android::widget::TextView arg0, JObject arg1) const
	{
		callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void LinkMovementMethod::onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2) const
	{
		callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean LinkMovementMethod::onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const
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

