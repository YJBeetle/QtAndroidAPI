#pragma once

#ifndef ANDROID_GRAPHICS_TEXT_MEASUREDTEXT
#define ANDROID_GRAPHICS_TEXT_MEASUREDTEXT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::graphics::text
{
	class MeasuredText : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void getBounds(jint arg0, jint arg1, __jni_impl::android::graphics::Rect arg2);
		jfloat getCharWidthAt(jint arg0);
		jfloat getWidth(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::graphics::text

#include "../Rect.hpp"

namespace __jni_impl::android::graphics::text
{
	// Fields
	
	// Constructors
	void MeasuredText::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.MeasuredText",
			"(V)V");
	}
	
	// Methods
	void MeasuredText::getBounds(jint arg0, jint arg1, __jni_impl::android::graphics::Rect arg2)
	{
		__thiz.callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jfloat MeasuredText::getCharWidthAt(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getCharWidthAt",
			"(I)F",
			arg0
		);
	}
	jfloat MeasuredText::getWidth(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::graphics::text

namespace android::graphics::text
{
	class MeasuredText : public __jni_impl::android::graphics::text::MeasuredText
	{
	public:
		MeasuredText(QAndroidJniObject obj) { __thiz = obj; }
		MeasuredText()
		{
			__constructor();
		}
	};
} // namespace android::graphics::text

#endif // ANDROID_GRAPHICS_TEXT_MEASUREDTEXT

