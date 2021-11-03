#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"
#include "./BaseMovementMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QJniObject forward
	BaseMovementMethod::BaseMovementMethod(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BaseMovementMethod::BaseMovementMethod()
		: JObject(
			"android.text.method.BaseMovementMethod",
			"()V"
		) {}
	
	// Methods
	jboolean BaseMovementMethod::canSelectArbitrarily()
	{
		return callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	void BaseMovementMethod::initialize(android::widget::TextView arg0, JObject arg1)
	{
		callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean BaseMovementMethod::onGenericMotionEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean BaseMovementMethod::onKeyDown(android::widget::TextView arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jboolean BaseMovementMethod::onKeyOther(android::widget::TextView arg0, JObject arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean BaseMovementMethod::onKeyUp(android::widget::TextView arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	void BaseMovementMethod::onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2)
	{
		callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean BaseMovementMethod::onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean BaseMovementMethod::onTrackballEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2)
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::text::method

