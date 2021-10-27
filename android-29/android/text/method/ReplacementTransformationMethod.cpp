#include "../../graphics/Rect.hpp"
#include "../../view/View.hpp"
#include "./ReplacementTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	ReplacementTransformationMethod::ReplacementTransformationMethod(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReplacementTransformationMethod::ReplacementTransformationMethod()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.ReplacementTransformationMethod",
			"()V"
		);
	}
	
	// Methods
	jstring ReplacementTransformationMethod::getTransformation(jstring arg0, android::view::View arg1)
	{
		return __thiz.callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ReplacementTransformationMethod::getTransformation(const QString &arg0, android::view::View arg1)
	{
		return __thiz.callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	void ReplacementTransformationMethod::onFocusChanged(android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4)
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
	void ReplacementTransformationMethod::onFocusChanged(android::view::View arg0, const QString &arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4)
	{
		__thiz.callMethod<void>(
			"onFocusChanged",
			"(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
} // namespace android::text::method

