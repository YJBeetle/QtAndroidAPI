#include "../../graphics/Rect.hpp"
#include "../../view/View.hpp"
#include "./ReplacementTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QJniObject forward
	ReplacementTransformationMethod::ReplacementTransformationMethod(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ReplacementTransformationMethod::ReplacementTransformationMethod()
		: JObject(
			"android.text.method.ReplacementTransformationMethod",
			"()V"
		) {}
	
	// Methods
	jstring ReplacementTransformationMethod::getTransformation(jstring arg0, android::view::View arg1)
	{
		return callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	void ReplacementTransformationMethod::onFocusChanged(android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4)
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
} // namespace android::text::method

