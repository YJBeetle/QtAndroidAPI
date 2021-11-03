#include "../../graphics/Rect.hpp"
#include "../../view/View.hpp"
#include "../../../JString.hpp"
#include "./PasswordTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QJniObject forward
	PasswordTransformationMethod::PasswordTransformationMethod(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PasswordTransformationMethod::PasswordTransformationMethod()
		: JObject(
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
	void PasswordTransformationMethod::afterTextChanged(JObject arg0)
	{
		callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	void PasswordTransformationMethod::beforeTextChanged(JString arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	JString PasswordTransformationMethod::getTransformation(JString arg0, android::view::View arg1)
	{
		return callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void PasswordTransformationMethod::onFocusChanged(android::view::View arg0, JString arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4)
	{
		callMethod<void>(
			"onFocusChanged",
			"(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4.object()
		);
	}
	void PasswordTransformationMethod::onTextChanged(JString arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::text::method

