#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"
#include "./NumberKeyListener.hpp"

namespace android::text::method
{
	// Fields
	
	NumberKeyListener::NumberKeyListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NumberKeyListener::NumberKeyListener()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.NumberKeyListener",
			"()V"
		);
	}
	
	// Methods
	jstring NumberKeyListener::filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jstring NumberKeyListener::filter(const QString &arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jboolean NumberKeyListener::onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
} // namespace android::text::method

