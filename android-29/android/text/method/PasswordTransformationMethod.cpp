#include "../../graphics/Rect.hpp"
#include "../../view/View.hpp"
#include "./PasswordTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	PasswordTransformationMethod::PasswordTransformationMethod(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PasswordTransformationMethod::PasswordTransformationMethod()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.PasswordTransformationMethod",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject PasswordTransformationMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.PasswordTransformationMethod",
			"getInstance",
			"()Landroid/text/method/PasswordTransformationMethod;"
		);
	}
	void PasswordTransformationMethod::afterTextChanged(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object()
		);
	}
	void PasswordTransformationMethod::beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jstring PasswordTransformationMethod::getTransformation(jstring arg0, android::view::View arg1)
	{
		return __thiz.callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	void PasswordTransformationMethod::onFocusChanged(android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4)
	{
		__thiz.callMethod<void>(
			"onFocusChanged",
			"(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void PasswordTransformationMethod::onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::text::method

