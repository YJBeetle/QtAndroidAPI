#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "./DynamicDrawableSpan.hpp"

namespace android::text::style
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
	
	DynamicDrawableSpan::DynamicDrawableSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DynamicDrawableSpan::DynamicDrawableSpan()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.DynamicDrawableSpan",
			"()V"
		);
	}
	
	// Methods
	void DynamicDrawableSpan::draw(android::graphics::Canvas arg0, jstring arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8)
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
	void DynamicDrawableSpan::draw(android::graphics::Canvas arg0, const QString &arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8)
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
	QAndroidJniObject DynamicDrawableSpan::getDrawable()
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint DynamicDrawableSpan::getSize(android::graphics::Paint arg0, jstring arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4)
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
	jint DynamicDrawableSpan::getSize(android::graphics::Paint arg0, const QString &arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4)
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
	jint DynamicDrawableSpan::getVerticalAlignment()
	{
		return __thiz.callMethod<jint>(
			"getVerticalAlignment",
			"()I"
		);
	}
} // namespace android::text::style

