#include "../../graphics/Rect.hpp"
#include "../../view/View.hpp"
#include "./PasswordTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QJniObject forward
	PasswordTransformationMethod::PasswordTransformationMethod(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PasswordTransformationMethod::PasswordTransformationMethod()
		: __JniBaseClass(
			"android.text.method.PasswordTransformationMethod",
			"()V"
		) {}
	
	// Methods
	android::text::method::PasswordTransformationMethod PasswordTransformationMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.PasswordTransformationMethod",
			"getInstance",
			"()Landroid/text/method/PasswordTransformationMethod;"
		);
	}
	void PasswordTransformationMethod::afterTextChanged(__JniBaseClass arg0)
	{
		callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	void PasswordTransformationMethod::beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
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
		return callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	void PasswordTransformationMethod::onFocusChanged(android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4)
	{
		callMethod<void>(
			"onFocusChanged",
			"(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void PasswordTransformationMethod::onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::text::method

