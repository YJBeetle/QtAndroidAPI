#include "./TextKeyListener_Capitalize.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"
#include "./MultiTapKeyListener.hpp"

namespace android::text::method
{
	// Fields
	
	MultiTapKeyListener::MultiTapKeyListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MultiTapKeyListener::MultiTapKeyListener(android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.MultiTapKeyListener",
			"(Landroid/text/method/TextKeyListener$Capitalize;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject MultiTapKeyListener::getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.MultiTapKeyListener",
			"getInstance",
			"(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/MultiTapKeyListener;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint MultiTapKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jboolean MultiTapKeyListener::onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3)
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
	void MultiTapKeyListener::onSpanAdded(__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onSpanAdded",
			"(Landroid/text/Spannable;Ljava/lang/Object;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void MultiTapKeyListener::onSpanChanged(__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"onSpanChanged",
			"(Landroid/text/Spannable;Ljava/lang/Object;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void MultiTapKeyListener::onSpanRemoved(__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onSpanRemoved",
			"(Landroid/text/Spannable;Ljava/lang/Object;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::text::method

