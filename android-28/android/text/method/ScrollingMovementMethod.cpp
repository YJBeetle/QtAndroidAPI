#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"
#include "./ScrollingMovementMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QAndroidJniObject forward
	ScrollingMovementMethod::ScrollingMovementMethod(QAndroidJniObject obj) : android::text::method::BaseMovementMethod(obj) {}
	
	// Constructors
	ScrollingMovementMethod::ScrollingMovementMethod()
		: android::text::method::BaseMovementMethod(
			"android.text.method.ScrollingMovementMethod",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass ScrollingMovementMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.ScrollingMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	void ScrollingMovementMethod::onTakeFocus(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2)
	{
		callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean ScrollingMovementMethod::onTouchEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2)
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

