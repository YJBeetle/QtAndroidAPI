#include "./TextKeyListener_Capitalize.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"
#include "./TextKeyListener.hpp"

namespace android::text::method
{
	// Fields
	
	TextKeyListener::TextKeyListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextKeyListener::TextKeyListener(android::text::method::TextKeyListener_Capitalize &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.TextKeyListener",
			"(Landroid/text/method/TextKeyListener$Capitalize;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void TextKeyListener::clear(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.method.TextKeyListener",
			"clear",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TextKeyListener",
			"getInstance",
			"()Landroid/text/method/TextKeyListener;"
		);
	}
	QAndroidJniObject TextKeyListener::getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TextKeyListener",
			"getInstance",
			"(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/TextKeyListener;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextKeyListener::shouldCap(android::text::method::TextKeyListener_Capitalize arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.method.TextKeyListener",
			"shouldCap",
			"(Landroid/text/method/TextKeyListener$Capitalize;Ljava/lang/CharSequence;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean TextKeyListener::shouldCap(android::text::method::TextKeyListener_Capitalize arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.method.TextKeyListener",
			"shouldCap",
			"(Landroid/text/method/TextKeyListener$Capitalize;Ljava/lang/CharSequence;I)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint TextKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jboolean TextKeyListener::onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3)
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
	jboolean TextKeyListener::onKeyOther(android::view::View arg0, __JniBaseClass arg1, android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean TextKeyListener::onKeyUp(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void TextKeyListener::onSpanAdded(__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3)
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
	void TextKeyListener::onSpanChanged(__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	void TextKeyListener::onSpanRemoved(__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3)
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
	void TextKeyListener::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::text::method

