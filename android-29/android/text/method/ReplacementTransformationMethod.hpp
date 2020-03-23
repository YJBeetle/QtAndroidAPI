#pragma once

#ifndef ANDROID_TEXT_METHOD_REPLACEMENTTRANSFORMATIONMETHOD
#define ANDROID_TEXT_METHOD_REPLACEMENTTRANSFORMATIONMETHOD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::text::method
{
	class ReplacementTransformationMethod : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onFocusChanged(__jni_impl::android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, __jni_impl::android::graphics::Rect arg4);
		QAndroidJniObject getTransformation(jstring arg0, __jni_impl::android::view::View arg1);
	};
} // namespace __jni_impl::android::text::method

#include "../../view/View.hpp"
#include "../../graphics/Rect.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void ReplacementTransformationMethod::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.ReplacementTransformationMethod",
			"()V");
	}
	
	// Methods
	void ReplacementTransformationMethod::onFocusChanged(__jni_impl::android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, __jni_impl::android::graphics::Rect arg4)
	{
		__thiz.callMethod<void>(
			"onFocusChanged",
			"(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	QAndroidJniObject ReplacementTransformationMethod::getTransformation(jstring arg0, __jni_impl::android::view::View arg1)
	{
		return __thiz.callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class ReplacementTransformationMethod : public __jni_impl::android::text::method::ReplacementTransformationMethod
	{
	public:
		ReplacementTransformationMethod(QAndroidJniObject obj) { __thiz = obj; }
		ReplacementTransformationMethod()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_REPLACEMENTTRANSFORMATIONMETHOD

