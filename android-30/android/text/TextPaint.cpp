#include "../graphics/Paint.hpp"
#include "./TextPaint.hpp"

namespace android::text
{
	// Fields
	jint TextPaint::baselineShift()
	{
		return getField<jint>(
			"baselineShift"
		);
	}
	jint TextPaint::bgColor()
	{
		return getField<jint>(
			"bgColor"
		);
	}
	jfloat TextPaint::density()
	{
		return getField<jfloat>(
			"density"
		);
	}
	jintArray TextPaint::drawableState()
	{
		return getObjectField(
			"drawableState",
			"[I"
		).object<jintArray>();
	}
	jint TextPaint::linkColor()
	{
		return getField<jint>(
			"linkColor"
		);
	}
	jint TextPaint::underlineColor()
	{
		return getField<jint>(
			"underlineColor"
		);
	}
	jfloat TextPaint::underlineThickness()
	{
		return getField<jfloat>(
			"underlineThickness"
		);
	}
	
	// QAndroidJniObject forward
	TextPaint::TextPaint(QAndroidJniObject obj) : android::graphics::Paint(obj) {}
	
	// Constructors
	TextPaint::TextPaint()
		: android::graphics::Paint(
			"android.text.TextPaint",
			"()V"
		) {}
	TextPaint::TextPaint(android::graphics::Paint arg0)
		: android::graphics::Paint(
			"android.text.TextPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		) {}
	TextPaint::TextPaint(jint arg0)
		: android::graphics::Paint(
			"android.text.TextPaint",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jfloat TextPaint::getUnderlineThickness()
	{
		return callMethod<jfloat>(
			"getUnderlineThickness",
			"()F"
		);
	}
	void TextPaint::set(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text

