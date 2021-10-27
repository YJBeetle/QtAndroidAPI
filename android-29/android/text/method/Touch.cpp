#include "../Layout.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../widget/TextView.hpp"
#include "./Touch.hpp"

namespace android::text::method
{
	// Fields
	
	Touch::Touch(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Touch::getInitialScrollX(android::widget::TextView arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.Touch",
			"getInitialScrollX",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Touch::getInitialScrollY(android::widget::TextView arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.Touch",
			"getInitialScrollY",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Touch::onTouchEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.method.Touch",
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Touch::scrollTo(android::widget::TextView arg0, android::text::Layout arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.method.Touch",
			"scrollTo",
			"(Landroid/widget/TextView;Landroid/text/Layout;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
} // namespace android::text::method

