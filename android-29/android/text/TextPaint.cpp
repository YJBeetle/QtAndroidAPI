#include "../graphics/Paint.hpp"
#include "./TextPaint.hpp"

namespace android::text
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
	
	TextPaint::TextPaint(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextPaint::TextPaint()
	{
		__thiz = QAndroidJniObject(
			"android.text.TextPaint",
			"()V"
		);
	}
	TextPaint::TextPaint(android::graphics::Paint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.TextPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
	TextPaint::TextPaint(jint &arg0)
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
	void TextPaint::set(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::text

