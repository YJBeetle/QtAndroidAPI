#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"
#include "./ScrollingMovementMethod.hpp"

namespace android::text::method
{
	// Fields
	
	ScrollingMovementMethod::ScrollingMovementMethod(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScrollingMovementMethod::ScrollingMovementMethod()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.ScrollingMovementMethod",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ScrollingMovementMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.ScrollingMovementMethod",
			"getInstance",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	void ScrollingMovementMethod::onTakeFocus(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean ScrollingMovementMethod::onTouchEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2)
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

