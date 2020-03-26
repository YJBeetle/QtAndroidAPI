#pragma once

#ifndef ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN
#define ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"
#include "MetricAffectingSpan.hpp"
#include "ReplacementSpan.hpp"

namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Paint_FontMetricsInt;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::text::style
{
	class DynamicDrawableSpan : public __jni_impl::android::text::style::ReplacementSpan
	{
	public:
		// Fields
		static jint ALIGN_BASELINE();
		static jint ALIGN_BOTTOM();
		static jint ALIGN_CENTER();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getSize(__jni_impl::android::graphics::Paint arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Paint_FontMetricsInt arg4);
		jint getVerticalAlignment();
		QAndroidJniObject getDrawable();
		void draw(__jni_impl::android::graphics::Canvas arg0, jstring arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, __jni_impl::android::graphics::Paint arg8);
	};
} // namespace __jni_impl::android::text::style

#include "../../graphics/Paint.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../graphics/Canvas.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	jint DynamicDrawableSpan::ALIGN_BASELINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.DynamicDrawableSpan",
			"ALIGN_BASELINE"
		);
	}
	jint DynamicDrawableSpan::ALIGN_BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.DynamicDrawableSpan",
			"ALIGN_BOTTOM"
		);
	}
	jint DynamicDrawableSpan::ALIGN_CENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.DynamicDrawableSpan",
			"ALIGN_CENTER"
		);
	}
	
	// Constructors
	void DynamicDrawableSpan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.DynamicDrawableSpan",
			"()V");
	}
	
	// Methods
	jint DynamicDrawableSpan::getSize(__jni_impl::android::graphics::Paint arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Paint_FontMetricsInt arg4)
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
	jint DynamicDrawableSpan::getVerticalAlignment()
	{
		return __thiz.callMethod<jint>(
			"getVerticalAlignment",
			"()I"
		);
	}
	QAndroidJniObject DynamicDrawableSpan::getDrawable()
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void DynamicDrawableSpan::draw(__jni_impl::android::graphics::Canvas arg0, jstring arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, __jni_impl::android::graphics::Paint arg8)
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
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class DynamicDrawableSpan : public __jni_impl::android::text::style::DynamicDrawableSpan
	{
	public:
		DynamicDrawableSpan(QAndroidJniObject obj) { __thiz = obj; }
		DynamicDrawableSpan()
		{
			__constructor();
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN

