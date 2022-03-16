#include "../../../JCharArray.hpp"
#include "../../graphics/Rect.hpp"
#include "../../view/View.hpp"
#include "../../../JString.hpp"
#include "./ReplacementTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	ReplacementTransformationMethod::ReplacementTransformationMethod()
		: JObject(
			"android.text.method.ReplacementTransformationMethod",
			"()V"
		) {}
	
	// Methods
	JString ReplacementTransformationMethod::getTransformation(JString arg0, android::view::View arg1) const
	{
		return callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void ReplacementTransformationMethod::onFocusChanged(android::view::View arg0, JString arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4) const
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

