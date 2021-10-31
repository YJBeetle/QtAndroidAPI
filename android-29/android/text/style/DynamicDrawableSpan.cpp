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
	
	// QAndroidJniObject forward
	DynamicDrawableSpan::DynamicDrawableSpan(QAndroidJniObject obj) : android::text::style::ReplacementSpan(obj) {}
	
	// Constructors
	DynamicDrawableSpan::DynamicDrawableSpan()
		: android::text::style::ReplacementSpan(
			"android.text.style.DynamicDrawableSpan",
			"()V"
		) {}
	
	// Methods
	void DynamicDrawableSpan::draw(android::graphics::Canvas arg0, jstring arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
	QAndroidJniObject DynamicDrawableSpan::getDrawable()
	{
		return callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint DynamicDrawableSpan::getSize(android::graphics::Paint arg0, jstring arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4)
	{
		return callMethod<jint>(
			"getSize",
			"(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	jint DynamicDrawableSpan::getVerticalAlignment()
	{
		return callMethod<jint>(
			"getVerticalAlignment",
			"()I"
		);
	}
} // namespace android::text::style
