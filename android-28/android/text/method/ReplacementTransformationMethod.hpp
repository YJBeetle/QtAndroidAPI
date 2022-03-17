#pragma once

#include "../../../JCharArray.hpp"
#include "../../graphics/Rect.def.hpp"
#include "../../view/View.def.hpp"
#include "../../../JString.hpp"
#include "./ReplacementTransformationMethod.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline ReplacementTransformationMethod::ReplacementTransformationMethod()
		: JObject(
			"android.text.method.ReplacementTransformationMethod",
			"()V"
		) {}
	
	// Methods
	inline JString ReplacementTransformationMethod::getTransformation(JString arg0, android::view::View arg1) const
	{
		return callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void ReplacementTransformationMethod::onFocusChanged(android::view::View arg0, JString arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4) const
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
} // namespace android::text::method

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::method;
#endif
