#pragma once

#include "../../graphics/Rect.def.hpp"
#include "../../view/View.def.hpp"
#include "../../../JString.hpp"
#include "./PasswordTransformationMethod.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline PasswordTransformationMethod::PasswordTransformationMethod()
		: JObject(
			"android.text.method.PasswordTransformationMethod",
			"()V"
		) {}
	
	// Methods
	inline android::text::method::PasswordTransformationMethod PasswordTransformationMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.PasswordTransformationMethod",
			"getInstance",
			"()Landroid/text/method/PasswordTransformationMethod;"
		);
	}
	inline void PasswordTransformationMethod::afterTextChanged(JObject arg0) const
	{
		callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	inline void PasswordTransformationMethod::beforeTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const
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
	inline JString PasswordTransformationMethod::getTransformation(JString arg0, android::view::View arg1) const
	{
		return callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void PasswordTransformationMethod::onFocusChanged(android::view::View arg0, JString arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4) const
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
	inline void PasswordTransformationMethod::onTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const
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

// Base class headers

