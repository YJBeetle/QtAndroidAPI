#pragma once

#ifndef ANDROID_TEXT_STYLE_REPLACEMENTSPAN
#define ANDROID_TEXT_STYLE_REPLACEMENTSPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"
#include "MetricAffectingSpan.hpp"

namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Paint_FontMetricsInt;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}

namespace __jni_impl::android::text::style
{
	class ReplacementSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void draw(__jni_impl::android::graphics::Canvas arg0, jstring arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, __jni_impl::android::graphics::Paint arg8);
		void draw(__jni_impl::android::graphics::Canvas arg0, const QString &arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, __jni_impl::android::graphics::Paint arg8);
		jint getSize(__jni_impl::android::graphics::Paint arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Paint_FontMetricsInt arg4);
		jint getSize(__jni_impl::android::graphics::Paint arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Paint_FontMetricsInt arg4);
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
	};
} // namespace __jni_impl::android::text::style

#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void ReplacementSpan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ReplacementSpan",
			"()V"
		);
	}
	
	// Methods
	void ReplacementSpan::draw(__jni_impl::android::graphics::Canvas arg0, jstring arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, __jni_impl::android::graphics::Paint arg8)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object()
		);
	}
	void ReplacementSpan::draw(__jni_impl::android::graphics::Canvas arg0, const QString &arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, __jni_impl::android::graphics::Paint arg8)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object()
		);
	}
	jint ReplacementSpan::getSize(__jni_impl::android::graphics::Paint arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Paint_FontMetricsInt arg4)
	{
		return __thiz.callMethod<jint>(
			"getSize",
			"(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jint ReplacementSpan::getSize(__jni_impl::android::graphics::Paint arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Paint_FontMetricsInt arg4)
	{
		return __thiz.callMethod<jint>(
			"getSize",
			"(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void ReplacementSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void ReplacementSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class ReplacementSpan : public __jni_impl::android::text::style::ReplacementSpan
	{
	public:
		ReplacementSpan(QAndroidJniObject obj) { __thiz = obj; }
		ReplacementSpan()
		{
			__constructor();
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_REPLACEMENTSPAN

