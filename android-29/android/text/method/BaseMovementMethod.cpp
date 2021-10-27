#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"
#include "./BaseMovementMethod.hpp"

namespace android::text::method
{
	// Fields
	
	BaseMovementMethod::BaseMovementMethod(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BaseMovementMethod::BaseMovementMethod()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.BaseMovementMethod",
			"()V"
		);
	}
	
	// Methods
	jboolean BaseMovementMethod::canSelectArbitrarily()
	{
		return __thiz.callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	void BaseMovementMethod::initialize(android::widget::TextView arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onGenericMotionEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onKeyDown(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onKeyOther(android::widget::TextView arg0, __JniBaseClass arg1, android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onKeyUp(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void BaseMovementMethod::onTakeFocus(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean BaseMovementMethod::onTouchEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean BaseMovementMethod::onTrackballEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::text::method

