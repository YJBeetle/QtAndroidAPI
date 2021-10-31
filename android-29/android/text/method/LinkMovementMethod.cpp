#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"
#include "./LinkMovementMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QAndroidJniObject forward
	LinkMovementMethod::LinkMovementMethod(QAndroidJniObject obj) : android::text::method::ScrollingMovementMethod(obj) {}
	
	// Constructors
	LinkMovementMethod::LinkMovementMethod()
		: android::text::method::ScrollingMovementMethod(
			"android.text.method.LinkMovementMethod",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject LinkMovementMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.LinkMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	jboolean LinkMovementMethod::canSelectArbitrarily()
	{
		return callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	void LinkMovementMethod::initialize(android::widget::TextView arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void LinkMovementMethod::onTakeFocus(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2)
	{
		callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean LinkMovementMethod::onTouchEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2)
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

