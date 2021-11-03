#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"
#include "./ArrowKeyMovementMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QAndroidJniObject forward
	ArrowKeyMovementMethod::ArrowKeyMovementMethod(QAndroidJniObject obj) : android::text::method::BaseMovementMethod(obj) {}
	
	// Constructors
	ArrowKeyMovementMethod::ArrowKeyMovementMethod()
		: android::text::method::BaseMovementMethod(
			"android.text.method.ArrowKeyMovementMethod",
			"()V"
		) {}
	
	// Methods
	JObject ArrowKeyMovementMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.ArrowKeyMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	jboolean ArrowKeyMovementMethod::canSelectArbitrarily()
	{
		return callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	void ArrowKeyMovementMethod::initialize(android::widget::TextView arg0, JObject arg1)
	{
		callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ArrowKeyMovementMethod::onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2)
	{
		callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean ArrowKeyMovementMethod::onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2)
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

