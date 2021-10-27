#pragma once

#include "../../__JniBaseClass.hpp"
#include "../graphics/Paint.hpp"

namespace __jni_impl::android::graphics
{
	class Paint;
}

namespace __jni_impl::android::text
{
	class TextPaint : public __jni_impl::android::graphics::Paint
	{
	public:
		// Fields
		jint baselineShift();
		jint bgColor();
		jfloat density();
		jintArray drawableState();
		jint linkColor();
		jint underlineColor();
		jfloat underlineThickness();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Paint arg0);
		void __constructor(jint arg0);
		
		// Methods
		jfloat getUnderlineThickness();
		void set(__jni_impl::android::text::TextPaint arg0);
	};
} // namespace __jni_impl::android::text

#include "../graphics/Paint.hpp"

namespace __jni_impl::android::text
{
	// Fields
	jint TextPaint::baselineShift()
	{
		return __thiz.getField<jint>(
			"baselineShift"
		);
	}
	jint TextPaint::bgColor()
	{
		return __thiz.getField<jint>(
			"bgColor"
		);
	}
	jfloat TextPaint::density()
	{
		return __thiz.getField<jfloat>(
			"density"
		);
	}
	jintArray TextPaint::drawableState()
	{
		return __thiz.getObjectField(
			"drawableState",
			"[I"
		).object<jintArray>();
	}
	jint TextPaint::linkColor()
	{
		return __thiz.getField<jint>(
			"linkColor"
		);
	}
	jint TextPaint::underlineColor()
	{
		return __thiz.getField<jint>(
			"underlineColor"
		);
	}
	jfloat TextPaint::underlineThickness()
	{
		return __thiz.getField<jfloat>(
			"underlineThickness"
		);
	}
	
	// Constructors
	void TextPaint::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.TextPaint",
			"()V"
		);
	}
	void TextPaint::__constructor(__jni_impl::android::graphics::Paint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.TextPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
	void TextPaint::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.TextPaint",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jfloat TextPaint::getUnderlineThickness()
	{
		return __thiz.callMethod<jfloat>(
			"getUnderlineThickness",
			"()F"
		);
	}
	void TextPaint::set(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class TextPaint : public __jni_impl::android::text::TextPaint
	{
	public:
		TextPaint(QAndroidJniObject obj) { __thiz = obj; }
		TextPaint()
		{
			__constructor();
		}
		TextPaint(__jni_impl::android::graphics::Paint arg0)
		{
			__constructor(
				arg0);
		}
		TextPaint(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

