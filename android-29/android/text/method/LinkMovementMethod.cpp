#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"
#include "./LinkMovementMethod.hpp"

namespace android::text::method
{
	// Fields
	
	LinkMovementMethod::LinkMovementMethod(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinkMovementMethod::LinkMovementMethod()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.LinkMovementMethod",
			"()V"
		);
	}
	
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
		return __thiz.callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	void LinkMovementMethod::initialize(android::widget::TextView arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LinkMovementMethod::onTakeFocus(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean LinkMovementMethod::onTouchEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::text::method

